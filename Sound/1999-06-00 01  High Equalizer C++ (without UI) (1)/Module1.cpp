// Module1.cpp: implementation of the Module1 class.
//
//////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "EQ.h"
#include "Module1.h"
//zelf bijgezet
#include <math.h>
#include <iostream.h>
#include <stdio.h>
#include <stdlib.h>
#include <process.h>
//#include <afx.h>
#include <string.h>

#ifdef _DEBUG
#undef THIS_FILE
static char THIS_FILE[]=__FILE__;
#define new DEBUG_NEW
#endif

//class Module1 : 
//public Mod1

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

//CAboutDlg::CAboutDlg() : CDialog(CAboutDlg::IDD)
Module1::Module1()	//:	 Mod1(Module1::IDD)
{

}

Module1::~Module1()
{

}

int Module1::filter(CEQDlg *eqdlg)
{

 //--------------------------------------------------------------------------------------//
//| filtermethode 8-bands EQ:															 |//
//|--------------------------------------------------------------------------------------|//
//|																						 |//
//|		Voor elke grens van de EQ-banden wordt het geluid geresampled, waabij			 |//
//|		de nyquist frequency de frequentie op die grens is. Er onstaan dus 9			 |//
//|		geluiden met verschillende bovengrenzen aan het frequentiebereik.				 |//
//|																						 |//
//|		  de laagste frequentie       : L           = 20								 |//
//|		  de hoogste frequentie       : H           = 22050								 |//
//|		  het interval van l en h     : Inter       = 1102.5 = H/L						 |//
//|									    K           = [0-8]								 |//
//|		  grensfrequenties            : grens[K]  = L * pow(Inter ,(1/8) * K)			 |//
//|		  aantal punten na resampelen : lengte[K] = L + (soundlength-1) * (grens[K]/H)   |//
//|																						 |//
//|--------------------------------------------------------------------------------------|//
//|																						 |//
//|		hierna worden de geresamplede arrays IN 1 FORLOOP teruggeresampled				 |//
//|		naar de oorpronkelijke geluidslengte waarbij PER uiteindelijke SAMPLE			 |//
//|		9 waarden ontstaan die op de volgende manier worden gebruikt om het				 |//
//|		uiteindelijke geluid te vormen:													 |//
//|																						 |//
//|			val0[], val1[], val2[], val3[], val4[], val5[], enz   (samplewaarden)		 |//
//|																						 |//
//|		EQband1 heeft als ondergrens grens[0] en als bovengrens grens[1]				 |//
//|																						 |//
//|			grens[0]: val0[],	grens[1]: val1[]										 |//
//|																						 |//
//|		bij val1 wordt val0 in tegenfase opgeteld:										 |//
//|																						 |//	
//|			EQband1: (val1[] + -val0[])													 |//
//|																						 |//
//|		dus het geluid wordt:   														 |//
//|																						 |//
//|			volume1 * (val1[]-val0[]) +													 |//
//|			volume2 * (val2[]-val1[]) +													 |//
//|			volume3 * (val3[]-val2[]) +													 |//
//|  		volume4 * (val4[]-val3[]) +													 |//
//|			volume5 * (val5[]-val4[])													 |//
//|																						 |//
 //--------------------------------------------------------------------------------------//

 //--------------------------------------------------------------------------------------//
//|																						 |//
//| - de lengtes van de geresamplede geluiden zijn long integers, dus hoe kleiner het    |//
//|	  geluid, hoe meer de frequentiegrenzen afwijken van het gewenste					 |//
//|																						 |//
//| - de hoogste frequentiegrens is de nyquist frequency van het geluid zelf, dus er	 |//
//|   hoeft hiervoor niet geresampled te worden											 |//
//|																						 |//
//| - er is pas sprake van een tijdbestek bij 2 samples, een geluid van bv. 30 samples	 |//
//|	  bestaat uit 29 "tijsbestekken", vandaar alle -1tjes en +1tjes bij het resamplen	 |//
//|																						 |//
//|--------------------------------------------------------------------------------------|//
//|																						 |//
//|		inter ^ 0 = 1																     |//
//|		inter ^ 1 = 1102.5																 |//
//|		20 * (inter ^ 0) = 20															 |//
//|		20 * (inter ^ 1) = 22050														 |//
//|		sndlen/22050 * (20 * (inter ^ 0))	= 40    samples in 1 s geluid				 |//
//|		sndlen/22050 * (20 * (inter ^ 1))	= 44100 samples	in 1 s geluid				 |//
//|																						 |//
 //--------------------------------------------------------------------------------------//


//*************************************************************************************************
//*************************************** ALLE DECLARATIES ****************************************
//*************************************************************************************************

			soundlength				= 36013;// geluidlengte
			nreqband				= 8;// aantal EQ-banden
	double  volume1					= (100. - double(eqdlg->m_slider1.GetPos())) / 100.;// volumes EQ-banden
	double  volume2					= (100. - double(eqdlg->m_slider2.GetPos())) / 100.;
	double  volume3					= (100. - double(eqdlg->m_slider3.GetPos())) / 100.;
	double  volume4					= (100. - double(eqdlg->m_slider4.GetPos())) / 100.;
	double  volume5					= (100. - double(eqdlg->m_slider5.GetPos())) / 100.;
	double  volume6					= (100. - double(eqdlg->m_slider6.GetPos())) / 100.;
	double  volume7					= (100. - double(eqdlg->m_slider7.GetPos())) / 100.;
	double  volume8					= (100. - double(eqdlg->m_slider8.GetPos())) / 100.;
	double  pow125					= 2.4004758;// pow(interval gehoorsbereik, [0-1])			(pow functie wil niet werken)
	double  pow250					= 5.7622839;
	double  pow375					= 13.832223;
	double  pow500					= 33.203915;
	double  pow625					= 79.705194;
	double  pow750					= 191.33039;
	double  pow875					= 459.28395;
	__int32 *reslength;	reslength	= (__int32*) malloc((nreqband-1) * sizeof(__int32));// resample lengtes
			reslength[0]			= __int32( 1 + ((soundlength-1) * ((20 * pow125) / 22050)) );
			reslength[1]			= __int32( 1 + ((soundlength-1) * ((20 * pow250) / 22050)) );
			reslength[2]			= __int32( 1 + ((soundlength-1) * ((20 * pow375) / 22050)) );
			reslength[3]			= __int32( 1 + ((soundlength-1) * ((20 * pow500) / 22050)) );
			reslength[4]			= __int32( 1 + ((soundlength-1) * ((20 * pow625) / 22050)) );
			reslength[5]			= __int32( 1 + ((soundlength-1) * ((20 * pow750) / 22050)) );
			reslength[6]			= __int32( 1 + ((soundlength-1) * ((20 * pow875) / 22050)) );
	long    i;		long    j;	  // forloop variabelen
	double  t;		long    longt;// tijd variabelen
	double  t1;		double  t2;		double  t3;		double  t4;		double  t5;		double	t6;		double	t7;
	long    longt1;	long    longt2;	long    longt3;	long    longt4;	long    longt5;	long    longt6; long    longt7;
	double  tempd1; double  tempd2;	double  tempd3;	double  tempd4;	double  tempd5;	double  tempd6; double  tempd7; double  tempd8;// temporary doubles
	double  **res;// geresampled geluid
	double  **resrc;
			res						= (double**) malloc((nreqband-1) * sizeof(double*));
			resrc					= (double**) malloc((nreqband-1) * sizeof(double*));
			for(i=0; i<nreqband-1; i++) { 
			res[i]					= (double*) malloc(reslength[i] * sizeof(double));
			resrc[i]				= (double*) malloc(reslength[i] * sizeof(double));
			}// res[2][1] = 2.5;
			target					= (__int16*) malloc(soundlength * sizeof(__int16));// eind geluid
	
	
//*************************************************************************************************
//******************************************* RESAMPLEN *******************************************
//*************************************************************************************************

		for(i=0; i<nreqband-1; i++){
			res[i][0] = sound[0];
			for (j=1; j < (reslength[i] - 2); j++) {
				t = ((double(j) / (reslength[i]-1)) * (soundlength-1));
				longt = long(t);
				res[i][j] = interpol_int16_dbl_rc(sound[longt], sound[longt+1], soundrc[longt], soundrc[longt+1], t, longt);
			}
			res[i][long(reslength[1]-1)] = sound[soundlength-1];
		}
		genrc_dbl_multi(reslength, res, resrc);
		

//*************************************************************************************************
//**************************************** TERUG RESAMPLEN ****************************************
//*************************************************************************************************

		for (i=0; i<soundlength; i++) {
		t1 = ((double(i) / (soundlength - 1)) * (reslength[0] - 1));
		t2 = ((double(i) / (soundlength - 1)) * (reslength[1] - 1));
		t3 = ((double(i) / (soundlength - 1)) * (reslength[2] - 1));
		t4 = ((double(i) / (soundlength - 1)) * (reslength[3] - 1));
		t5 = ((double(i) / (soundlength - 1)) * (reslength[4] - 1));
		t6 = ((double(i) / (soundlength - 1)) * (reslength[5] - 1));
		t7 = ((double(i) / (soundlength - 1)) * (reslength[6] - 1));
		longt1 = long(t1);
		longt2 = long(t2);
		longt3 = long(t3);
		longt4 = long(t4);
		longt5 = long(t5);
		longt6 = long(t6);
		longt7 = long(t7);
		tempd1 == interpol_dbl_rc(res[0][longt1], res[0][longt1+1], resrc[0][longt1], resrc[0][longt1+1], t1, longt1);
		tempd2 == interpol_dbl_rc(res[1][longt2], res[1][longt2+1], resrc[1][longt2], resrc[1][longt2+1], t2, longt2);
		tempd3 == interpol_dbl_rc(res[2][longt3], res[2][longt3+1], resrc[2][longt3], resrc[2][longt3+1], t3, longt3);
		tempd4 == interpol_dbl_rc(res[3][longt4], res[3][longt4+1], resrc[3][longt4], resrc[3][longt4+1], t4, longt4);
		tempd5 == interpol_dbl_rc(res[4][longt5], res[4][longt5+1], resrc[4][longt5], resrc[4][longt5+1], t5, longt5);
		tempd6 == interpol_dbl_rc(res[5][longt6], res[5][longt6+1], resrc[5][longt6], resrc[5][longt6+1], t6, longt6);
		tempd7 == interpol_dbl_rc(res[6][longt7], res[6][longt7+1], resrc[6][longt7], resrc[6][longt7+1], t7, longt7);
		tempd8  = volume1 *  tempd1;
		tempd8 += volume2 * (tempd2-tempd1);
		tempd8 += volume3 * (tempd3-tempd2);
		tempd8 += volume4 * (tempd4-tempd3);
		tempd8 += volume5 * (tempd5-tempd4);
		tempd8 += volume6 * (tempd6-tempd5);
		tempd8 += volume7 * (tempd7-tempd6);
		tempd8 += volume8 * (sound[i]-tempd7);
		if (tempd8 > 32767) tempd8 = 32767;
		if (tempd8 < -32768) tempd8 = -32768;
		target[i+1] = __int16(tempd8);
		}
		
//*************************************************************************************************
//******************************************** SAVEN **********************************************
//*************************************************************************************************

		dimsave_int(soundlength,target);

//*************************************************************************************************
//******************************************* AFSPELEN ********************************************
//*************************************************************************************************


		//int system( const char *command );
		//system("shellwav taget.wav");
		//_execl;

return 0;

}


