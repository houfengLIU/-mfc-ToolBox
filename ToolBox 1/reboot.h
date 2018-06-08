#pragma once


// reboot 对话框

class reboot : public CDialogEx
{
	DECLARE_DYNAMIC(reboot)

public:
	reboot(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~reboot();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = DLGreboot };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedOk();
	afx_msg void OnBnClickedCancel();
};
