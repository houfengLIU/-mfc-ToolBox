#pragma once


// zhuxiao �Ի���

class zhuxiao : public CDialogEx
{
	DECLARE_DYNAMIC(zhuxiao)

public:
	zhuxiao(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~zhuxiao();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = DLGzhu };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedOk();
	afx_msg void OnBnClickedCancel();
};
