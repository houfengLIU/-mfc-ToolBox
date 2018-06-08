#pragma once


// Tguanji 对话框

class Tguanji : public CDialogEx
{
	DECLARE_DYNAMIC(Tguanji)

public:
	Tguanji(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~Tguanji();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = DLGTguan };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedOk();
	afx_msg void OnBnClickedCancel();
//	afx_msg void OnClickedButton1();
};