void Module1::genrc_dbl(double length, double *dim1, double *rcdim1)
{
	long i;
	rcdim1[1] = (dim1[1] - 0) / 2;
	for (i=2; i<length; i++) {
	 rcdim1[i] = (dim1[i + 1] - dim1[i - 1]) / 2;
	}
	rcdim1[long(length)] = (0 - dim1[long(length)]) / 2;
}

void Module1::genrc_dbl_multi(__int32 *length, double **dim, double **rcdim)
{
	long i;
	long j;
	for (i=0;i<nreqband-1;i++) {
		rcdim[i][0] = dim[i][0] / 2;
		for (j=1; j<length[i]-1; j++) {
			rcdim[i][j] = (dim[i][j + 1] - dim[i][j - 1]) / 2;
		}
		rcdim[i][length[i]-1] = (-dim[i][length[i]-1]) / 2;
	}
}


double Module1::interpol_dbl_rc(double val0, double val1, double rc0, double rc1, double t, __int32 longt)
{
	double tempd1; tempd1 = t - longt;
	if (tempd1 <= 0.00000000000000) {
		return val0;	}
	else {
		double x0;   x0  = longt;
		double x1;   x1  = x0 + 1;
		double dx;   dx  = x1 - x0;
		double dy ;  dy  = val1 - val0;
		double ofs;  ofs = t - x0;
		double a;    a   = rc0;
		double b;    b   = (3 * dy - dx * rc1 - 2 * a * dx) / (dx*dx);
		double c;    c   = (dy - a * dx - b * (dx*dx)) / (dx*dx*dx);
		return (val0 + ofs * (a + (ofs * (b + (c * ofs)))));
	}
// | basic source:																|
// |																			|
// |   If (Int(T#) - T#) = 0 Then												|
// |	  Interpol_DBL_RC# = Value1#											|
// |    Else																	|
// |      X0# = Int(T#):					X1# = X0# + 1:						|
// |	  DX# = X1# - X0#					DY# = CDbl(Val2#) - CDbl(Val1#)		|
// |	  OFS# = T# - X0#				    a# = RC1#							|
// |      B# = (3 * DY# - DX# * RC2# - 2 * a# * DX#) / DX# ^ 2					|
// |      C# = (DY# - a# * DX# - B# * DX# ^ 2) / DX# ^ 3						|
// |      Interpol_DBL_RC# = Val1# + OFS# * (a# + OFS# * (B# + C# * OFS#))		|
// |   End If																	|
}


