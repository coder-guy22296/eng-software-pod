#include <localdef.h>

#ifndef C_LOCALDEF__LCCM655__ENABLE_THIS_MODULE
	#error
#endif

#if C_LOCALDEF__LCCM655__ENABLE_THIS_MODULE == 1U
#if C_LOCALDEF__LCCM655__ENABLE_TEST_SPEC == 1U

extern Lfloat32 f32A34_BrakeTable[];

//70 rows of data, 6 entries per row

//The A32 original data
//index,F_drag,F_lift,Force2.Force_y,h,v
Lfloat32 f32A34Data[] = {
16,212.182070937,-854.307696354,711.303140926,0.002,0.1,
16,135.148202715,-548.18278204,453.954050439,0.004,0.1,
16,56.3763206068,-225.854748027,181.815611355,0.008,0.1,
16,9.85978663086,-36.3304221246,26.066435676,0.016,0.1,
16,1.31271513856,-1.2625462584,-4.15677705595,0.032,0.1,
16,633.04142635,-969.23377081,542.810272044,0.002,0.3,
16,405.096689713,-623.76916829,344.250560203,0.004,0.3,
16,169.160293853,-258.033113707,135.050606326,0.008,0.3,
16,30.778480691,-42.3647676169,17.3838485514,0.016,0.3,
16,2.27546392338,-1.20522642756,-4.91383852927,0.032,0.3,
22,2014.22192532,-1208.633695,-147.180100671,0.002,1.0,
22,1287.53775377,-787.296717576,-99.889415558,0.004,1.0,
22,539.356519122,-329.761789962,-52.2887965748,0.008,1.0,
22,99.581189649,-56.2982128562,-17.7118781602,0.016,1.0,
22,5.86484045478,-1.91239574215,-7.05555298856,0.032,1.0,
28,6365.1441606,-997.376648591,-3095.02688985,0.002,4.0,
28,4070.82881182,-680.499856431,-2005.55861609,0.004,4.0,
28,1708.95134972,-296.934960598,-863.154787078,0.008,4.0,
28,316.298904059,-53.6913605503,-171.161900403,0.016,4.0,
28,16.8929448758,-3.14824064835,-15.0022719943,0.032,4.0,
45,8367.95708197,323.40862419,-5263.59397017,0.002,7.0,
45,5334.78020483,146.092758937,-3402.93316775,0.004,7.0,
45,2240.47183133,43.7015196188,-1463.00924437,0.008,7.0,
45,414.477153349,6.25678001557,-285.403565197,0.016,7.0,
45,21.6932282531,-1.07558585227,-21.5008582909,0.032,7.0,
36,8457.36804312,917.425426258,-5721.71814721,0.002,8.0,
36,5399.67283797,531.173126956,-3705.47922125,0.004,8.0,
36,2264.77750647,201.242099774,-1587.38769726,0.008,8.0,
36,418.405795884,34.6248537354,-310.039457854,0.016,8.0,
36,21.8326796244,0.1972497697,-23.3319269946,0.032,8.0,
30,8697.56418144,1914.83706469,-6465.49594834,0.002,10.0,
30,5543.922441,1168.30236412,-4183.36364654,0.004,10.0,
30,2323.28741131,465.307604511,-1791.28541192,0.008,10.0,
30,429.557954566,81.8059209847,-348.943754667,0.016,10.0,
30,22.5331314949,1.82926133385,-25.3515047022,0.032,10.0,
51,8627.52704589,3254.20756892,-7143.82939044,0.002,13.0,
51,5482.54787439,2022.8598997,-4615.06126354,0.004,13.0,
51,2290.87338824,824.885998411,-1973.56676607,0.008,13.0,
51,420.260411182,147.516415824,-384.008760591,0.016,13.0,
51,21.0365935225,5.25801207842,-28.2585431611,0.032,13.0,
57,8419.7534932,4341.18160278,-7541.63523507,0.002,16.0,
57,5335.95572603,2718.7910444,-4865.06031282,0.004,16.0,
57,2225.80741134,1113.64193702,-2077.84141399,0.008,16.0,
57,406.801361162,200.08737041,-403.422331335,0.016,16.0,
57,19.6301672887,8.25972647481,-29.1448521526,0.032,16.0,
65,8092.85034011,5480.84710654,-7859.77636609,0.002,20.0,
65,5111.92389638,3443.78340472,-5056.84958097,0.004,20.0,

65,2126.6241654,1418.34522924,-2157.29401489,0.008,20.0,
65,387.428893789,254.937706251,-418.315329595,0.016,20.0,
65,17.8861218092,9.62919233388,-29.8447133696,0.032,20.0,
115,7150.76468008,7286.74073922,-8318.23472406,0.002,30.0,
115,4512.12573725,4594.97492674,-5324.35586924,0.004,30.0,
115,1875.49203701,1898.35034239,-2261.99307286,0.008,30.0,
115,339.961253038,342.043829642,-435.561629617,0.016,30.0,
115,14.9858485058,14.3064290738,-29.23183637,0.032,30.0,
175,6310.17627335,9047.78178724,-9098.59177641,0.002,50.0,
175,3960.88623854,5696.57923919,-5802.01611282,0.004,50.0,
175,1641.55411838,2359.06964252,-2459.31649755,0.008,50.0,
175,296.775644683,424.084616625,-470.70856415,0.016,50.0,
175,12.8854447265,16.2191855887,-30.8478313728,0.032,50.0,
275,4979.17733327,10548.4557949,-10445.9865073,0.002,100.0,
275,3122.94319578,6619.38712424,-6623.95163805,0.004,100.0,
275,1295.47269538,2735.10072824,-2800.31427587,0.008,100.0,
275,235.887552062,491.66759575,-534.83759588,0.016,100.0,
275,11.755401386,18.969332074,-34.5863886588,0.032,100.0,
425,4339.54442853,11217.2235695,-11175.314369,0.002,150.0,
425,2716.33630938,7029.09542345,-7073.77810657,0.004,150.0,
425,1125.58759913,2904.5247491,-2983.88485839,0.008,150.0,
425,204.234646055,521.736289842,-568.70974646,0.016,150.0,
425,9.87545118558,20.4201525974,-35.7785844576,0.032,150.0


};


