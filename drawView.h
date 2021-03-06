
// drawView.h: CdrawView 类的接口
//

#pragma once


class CdrawView : public CView
{
protected: // 仅从序列化创建
	CdrawView();
	DECLARE_DYNCREATE(CdrawView)

// 特性
public:
	CdrawDoc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// 实现
public:
	virtual ~CdrawView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	afx_msg void OnFilePrintPreview();
	afx_msg void OnRButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnContextMenu(CWnd* pWnd, CPoint point);
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
private:
	int drawType;
	int color;
	int pen_size=1;
	int full;
	int fill = 0;
public:
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	afx_msg void OnLine();
	afx_msg void OnReg();
	afx_msg void OnEsp();
	afx_msg void OnArb();
	afx_msg void OnRed();
	afx_msg void OnGre();
	afx_msg void OnBlu();
	afx_msg void OnBig();
	afx_msg void OnMid();
	afx_msg void OnSma();
	afx_msg void OnRButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnEmpty();
	afx_msg void OnFull();
};

#ifndef _DEBUG  // drawView.cpp 中的调试版本
inline CdrawDoc* CdrawView::GetDocument() const
   { return reinterpret_cast<CdrawDoc*>(m_pDocument); }
#endif