double Module1::interpol_int16_dbl_rc(__int16 val0, __int16 val1, double rc0, double rc1, double t, __int32 longt)
{

	double tempd1; tempd1 = t - longt;
	if (tempd1 <= 0.00000000000000) {
		return double(val0);	}
	else {
		double x0;   x0  = longt;
		double x1;   x1  = x0 + 1;
		double dx;   dx  = x1 - x0;
		double dy ;  dy  = val1 - val0;
		double ofs;  ofs = t - x0;
		double a;    a   = rc0;
		double b;    b   = (3 * dy - dx * rc1 - 2 * a * dx) / (dx*dx);
		double c;    c   = (dy - a * dx - b * (dx*dx)) / (dx*dx*dx);
		return double(val0) + ofs * (a + (ofs * (b + (c * ofs))));
	}

}



int Module1::sndload()
{

	//****Geluid laden
		soundlength = 36013;								//lengte file
		(void)strcpy(soundname, "d:/tracks/tsteq2.raw");	//naam   file
		sound = (__int16*) malloc(soundlength * sizeof(__int16));
	
		FILE *input =fopen(soundname,"r+b");
		fseek(input,0,1);
		fread(sound,sizeof(__int16),soundlength,input);
		fclose(input);
	
	//****RC's maken
		long i;
		soundrc = (double*) malloc(soundlength * sizeof(double));
		soundrc[0] = (sound[0] - 0) / 2;
		for (i=1; i<soundlength-1; i++) {
			soundrc[i] = (double(sound[i + 1]) - double(sound[i - 1])) / 2;
		}
		soundrc[soundlength-1] = (0 - sound[soundlength-1]) / 2;

	return 0;

}

