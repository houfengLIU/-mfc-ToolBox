#pragma once


// zhuxiao 对话框

class zhuxiao : public CDialogEx
{
	DECLARE_DYNAMIC(zhuxiao)

public:
	zhuxiao(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~zhuxiao();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = DLGzhu };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedOk();
	afx_msg void OnBnClickedCancel();
};
