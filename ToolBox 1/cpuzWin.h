#pragma once


// cpuzWin �Ի���

class cpuzWin : public CDialogEx
{
	DECLARE_DYNAMIC(cpuzWin)

public:
	cpuzWin(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~cpuzWin();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = CPUZ };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton2();
};
