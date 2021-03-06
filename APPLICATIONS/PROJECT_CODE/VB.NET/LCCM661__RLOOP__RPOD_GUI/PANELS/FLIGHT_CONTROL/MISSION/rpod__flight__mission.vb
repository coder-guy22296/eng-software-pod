﻿Namespace SIL3.rLoop.rPodControl.Panels.FlightControl

    ''' <summary>
    ''' Mission Control Page
    ''' </summary>
    ''' <remarks></remarks>
    Public Class Mission
        Inherits SIL3.ApplicationSupport.PanelTemplate

#Region "CONSTANTS"

#End Region '#Region "CONSTANTS"

#Region "MEMBERS"

        Private m_iRxCount As Integer
        Private m_txtRxCount As SIL3.ApplicationSupport.TextBoxHelper

        Private m_txtFlags As SIL3.ApplicationSupport.TextBoxHelper_FaultFlags
        Private m_txtMissionPhase As SIL3.ApplicationSupport.TextBoxHelper_StateDisplay
        Private m_txtDistFilt As SIL3.ApplicationSupport.TextBoxHelper

        ''' <summary>
        ''' The logging directory
        ''' </summary>
        Private m_sLogDir As String


#End Region '#Region "MEMBERS"

#Region "NEW"
        ''' <summary>
        ''' New instance
        ''' </summary>
        ''' <param name="sPanelText"></param>
        ''' <remarks></remarks>
        Public Sub New(sPanelText As String, sLog As String)
            MyBase.New(sPanelText)

            Me.m_sLogDir = sLog
            Me.m_sLogDir = Me.m_sLogDir & "MISSION\"
            If Me.m_sLogDir.Contains(":\") = True Then
                SIL3.FileSupport.FileHelpers.Folder__CheckWarnMake(Me.m_sLogDir, True)
            End If


        End Sub
#End Region '#Region "New"

#Region "EVENTS"

        ''' <summary>
        ''' Raised wehen we want to transmit a control packet
        ''' </summary>
        ''' <param name="u16Type"></param>
        ''' <param name="u32Block0"></param>
        ''' <param name="u32Block1"></param>
        ''' <param name="u32Block2"></param>
        ''' <param name="u32Block3"></param>
        ''' <remarks></remarks>

        Public Event UserEvent__SafeUDP__Tx_X4(eEndpoint As SIL3.rLoop.rPodControl.Ethernet.E_POD_CONTROL_POINTS, u16Type As UInt16, u32Block0 As UInt32, u32Block1 As UInt32, u32Block2 As UInt32, u32Block3 As UInt32)


        ''' <summary>
        ''' New Packet In
        ''' </summary>
        ''' <param name="ePacketType"></param>
        ''' <param name="u16PayloadLength"></param>
        ''' <param name="u8Payload"></param>
        ''' <param name="u16CRC"></param>
        Public Sub InernalEvent__UDPSafe__RxPacketB(ByVal ePacketType As SIL3.rLoop.rPodControl.Ethernet.E_NET__PACKET_T, ByVal u16PayloadLength As SIL3.Numerical.U16, ByRef u8Payload() As Byte, ByVal u16CRC As SIL3.Numerical.U16)

            'only do if we have been created
            If MyBase.m_bLayout = True Then

                'match thepacket
                If ePacketType = SIL3.rLoop.rPodControl.Ethernet.E_NET__PACKET_T.NET_PKT__FCU_GEN__TX_MISSION_DATA Then

                    Dim iOffset As Integer = 0

                    Dim pU32Flags As New SIL3.Numerical.U32(u8Payload, iOffset)
                    iOffset += 4
                    Dim pU16MissionPahse As New SIL3.Numerical.U16(u8Payload, iOffset)
                    iOffset += 2



                    'update the GUI
                    Me.m_txtFlags.Flags__Update(pU32Flags, True)
                    Me.m_txtMissionPhase.Value__Update(pU16MissionPahse.To__Int)


                    Me.m_iRxCount += 1
                    Me.m_txtRxCount.Threadsafe__SetText(Me.m_iRxCount.ToString)


                End If
            End If

        End Sub


#End Region '#Region "EVENTS"

#Region "PANEL LAYOUT"
        ''' <summary>
        ''' Create our layout prior to being shown
        ''' </summary>
        ''' <remarks></remarks>
        Public Overrides Sub LayoutPanel()


            Dim l0 As New SIL3.ApplicationSupport.LabelHelper(10, 10, "Streaming Control", MyBase.m_pInnerPanel)
            Dim btnOn As New SIL3.ApplicationSupport.ButtonHelper(100, "Stream On", AddressOf btnStreamOn__Click)
            btnOn.Layout__BelowControl(l0)
            Dim btnOff As New SIL3.ApplicationSupport.ButtonHelper(100, "Stream Off", AddressOf btnStreamOff__Click)
            btnOff.Layout__RightOfControl(btnOn)

            Dim l11 As New SIL3.ApplicationSupport.LabelHelper("Rx Count")
            l11.Layout__AboveRightControl(l0, btnOff)
            Me.m_txtRxCount = New SIL3.ApplicationSupport.TextBoxHelper(100, l11)
            Me.m_txtRxCount.ReadOnly = True

            Dim l110 As New SIL3.ApplicationSupport.LabelHelper("Flight Controls")
            l110.Layout__AboveRightControl(l11, Me.m_txtRxCount)
            Dim btnEnterPreRun As New SIL3.ApplicationSupport.ButtonHelper(100, "Enter Pre-Run", Nothing)
            btnEnterPreRun.Layout__BelowControl(l110)
            btnEnterPreRun.BackColor = Color.Orange
            Dim btnFlightAbort As New SIL3.ApplicationSupport.ButtonHelper(100, "Flight Abort", Nothing)
            btnFlightAbort.Layout__RightOfControl(btnEnterPreRun)
            Dim btnPodStop As New SIL3.ApplicationSupport.ButtonHelper(100, "Pod Stop", AddressOf Me.btnPodStop__Click)
            btnPodStop.Layout__RightOfControl(btnFlightAbort)
            Dim btnPodSafe As New SIL3.ApplicationSupport.ButtonHelper(100, "Pod Safed", AddressOf Me.btnPodSafed__Click)
            btnPodSafe.Layout__RightOfControl(btnPodStop)


            Dim l00 As New SIL3.ApplicationSupport.LabelHelper("Fault Flags", btnOn)
            Me.m_txtFlags = New SIL3.ApplicationSupport.TextBoxHelper_FaultFlags(100, l00)
            Me.m_txtFlags.ReadOnly = True

            Dim l1 As New SIL3.ApplicationSupport.LabelHelper("Mission State")
            l1.Layout__AboveRightControl(l00, Me.m_txtFlags)
            Me.m_txtMissionPhase = New SIL3.ApplicationSupport.TextBoxHelper_StateDisplay(200, l1)
            Me.m_txtMissionPhase.ReadOnly = True


            Me.m_txtMissionPhase.States__Add("MISSION_PHASE__RESET")
            Me.m_txtMissionPhase.States__Add("MISSION_PHASE__TEST_PHASE")
            Me.m_txtMissionPhase.States__Add("MISSION_PHASE__PRE_RUN_PHASE")
            Me.m_txtMissionPhase.States__Add("MISSION_PHASE__PUSH_INTERLOCK_PHASE")
            Me.m_txtMissionPhase.States__Add("MISSION_PHASE__FLIGHT_MODE")


        End Sub

#End Region '#Region "PANEL LAYOUT"

#Region "BUTTON HELPERS"

        Private Sub btnStreamOn__Click(s As Object, e As EventArgs)
            RaiseEvent UserEvent__SafeUDP__Tx_X4(SIL3.rLoop.rPodControl.Ethernet.E_POD_CONTROL_POINTS.POD_CTRL_PT__FCU,
                                                 SIL3.rLoop.rPodControl.Ethernet.E_NET__PACKET_T.NET_PKT__FCU_GEN__STREAMING_CONTROL,
                                                 1, SIL3.rLoop.rPodControl.Ethernet.E_NET__PACKET_T.NET_PKT__FCU_GEN__TX_MISSION_DATA, 0, 0)
        End Sub

        Private Sub btnStreamOff__Click(s As Object, e As EventArgs)
            RaiseEvent UserEvent__SafeUDP__Tx_X4(SIL3.rLoop.rPodControl.Ethernet.E_POD_CONTROL_POINTS.POD_CTRL_PT__FCU,
                                                 SIL3.rLoop.rPodControl.Ethernet.E_NET__PACKET_T.NET_PKT__FCU_GEN__STREAMING_CONTROL,
                                                 0, SIL3.rLoop.rPodControl.Ethernet.E_NET__PACKET_T.NET_PKT__FCU_GEN__TX_MISSION_DATA, 0, 0)
        End Sub



        ''' <summary>
        ''' Transmit our pod safed command to power nodes, kills all power
        ''' </summary>
        ''' <param name="s"></param>
        ''' <param name="e"></param>
        Private Sub btnPodSafed__Click(s As Object, e As EventArgs)

            If MsgBox("Warning: This will Electrically Safe the pod" & Environment.NewLine & "All power will be lost, Continue?", MsgBoxStyle.OkCancel, "Pod Safe Command") = MsgBoxResult.Ok Then
                RaiseEvent UserEvent__SafeUDP__Tx_X4(SIL3.rLoop.rPodControl.Ethernet.E_POD_CONTROL_POINTS.POD_CTRL_PT__POWER_A,
                                                 SIL3.rLoop.rPodControl.Ethernet.E_NET__PACKET_T.NET_PKT__PWR_GEN__POD_SAFE_COMMAND,
                                                 &H76543210L, 0, 0, 0)

            End If

        End Sub

        ''' <summary>
        ''' Do the pod stop command
        ''' </summary>
        ''' <param name="s"></param>
        ''' <param name="e"></param>
        Private Sub btnPodStop__Click(s As Object, e As EventArgs)

            If MsgBox("Warning: This will STOP the pod, Brakes Activated!" & Environment.NewLine & "Continue?", MsgBoxStyle.OkCancel, "Pod Safe Command") = MsgBoxResult.Ok Then
                RaiseEvent UserEvent__SafeUDP__Tx_X4(SIL3.rLoop.rPodControl.Ethernet.E_POD_CONTROL_POINTS.POD_CTRL_PT__POWER_A,
                                                 SIL3.rLoop.rPodControl.Ethernet.E_NET__PACKET_T.NET_PKT__FCU_GEN__POD_STOP_COMMAND,
                                                 &H1234ABCDL, 0, 0, 0)

            End If

        End Sub

#End Region '#Region "BUTTON HELPERS"

    End Class


End Namespace
