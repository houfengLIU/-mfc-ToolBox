#pragma once
#include "afxwin.h"


// timer_class 对话框

class timer_class : public CDialogEx
{
	DECLARE_DYNAMIC(timer_class)

public:
	timer_class(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~timer_class();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = timer };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
//	CStatic m_time;
	CStatic m_time;
	afx_msg void OnBnClickedTimer();
	afx_msg void OnBnClickedReset();
	afx_msg void OnTimer(UINT_PTR nIDEvent);
};
