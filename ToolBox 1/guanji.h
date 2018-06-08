#pragma once


// guanji 对话框

class guanji : public CDialogEx
{
	DECLARE_DYNAMIC(guanji)

public:
	guanji(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~guanji();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = DLGguanji };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedOk();
	afx_msg void OnBnClickedCancel();
};
