#pragma once


// cpuzWin 对话框

class cpuzWin : public CDialogEx
{
	DECLARE_DYNAMIC(cpuzWin)

public:
	cpuzWin(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~cpuzWin();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = CPUZ };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton2();
};
