#pragma once


// DgWin 对话框

class DgWin : public CDialogEx
{
	DECLARE_DYNAMIC(DgWin)

public:
	DgWin(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~DgWin();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = Dg };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton3();
	afx_msg void OnBnClickedButton2();
};
