#pragma once


// guanji �Ի���

class guanji : public CDialogEx
{
	DECLARE_DYNAMIC(guanji)

public:
	guanji(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~guanji();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = DLGguanji };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedOk();
	afx_msg void OnBnClickedCancel();
};
