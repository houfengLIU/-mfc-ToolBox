// reboot.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "ToolBox 1.h"
#include "reboot.h"
#include "afxdialogex.h"


// reboot �Ի���

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


// reboot ��Ϣ�������


void reboot::OnBnClickedOk()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	system("shutdown -r -t 0");
}


void reboot::OnBnClickedCancel()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	CDialogEx::OnCancel();
}
