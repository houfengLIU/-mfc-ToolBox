#pragma once


// about_dl �Ի���

class about_dl : public CDialogEx
{
	DECLARE_DYNAMIC(about_dl)

public:
	about_dl(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~about_dl();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = about };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
};
