﻿Namespace SIL3.rLoop.rPodControl.Panels.FlightControl

    ''' <summary>
    ''' Fwd Laser Distance System
    ''' </summary>
    ''' <remarks></remarks>
    Public Class LaserDistance
        Inherits SIL3.ApplicationSupport.PanelTemplate

#Region "CONSTANTS"

#End Region '#Region "CONSTANTS"

#Region "MEMBERS"

        Private m_iRxCount As Integer
        Private m_txtCount As SIL3.ApplicationSupport.TextBoxHelper

        Private m_txtFlags As SIL3.ApplicationSupport.TextBoxHelper_FaultFlags
        Private m_txtDistRAW As SIL3.ApplicationSupport.TextBoxHelper
        Private m_txtDistFilt As SIL3.ApplicationSupport.TextBoxHelper

        ''' <summary>
        ''' The logging directory
        ''' </summary>
        Private m_sLogDir As String

        ''' <summary>
        ''' Allows us to write CSV logs of the edges
        ''' </summary>
        Private m_pCSV As SIL3.FileSupport.CSV


        ''' <summary>
        ''' Our DAQ Receiver
        ''' </summary>
        Private m_pDAQ As SIL3.DAQ.Top

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
            Me.m_sLogDir = Me.m_sLogDir & "LASER_DIST\"

            'check our folder
            SIL3.FileSupport.FileHelpers.Folder__CheckWarnMake(Me.m_sLogDir, True)

            'create the log files in prep
            'Me.m_pCSV = New SIL3.FileSupport.CSV(Me.m_sLogDir & "Laser0.csv", ",", False, False)
            'If Me.m_pCSV.File__Exists = False Then
            'End If


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
                If ePacketType = SIL3.rLoop.rPodControl.Ethernet.E_NET__PACKET_T.NET_PKT__LASER_DIST__TX_LASER_DATA Then

                    Dim iOffset As Integer = 0

                    Dim pU3lags As New SIL3.Numerical.U32(u8Payload, iOffset)
                    iOffset += 4

                    Dim pU32Spare0 As New SIL3.Numerical.U32(u8Payload, iOffset)
                    iOffset += 4
                    Dim pU32Spare1 As New SIL3.Numerical.U32(u8Payload, iOffset)
                    iOffset += 4
                    Dim pU32Spare2 As New SIL3.Numerical.U32(u8Payload, iOffset)
                    iOffset += 4


                    Dim pF32DistRaw As New SIL3.Numerical.F32(u8Payload, iOffset)
                    iOffset += 4
                    Dim pF32DistFiltered As New SIL3.Numerical.F32(u8Payload, iOffset)
                    iOffset += 4


                    Dim pU32Spare3 As New SIL3.Numerical.U32(u8Payload, iOffset)
                    iOffset += 4


                    'update the GUI
                    Me.m_txtFlags.Flags__Update(pU3lags, True)
                    Me.m_txtDistRAW.Threadsafe__SetText(pF32DistRaw.To__Float32.ToString("0.000"))
                    Me.m_txtDistFilt.Threadsafe__SetText(pF32DistFiltered.To__Float32.ToString("0.000"))


                    Me.m_iRxCount += 1
                    Me.m_txtCount.Threadsafe__SetText(Me.m_iRxCount.ToString)


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

            Dim l0 As New SIL3.ApplicationSupport.LabelHelper(10, 10, "Fault Flags", MyBase.m_pInnerPanel)
            Me.m_txtFlags = New SIL3.ApplicationSupport.TextBoxHelper_FaultFlags(100, l0)

            Dim l1 As New SIL3.ApplicationSupport.LabelHelper("Distance Raw")
            l1.Layout__BelowControl(Me.m_txtFlags)
            Me.m_txtDistRAW = New SIL3.ApplicationSupport.TextBoxHelper(100, l1)

            Dim l2 As New SIL3.ApplicationSupport.LabelHelper("Distance Filtered")
            l2.Layout__AboveRightControl(l1, Me.m_txtDistRAW)
            Me.m_txtDistFilt = New SIL3.ApplicationSupport.TextBoxHelper(100, l2)

            Dim l11 As New SIL3.ApplicationSupport.LabelHelper("Rx Count")
            l11.Layout__BelowControl(m_txtDistRAW)
            Me.m_txtCount = New SIL3.ApplicationSupport.TextBoxHelper(100, l11)

            Dim btnOn As New SIL3.ApplicationSupport.ButtonHelper(100, "Stream On", AddressOf btnStreamOn__Click)
            btnOn.Layout__BelowControl(Me.m_txtCount)

            Dim btnOff As New SIL3.ApplicationSupport.ButtonHelper(100, "Stream Off", AddressOf btnStreamOff__Click)
            btnOff.Layout__RightOfControl(btnOn)


        End Sub

#End Region '#Region "PANEL LAYOUT"

#Region "BUTTON HELPERS"

        Private Sub btnStreamOn__Click(s As Object, e As EventArgs)
            RaiseEvent UserEvent__SafeUDP__Tx_X4(SIL3.rLoop.rPodControl.Ethernet.E_POD_CONTROL_POINTS.POD_CTRL_PT__FCU,
                                                 SIL3.rLoop.rPodControl.Ethernet.E_NET__PACKET_T.NET_PKT__FCU_GEN__STREAMING_CONTROL,
                                                 1, SIL3.rLoop.rPodControl.Ethernet.E_NET__PACKET_T.NET_PKT__LASER_DIST__TX_LASER_DATA, 0, 0)
        End Sub

        Private Sub btnStreamOff__Click(s As Object, e As EventArgs)
            RaiseEvent UserEvent__SafeUDP__Tx_X4(SIL3.rLoop.rPodControl.Ethernet.E_POD_CONTROL_POINTS.POD_CTRL_PT__FCU,
                                                 SIL3.rLoop.rPodControl.Ethernet.E_NET__PACKET_T.NET_PKT__FCU_GEN__STREAMING_CONTROL,
                                                 0, SIL3.rLoop.rPodControl.Ethernet.E_NET__PACKET_T.NET_PKT__LASER_DIST__TX_LASER_DATA, 0, 0)
        End Sub



#End Region '#Region "BUTTON HELPERS"

    End Class


End Namespace
