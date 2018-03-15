; CLW file contains information for the MFC ClassWizard

[General Info]
Version=1
LastClass=CAboutDlg
LastTemplate=CDialog
NewFileInclude1=#include "stdafx.h"
NewFileInclude2=#include "EQ.h"

ClassCount=3
Class1=CEQApp
Class2=CEQDlg
Class3=CAboutDlg

ResourceCount=6
Resource1=IDD_ABOUTBOX
Resource2=IDR_MAINFRAME
Resource3=IDD_EQ_DIALOG
Resource4=IDR_MENU1
Resource5=IDD_ABOUTBOX (English (U.S.))
Resource6=IDD_EQ_DIALOG (English (U.S.))

[CLS:CEQApp]
Type=0
HeaderFile=EQ.h
ImplementationFile=EQ.cpp
Filter=N

[CLS:CEQDlg]
Type=0
HeaderFile=EQDlg.h
ImplementationFile=EQDlg.cpp
Filter=N
LastObject=IDC_SLIDER1
BaseClass=CDialog
VirtualFilter=dWC

[CLS:CAboutDlg]
Type=0
HeaderFile=EQDlg.h
ImplementationFile=EQDlg.cpp
Filter=D

[DLG:IDD_ABOUTBOX]
Type=1
ControlCount=4
Control1=IDC_STATIC,static,1342177283
Control2=IDC_STATIC,static,1342308352
Control3=IDC_STATIC,static,1342308352
Control4=IDOK,button,1342373889
Class=CAboutDlg


[DLG:IDD_EQ_DIALOG]
Type=1
ControlCount=3
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816
Control3=IDC_STATIC,static,1342308352
Class=CEQDlg

[DLG:IDD_ABOUTBOX (English (U.S.))]
Type=1
Class=CAboutDlg
ControlCount=4
Control1=IDC_STATIC,static,1342177283
Control2=IDC_STATIC,static,1342308480
Control3=IDC_STATIC,static,1342308352
Control4=IDOK,button,1342373889

[DLG:IDD_EQ_DIALOG (English (U.S.))]
Type=1
Class=CEQDlg
ControlCount=15
Control1=IDC_STATIC,button,1342177287
Control2=IDC_BUTTON1,button,1342242816
Control3=IDC_BUTTON2,button,1342242816
Control4=IDC_SLIDER1,msctls_trackbar32,1342242843
Control5=IDC_SLIDER2,msctls_trackbar32,1342242843
Control6=IDC_SLIDER3,msctls_trackbar32,1342242843
Control7=IDC_SLIDER4,msctls_trackbar32,1342242843
Control8=IDC_SLIDER5,msctls_trackbar32,1342242843
Control9=IDC_STATIC,static,1342308352
Control10=IDC_STATIC,static,1342308352
Control11=IDC_EDIT1,edit,1350631552
Control12=IDC_EDIT2,edit,1350631552
Control13=IDC_SLIDER6,msctls_trackbar32,1342242843
Control14=IDC_SLIDER7,msctls_trackbar32,1342242843
Control15=IDC_SLIDER8,msctls_trackbar32,1342242843

[MNU:IDR_MENU1]
Type=1
Class=CEQDlg
Command1=ID_FILE_OPENWAVE
Command2=ID_FILE_SAVEWAVE
CommandCount=2

