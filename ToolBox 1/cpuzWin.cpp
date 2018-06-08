// cpuzWin.cpp : 实现文件
//

#include "stdafx.h"
#include "ToolBox 1.h"
#include "cpuzWin.h"
#include "afxdialogex.h"


// cpuzWin 对话框

IMPLEMENT_DYNAMIC(cpuzWin, CDialogEx)

cpuzWin::cpuzWin(CWnd* pParent /*=NULL*/)
	: CDialogEx(CPUZ, pParent)
{

}

cpuzWin::~cpuzWin()
{
}

void cpuzWin::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(cpuzWin, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &cpuzWin::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON2, &cpuzWin::OnBnClickedButton2)
END_MESSAGE_MAP()


// cpuzWin 消息处理程序


void cpuzWin::OnBnClickedButton1()
{
	// TODO: 在此添加控件通知处理程序代码
	WinExec("cpuz_x64.exe", SW_SHOW);
}


void cpuzWin::OnBnClickedButton2()
{
	// TODO: 在此添加控件通知处理程序代码
	WinExec("cpuz_x32.exe", SW_SHOW);
}
