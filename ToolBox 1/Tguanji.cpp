// Tguanji.cpp : ʵ���ļ�
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

// Tguanji �Ի���

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


// Tguanji ��Ϣ�������


void Tguanji::OnBnClickedOk()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
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
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	system("shutdown -a");
	MessageBox(_T("ȡ���ػ��ɹ�!"));
	CDialogEx::OnCancel();
}


//void Tguanji::OnClickedButton1()
//{
//	// TODO: �ڴ���ӿؼ�֪ͨ����������
//}
