// guanji.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "ToolBox 1.h"
#include "guanji.h"
#include "afxdialogex.h"


// guanji �Ի���

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


// guanji ��Ϣ�������


void guanji::OnBnClickedOk()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	system("shutdown -s -t 0");
}


void guanji::OnBnClickedCancel()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	CDialogEx::OnCancel();
}
