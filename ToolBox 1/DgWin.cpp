// DgWin.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "ToolBox 1.h"
#include "DgWin.h"
#include "afxdialogex.h"


// DgWin �Ի���

IMPLEMENT_DYNAMIC(DgWin, CDialogEx)

DgWin::DgWin(CWnd* pParent /*=NULL*/)
	: CDialogEx(Dg, pParent)
{

}

DgWin::~DgWin()
{
}

void DgWin::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(DgWin, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON3, &DgWin::OnBnClickedButton3)
	ON_BN_CLICKED(IDC_BUTTON2, &DgWin::OnBnClickedButton2)
END_MESSAGE_MAP()


// DgWin ��Ϣ�������


void DgWin::OnBnClickedButton3()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	WinExec("DiskGenius64.exe", SW_SHOW);
}


void DgWin::OnBnClickedButton2()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	WinExec("DiskGenius32.exe", SW_SHOW);
}
