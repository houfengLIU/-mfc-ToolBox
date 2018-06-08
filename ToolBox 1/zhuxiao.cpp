// zhuxiao.cpp : 实现文件
//

#include "stdafx.h"
#include "ToolBox 1.h"
#include "zhuxiao.h"
#include "afxdialogex.h"


// zhuxiao 对话框

IMPLEMENT_DYNAMIC(zhuxiao, CDialogEx)

zhuxiao::zhuxiao(CWnd* pParent /*=NULL*/)
	: CDialogEx(DLGzhu, pParent)
{

}

zhuxiao::~zhuxiao()
{
}

void zhuxiao::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(zhuxiao, CDialogEx)
	ON_BN_CLICKED(IDOK, &zhuxiao::OnBnClickedOk)
	ON_BN_CLICKED(IDCANCEL, &zhuxiao::OnBnClickedCancel)
END_MESSAGE_MAP()


// zhuxiao 消息处理程序


void zhuxiao::OnBnClickedOk()
{
	// TODO: 在此添加控件通知处理程序代码
	system("shutdown -l");
}


void zhuxiao::OnBnClickedCancel()
{
	// TODO: 在此添加控件通知处理程序代码
	CDialogEx::OnCancel();
}
