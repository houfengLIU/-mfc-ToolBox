// reboot.cpp : 实现文件
//

#include "stdafx.h"
#include "ToolBox 1.h"
#include "reboot.h"
#include "afxdialogex.h"


// reboot 对话框

IMPLEMENT_DYNAMIC(reboot, CDialogEx)

reboot::reboot(CWnd* pParent /*=NULL*/)
	: CDialogEx(DLGreboot, pParent)
{

}

reboot::~reboot()
{
}

void reboot::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(reboot, CDialogEx)
	ON_BN_CLICKED(IDOK, &reboot::OnBnClickedOk)
	ON_BN_CLICKED(IDCANCEL, &reboot::OnBnClickedCancel)
END_MESSAGE_MAP()


// reboot 消息处理程序


void reboot::OnBnClickedOk()
{
	// TODO: 在此添加控件通知处理程序代码
	system("shutdown -r -t 0");
}


void reboot::OnBnClickedCancel()
{
	// TODO: 在此添加控件通知处理程序代码
	CDialogEx::OnCancel();
}
