// playwav.cpp : Defines the entry point for the DLL application.
//

#include "stdafx.h"

//BOOL APIENTRY DllMain( HANDLE hModule, 
//                       DWORD  ul_reason_for_call, 
//                       LPVOID lpReserved
//					 )
//{
//    return TRUE;
//}

BOOL APIENTRY Copywav()
{
	FILE *sfile;
	FILE *tfile;
	__int16 *tempint16;
//	__int8  *tempint8;
	__int32 size;
	sfile = fopen(spath, "rb");
	tfile = fopen(tpath, "wb");
	fseek (sfile, 1,1);
		size = _filelength(_fileno(sfile));
		while (!feof(sfile)) {
		fread (tempint16, sizeof(__int16), 1, sfile);
		fwrite (tempint16, sizeof(__int16), 1, tfile);
		}
	fclose (sfile);
	fclose (tfile);


	return TRUE;
}