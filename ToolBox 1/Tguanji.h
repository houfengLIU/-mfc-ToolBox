#pragma once


// Tguanji �Ի���

class Tguanji : public CDialogEx
{
	DECLARE_DYNAMIC(Tguanji)

public:
	Tguanji(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~Tguanji();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = DLGTguan };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedOk();
	afx_msg void OnBnClickedCancel();
//	afx_msg void OnClickedButton1();
};
