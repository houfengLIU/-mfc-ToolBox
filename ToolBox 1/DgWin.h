#pragma once


// DgWin �Ի���

class DgWin : public CDialogEx
{
	DECLARE_DYNAMIC(DgWin)

public:
	DgWin(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~DgWin();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = Dg };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton3();
	afx_msg void OnBnClickedButton2();
};
