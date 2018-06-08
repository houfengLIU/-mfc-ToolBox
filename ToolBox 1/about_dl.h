#pragma once


// about_dl 对话框

class about_dl : public CDialogEx
{
	DECLARE_DYNAMIC(about_dl)

public:
	about_dl(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~about_dl();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = about };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
};
