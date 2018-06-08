
// ToolBox 1Dlg.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "ToolBox 1.h"
#include "ToolBox 1Dlg.h"
#include "afxdialogex.h"
#include "guanji.h"
#include "reboot.h"
#include "zhuxiao.h"
#include "Tguanji.h"
#include"timer_class.h"
#include"cpuzWin.h"
#include"DgWin.h"
#include"about_dl.h"
//#include "pingtest.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// ����Ӧ�ó��򡰹��ڡ��˵���� CAboutDlg �Ի���

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ABOUTBOX };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

// ʵ��
protected:
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialogEx(IDD_ABOUTBOX)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialogEx)
END_MESSAGE_MAP()


// CToolBox1Dlg �Ի���



CToolBox1Dlg::CToolBox1Dlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_TOOLBOX1_DIALOG, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CToolBox1Dlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CToolBox1Dlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(BTguan, &CToolBox1Dlg::OnClickedBtguan)
	ON_BN_CLICKED(BTchong, &CToolBox1Dlg::OnClickedBtchong)
	ON_BN_CLICKED(BTzhu, &CToolBox1Dlg::OnClickedBtzhu)
	ON_BN_CLICKED(BTguanTime, &CToolBox1Dlg::OnClickedBtguantime)
	ON_BN_CLICKED(IDC_BUTTON3, &CToolBox1Dlg::OnBnClickedButton3)
	ON_BN_CLICKED(IDC_BUTTON1, &CToolBox1Dlg::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON2, &CToolBox1Dlg::OnBnClickedButton2)
	ON_BN_CLICKED(IDC_BUTTON5, &CToolBox1Dlg::OnBnClickedButton5)
	ON_BN_CLICKED(IDC_BUTTON7, &CToolBox1Dlg::OnBnClickedButton7)
	ON_BN_CLICKED(IDC_BUTTON6, &CToolBox1Dlg::OnBnClickedButton6)
	ON_BN_CLICKED(IDC_BUTTON8, &CToolBox1Dlg::OnBnClickedButton8)
	ON_BN_CLICKED(IDC_BUTTON4, &CToolBox1Dlg::OnBnClickedButton4)
END_MESSAGE_MAP()


// CToolBox1Dlg ��Ϣ�������

BOOL CToolBox1Dlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// ��������...���˵�����ӵ�ϵͳ�˵��С�

	// IDM_ABOUTBOX ������ϵͳ���Χ�ڡ�
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		BOOL bNameValid;
		CString strAboutMenu;
		bNameValid = strAboutMenu.LoadString(IDS_ABOUTBOX);
		ASSERT(bNameValid);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// ���ô˶Ի����ͼ�ꡣ  ��Ӧ�ó��������ڲ��ǶԻ���ʱ����ܽ��Զ�
	//  ִ�д˲���
	SetIcon(m_hIcon, TRUE);			// ���ô�ͼ��
	SetIcon(m_hIcon, FALSE);		// ����Сͼ��

	// TODO: �ڴ���Ӷ���ĳ�ʼ������

	return TRUE;  // ���ǽ��������õ��ؼ������򷵻� TRUE
}

void CToolBox1Dlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialogEx::OnSysCommand(nID, lParam);
	}
}

// �����Ի��������С����ť������Ҫ����Ĵ���
//  �����Ƹ�ͼ�ꡣ  ����ʹ���ĵ�/��ͼģ�͵� MFC Ӧ�ó���
//  �⽫�ɿ���Զ���ɡ�

void CToolBox1Dlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // ���ڻ��Ƶ��豸������

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// ʹͼ���ڹ����������о���
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// ����ͼ��
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

//���û��϶���С������ʱϵͳ���ô˺���ȡ�ù��
//��ʾ��
HCURSOR CToolBox1Dlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}



void CToolBox1Dlg::OnClickedBtguan()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	guanji go;
	go.DoModal();
}


void CToolBox1Dlg::OnClickedBtchong()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	reboot re;
	re.DoModal();

}


void CToolBox1Dlg::OnClickedBtzhu()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	zhuxiao zx;
	zx.DoModal();
}


void CToolBox1Dlg::OnClickedBtguantime()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	Tguanji Tg;
	Tg.DoModal();
}


void CToolBox1Dlg::OnBnClickedButton3()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	timer_class tc;
	tc.DoModal();
}


void CToolBox1Dlg::OnBnClickedButton1()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	/*pingtest pin;
	pin.DoModal();*/
	system("start explorer http://www.baidu.com");

}


void CToolBox1Dlg::OnBnClickedButton2()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	char fname[100];
	WinExec("Calculator.exe", SW_SHOW);
	//MessageBox(_T("click"));
}


void CToolBox1Dlg::OnBnClickedButton5()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	cpuzWin cpuz;
	cpuz.DoModal();

}


void CToolBox1Dlg::OnBnClickedButton7()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	DgWin DG;
	DG.DoModal();
}


void CToolBox1Dlg::OnBnClickedButton6()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	WinExec("GPU-Z_ASUS_ROG_2.9.0_Chs.exe", SW_SHOW);
}


void CToolBox1Dlg::OnBnClickedButton8()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	WinExec("ASSSDBenchmark.exe", SW_SHOW);
}


void CToolBox1Dlg::OnBnClickedButton4()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	about_dl ab;
	ab.DoModal();
}
