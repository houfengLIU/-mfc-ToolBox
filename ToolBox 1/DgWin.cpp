// DgWin.cpp : 实现文件
//

#include "stdafx.h"
#include "ToolBox 1.h"
#include "DgWin.h"
#include "afxdialogex.h"


// DgWin 对话框

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


// DgWin 消息处理程序


void DgWin::OnBnClickedButton3()
{
	// TODO: 在此添加控件通知处理程序代码
	WinExec("DiskGenius64.exe", SW_SHOW);
}


void DgWin::OnBnClickedButton2()
{
	// TODO: 在此添加控件通知处理程序代码
	WinExec("DiskGenius32.exe", SW_SHOW);
}
