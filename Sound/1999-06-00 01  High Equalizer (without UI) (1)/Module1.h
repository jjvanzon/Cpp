// Module1.h: interface for the Module1 class.
//

#if !defined(AFX_MODULE1_H__0F31B453_2904_11D3_B157_9E40578CD634__INCLUDED_)
#define AFX_MODULE1_H__0F31B453_2904_11D3_B157_9E40578CD634__INCLUDED_

#if _MSC_VER >= 1000
#pragma once
#endif // _MSC_VER >= 1000

#include "EQDlg.h"

class Module1 //: public CDialog
{
public:
	long nreqband;
	char targetname[50];
	char soundname[50];
	int  sndload();
	int  sndsave();
	void dimsave_dbl_int(long length, double*dim1);
	void dimsave_int(long length, __int16 *dim1);

	//MAIN
	Module1();
	virtual ~Module1();

	//SUBS
	int    filter(CEQDlg *eqdlg);
	void   genrc_dbl(double length, double *dim1, double *rcdim1);
	void   genrc_dbl_multi(__int32 *length, double **dim1, double **rcdim1);
	double interpol_int16_dbl_rc(__int16 val0, __int16 val1, double rc0, double rc1, double t, __int32 longt);
	double interpol_dbl_rc(double val0 ,double val1 ,double rc0 ,double rc1, double t, __int32 longt);
	
	//VARIABLES
	__int16 *sound;
	double  *soundrc;
	long    soundlength;
	__int16 *target;

};

#endif // !defined(AFX_MODULE1_H__0F31B453_2904_11D3_B157_9E40578CD634__INCLUDED_)
