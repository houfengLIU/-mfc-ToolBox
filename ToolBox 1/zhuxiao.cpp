// zhuxiao.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "ToolBox 1.h"
#include "zhuxiao.h"
#include "afxdialogex.h"


// zhuxiao �Ի���

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


// zhuxiao ��Ϣ�������


void zhuxiao::OnBnClickedOk()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	system("shutdown -l");
}


void zhuxiao::OnBnClickedCancel()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	CDialogEx::OnCancel();
}
