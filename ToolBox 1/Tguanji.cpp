// Tguanji.cpp : 实现文件
//

#include "stdafx.h"
#include "ToolBox 1.h"
#include "Tguanji.h"
#include "afxdialogex.h"
#include <string.h>
#include<stdio.h>
#include<stdlib.h>
#include<iostream>


using namespace std;

// Tguanji 对话框

IMPLEMENT_DYNAMIC(Tguanji, CDialogEx)

Tguanji::Tguanji(CWnd* pParent /*=NULL*/)
	: CDialogEx(DLGTguan, pParent)
{

}

Tguanji::~Tguanji()
{
}

void Tguanji::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(Tguanji, CDialogEx)
	ON_BN_CLICKED(IDOK, &Tguanji::OnBnClickedOk)
	ON_BN_CLICKED(IDCANCEL, &Tguanji::OnBnClickedCancel)
//	ON_BN_CLICKED(IDC_BUTTON1, &Tguanji::OnClickedButton1)
END_MESSAGE_MAP()


// Tguanji 消息处理程序


void Tguanji::OnBnClickedOk()
{
	// TODO: 在此添加控件通知处理程序代码
	CString t;
	char comend[100];
	GetDlgItemText(gTIMEin,t);
	//MessageBox(_T("t"));
	int time;
	time=_ttoi(t);
	sprintf(comend,"shutdown -s -t %d",time);
	system(comend);
}


void Tguanji::OnBnClickedCancel()
{
	// TODO: 在此添加控件通知处理程序代码
	system("shutdown -a");
	MessageBox(_T("取消关机成功!"));
	CDialogEx::OnCancel();
}


//void Tguanji::OnClickedButton1()
//{
//	// TODO: 在此添加控件通知处理程序代码
//}
