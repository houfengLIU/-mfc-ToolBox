#pragma once


// reboot �Ի���

class reboot : public CDialogEx
{
	DECLARE_DYNAMIC(reboot)

public:
	reboot(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~reboot();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = DLGreboot };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedOk();
	afx_msg void OnBnClickedCancel();
};
