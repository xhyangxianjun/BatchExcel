﻿
// BatchTestDlg.h: 头文件
//

#pragma once
#include "Pictrue.h"

// CBatchTestDlg 对话框
class CBatchTestDlg : public CDialogEx
{
// 构造
public:
	CBatchTestDlg(CWnd* pParent = nullptr);	// 标准构造函数

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_BATCHTEST_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持


// 实现
protected:
	HICON m_hIcon;

	// 生成的消息映射函数
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()

public:
	double m_resolution;     // 分辨率
	CString m_savePath;     //保存路径
	CProgressCtrl m_progress;   //进度条
	vector<CString> vecPicPaths;    //所选图片路径容器
	Pictrue pic;

	HANDLE  handle;

	afx_msg void OnBnClickedBt_SelectPics();   //按下“选择图片文件”按钮
	afx_msg void OnBnClickedSelectSavepath();   //按下“选择保存路径”按钮
	afx_msg void OnBnClickedProcessingPic();   //按下“处理图片”按钮
	CString ShowDialog();   //显示选择保存路径对话框
	void SetProgressBar(int num, int num_all);   //设置进度条
	void SetProgressRate(int num, int num_all);   //设置进度数

	static UINT ProgressPic(LPVOID pParam);
};
