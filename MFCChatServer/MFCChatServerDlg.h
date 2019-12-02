
// MFCChatServerDlg.h: 头文件
//

#pragma once


// CMFCChatServerDlg 对话框
class CMFCChatServerDlg : public CDialogEx
{
// 构造
public:
	CMFCChatServerDlg(CWnd* pParent = nullptr);	// 标准构造函数

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MFCCHATSERVER_DIALOG };
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
	afx_msg void OnBnClickedButton2();
	afx_msg void OnBnClickedButton3();
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedOk();
	afx_msg void OnBnClickedButton5();
	afx_msg void OnEnChangeEdit2();
	afx_msg void OnLbnSelchangeMsgList();
	afx_msg void OnEnChangePortEdit();
	afx_msg void OnEnChangeSendEdit();
	afx_msg void OnCbnSelchangeCombo2();
	afx_msg void OnCbnSelchangeColourCombo();
	afx_msg void OnBnClickedCalBtn();
	afx_msg void OnBnClickedCleaarBtn();
	afx_msg void OnBnClickedStopBtn();
	afx_msg void OnBnClickedMailBtn();
	afx_msg void OnBnClickedStartBtn();
};
