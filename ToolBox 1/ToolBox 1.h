
// ToolBox 1.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CToolBox1App: 
// �йش����ʵ�֣������ ToolBox 1.cpp
//

class CToolBox1App : public CWinApp
{
public:
	CToolBox1App();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CToolBox1App theApp;