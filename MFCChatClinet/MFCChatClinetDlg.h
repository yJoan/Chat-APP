﻿
// MFCChatClinetDlg.h: 头文件
//

#pragma once


// CMFCChatClinetDlg 对话框
class CMFCChatClinetDlg : public CDialogEx
{
// 构造
public:
	CMFCChatClinetDlg(CWnd* pParent = nullptr);	// 标准构造函数

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MFCCHATCLINET_DIALOG };
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
	afx_msg void OnBnClickedOk();
	afx_msg void OnLbnSelchangeList1();
	afx_msg void OnEnChangeEdit4();
	afx_msg void OnEnChangeEdit3();
	afx_msg void OnBnClickedRadio1();
	afx_msg void OnCbnSelchangeCombo1();
	afx_msg void OnEnChangeEdit2();
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedCancel();
	afx_msg void OnEnChangeSendmsgEdit();
	afx_msg void OnBnClickedConnectbtnButton();
};
