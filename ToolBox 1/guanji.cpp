// guanji.cpp : 实现文件
//

#include "stdafx.h"
#include "ToolBox 1.h"
#include "guanji.h"
#include "afxdialogex.h"


// guanji 对话框

IMPLEMENT_DYNAMIC(guanji, CDialogEx)

guanji::guanji(CWnd* pParent /*=NULL*/)
	: CDialogEx(DLGguanji, pParent)
{

}

guanji::~guanji()
{
}

void guanji::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(guanji, CDialogEx)
	ON_BN_CLICKED(IDOK, &guanji::OnBnClickedOk)
	ON_BN_CLICKED(IDCANCEL, &guanji::OnBnClickedCancel)
END_MESSAGE_MAP()


// guanji 消息处理程序


void guanji::OnBnClickedOk()
{
	// TODO: 在此添加控件通知处理程序代码
	system("shutdown -s -t 0");
}


void guanji::OnBnClickedCancel()
{
	// TODO: 在此添加控件通知处理程序代码
	CDialogEx::OnCancel();
}