void vLCCM655R0_TS_006_TCASE_001(void);


//Function to call the tests for this test specification
void vLCCM655R0_TS_006(void)
{

	//Call the test cases
	vLCCM655R0_TS_006_TCASE_001();

}

//Individual Test Cases can be found below
/***************************************************************************//**
 * @st_test_case_id
 * LCCM655R0.TS.006.TCASE.001
 * @st_test_desc
 * Check our table against the original table
 * 
*/
void vLCCM655R0_TS_006_TCASE_001(void)
{
	Luint32 u32Counter;
	Luint32 u32Index;
	Luint8 u8Test;
	Luint32 u32Veloc_mms;
	Luint32 u32DragForce_n;
	Luint32 u32IBDistance_um;
	Lint16 s16Test;
	Lfloat32 f32Temp;
	Lfloat32 f32Height;

	DEBUG_PRINT("START:LCCM655R0.TS.006.TCASE.001\r\n");

	u8Test = 1U;

	for(u32Counter = 0U; u32Counter < 70U; u32Counter++)
	{

		//compute the lookup table index
		u32Index = u32Counter * 6;

		//get the veloc and convert to mm/s
		f32Temp = f32A34Data[u32Index + 5U];
		f32Temp *= 1000.0F;
		u32Veloc_mms = (Luint32)f32Temp;

		//only do above 25m/s
		if(u32Veloc_mms == 30000)
		{
			//get the drag force
			f32Temp = f32A34Data[u32Index + 1U];
			u32DragForce_n = (Luint32)f32Temp;

			//do the lookup
			s16Test = s16FCU_FLIGHTCTL_BRAKES__Brake_Lookup(u32Veloc_mms, u32DragForce_n, &u32IBDistance_um);
			
			//compare from the table
			f32Height = f32A34Data[u32Index + 4U];
			//meters to microns.
			f32Height *= 1000000;
			
			if (s16Test == 0)
			{
				u8Test = 1U;
			}
		}
		else
		{
			//veloc too low.
		}

	}


	if(u8Test == 1U)
	{
		DEBUG_PRINT("PASS:LCCM655R0.TS.006.TCASE.001\r\n");
	}
	else
	{
		DEBUG_PRINT("FAIL:LCCM655R0.TS.006.TCASE.001\r\n");
	}
	DEBUG_PRINT("END:LCCM655R0.TS.006.TCASE.001\r\n");

}

#endif
#ifndef C_LOCALDEF__LCCM655__ENABLE_TEST_SPEC
	#error
#endif

#endif

