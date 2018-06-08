// timer_class.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "ToolBox 1.h"
#include "timer_class.h"
#include "afxdialogex.h"


// timer_class �Ի���

IMPLEMENT_DYNAMIC(timer_class, CDialogEx)

timer_class::timer_class(CWnd* pParent /*=NULL*/)
	: CDialogEx(timer, pParent)
{

}

timer_class::~timer_class()
{
}

void timer_class::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	//  DDX_Control(pDX, IDC_TimeDis, m_time);
	DDX_Control(pDX, IDC_TimeDis, m_time);
}


BEGIN_MESSAGE_MAP(timer_class, CDialogEx)
	ON_BN_CLICKED(IDC_Timer, &timer_class::OnBnClickedTimer)
	ON_BN_CLICKED(IDC_Reset, &timer_class::OnBnClickedReset)
	ON_WM_TIMER()
END_MESSAGE_MAP()


// timer_class ��Ϣ�������


void timer_class::OnBnClickedTimer()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	SetTimer(1, 10, NULL);
}


void timer_class::OnBnClickedReset()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	KillTimer(1);
	m_time.SetWindowTextW(_T("00: 00: 00"));
}


void timer_class::OnTimer(UINT_PTR nIDEvent)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	static UINT mm = 0;
	static UINT ss = 0;
	static UINT mss = 0;
	CString str;
	switch (nIDEvent)
	{
	case 1:
		mss++;
		if (mss == 100) { mss = 0; ss++; }
		if (ss == 60) { ss = 0; mm++; }
		str.Format(_T("%02i: %02i: %02i"), mm, ss, mss);
		m_time.SetWindowTextW(str);
		break;
	}

	CDialogEx::OnTimer(nIDEvent);
}