int Module1::sndsave()
{
	soundlength = 36013;								//lengte file
	(void)strcpy(targetname, "d:/tracks/tsteq2t.raw");//naam   targetfile
	//target = (__int16*) malloc(soundlength * sizeof(__int16));
	
	FILE *output =fopen(targetname,"w+b");
	fseek(output,0,0);
	fwrite(sound,sizeof(__int16),soundlength,output);
	fclose(output);

	return 0;
}

void Module1::dimsave_dbl_int(long length, double *dim1)
{
	(void)strcpy(targetname, "d:/tracks/tsteq2t.raw");//naam   targetfile
	target = (__int16*) malloc(length * sizeof(__int16));
	for (int i=1;i<=length;i++) {
		target[i] = __int16(dim1[i]);

	}
	
	FILE *output =fopen(targetname,"w+b");
	fseek(output,0,0);
	fwrite(target,sizeof(__int16),length,output);
	fclose(output);

}

void Module1::dimsave_int(long length, __int16 *dim1)
{
	(void)strcpy(targetname, "d:/tracks/tsteq2t.raw");//naam   targetfile
	
	FILE *output =fopen(targetname,"w+b");
	fseek(output,0,0);
	fwrite(target,sizeof(__int16),length,output);
	fclose(output);

}
























//	//*************************geluid 5 maal resamplen********************
//
//	//****variable variables
//
//	//****DECLAREREN: MET VARIABELE ALS SUBSCRIPT
//		double *res1;double *res2;double *res3;double *res4;double *res5;double *res6;double *res7;double *res8;
//		double *res1rc;double *res2rc;double *res3rc;double *res4rc;double *res5rc;double *res6rc;double *res7rc;double *res8rc;
//		res1 = (double*) malloc(reslength1 * sizeof(double));
//		res2 = (double*) malloc(reslength2 * sizeof(double));
//		res3 = (double*) malloc(reslength3 * sizeof(double));
//		res4 = (double*) malloc(reslength4 * sizeof(double));
//		res5 = (double*) malloc(reslength5 * sizeof(double));
//		res6 = (double*) malloc(reslength6 * sizeof(double));
//		res7 = (double*) malloc(reslength7 * sizeof(double));
//		res8 = (double*) malloc(reslength8 * sizeof(double));
//		res1rc = (double*) malloc(reslength1 * sizeof(double));
//		res2rc = (double*) malloc(reslength2 * sizeof(double));
//		res3rc = (double*) malloc(reslength3 * sizeof(double));
//		res4rc = (double*) malloc(reslength4 * sizeof(double));
//		res5rc = (double*) malloc(reslength5 * sizeof(double));
//		res6rc = (double*) malloc(reslength5 * sizeof(double));
//		res7rc = (double*) malloc(reslength5 * sizeof(double));
//		res8rc = (double*) malloc(reslength5 * sizeof(double));
//		
//	//**** RESAMPELEN:
//
//		// GRENS 1: Waarden en RC's
//			res1[1] = sound[1];
//			for (i=1; i < (reslength1 - 1); i++) {
//				t = 1 + ((double(i) / (reslength1-1)) * (soundlength-1));
//				longt = long(t);
//				res1[i+1] = interpol_int16_dbl_rc(sound[longt], sound[longt+1], soundrc[longt], soundrc[longt+1], t, longt);
//			}
//			t = 1 + ((reslength1 / (reslength1-1)) * (soundlength-1));	
//			res1[long(reslength1)] = sound[soundlength];
//			genrc_dbl(reslength1, res1, res1rc);
//			
//		// GRENS 2: Waarden en RC's
//			res2[1] = sound[1];
//			for (i=1; i < (reslength2 - 1); i++) {
//				t = 1 + ((double(i) / (reslength2-1)) * (soundlength-1));
//				longt = long(t);
//				res2[i+1] = interpol_int16_dbl_rc(sound[longt], sound[longt+1], soundrc[longt], soundrc[longt+1], t, longt);
//			}
//			t = 1 + ((reslength2 / (reslength2-1)) * (soundlength-1));	
//			res2[long(reslength2)] = sound[soundlength];
//			genrc_dbl(reslength2, res2, res2rc);
//			
//		// GRENS 3: Waarden en RC's
//			res3[1] = sound[1];
//			for (i=1; i < (reslength3 - 1); i++) {
//				t = 1 + ((double(i) / (reslength3-1)) * (soundlength-1));
//				longt = long(t);
//				res3[i+1] = interpol_int16_dbl_rc(sound[longt], sound[longt+1], soundrc[longt], soundrc[longt+1], t, longt);
//			}
//			t = 1 + ((reslength3 / (reslength3-1)) * (soundlength-1));	
//			res3[long(reslength3)] = sound[soundlength];
//			genrc_dbl(reslength3, res3, res3rc);
//			
//		// GRENS 4: Waarden en RC's
//			res4[1] = sound[1];
//			for (i=1; i < (reslength4 - 1); i++) {
//				t = 1 + ((double(i) / (reslength4-1)) * (soundlength-1));
//				longt = long(t);
//				res4[i+1] = interpol_int16_dbl_rc(sound[longt], sound[longt+1], soundrc[longt], soundrc[longt+1], t, longt);
//			}
//			t = 1 + ((reslength4 / (reslength4-1)) * (soundlength-1));	
//			res4[long(reslength4)] = sound[soundlength];
//			genrc_dbl(reslength4, res4, res4rc);
//			
//		// GRENS 5: Waarden en RC's
//			res5[1] = sound[1];
//			for (i=1; i < (reslength5 - 1); i++) {
//				t = 1 + ((double(i) / (reslength5-1)) * (soundlength-1));
//				longt = long(t);
//				res5[i+1] = interpol_int16_dbl_rc(sound[longt], sound[longt+1], soundrc[longt], soundrc[longt+1], t, longt);
//			}
//			t = 1 + ((reslength5 / (reslength5-1)) * (soundlength-1));	
//			res5[long(reslength5)] = sound[soundlength];
//			genrc_dbl(reslength5, res5, res5rc);
//			
//
//
