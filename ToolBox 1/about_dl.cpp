// about_dl.cpp : 实现文件
//

#include "stdafx.h"
#include "ToolBox 1.h"
#include "about_dl.h"
#include "afxdialogex.h"


// about_dl 对话框

IMPLEMENT_DYNAMIC(about_dl, CDialogEx)

about_dl::about_dl(CWnd* pParent /*=NULL*/)
	: CDialogEx(about, pParent)
{

}

about_dl::~about_dl()
{
}

void about_dl::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(about_dl, CDialogEx)
END_MESSAGE_MAP()


// about_dl 消息处理程序
