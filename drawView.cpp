
// drawView.cpp: CdrawView 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "draw.h"
#endif

#include "drawDoc.h"
#include "drawView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CdrawView

IMPLEMENT_DYNCREATE(CdrawView, CView)

BEGIN_MESSAGE_MAP(CdrawView, CView)
	// 标准打印命令
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CdrawView::OnFilePrintPreview)
	ON_WM_CONTEXTMENU()
	ON_WM_RBUTTONUP()
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
	ON_WM_MOUSEMOVE()
	ON_COMMAND(ID_Line, &CdrawView::OnLine)
	ON_COMMAND(ID_Reg, &CdrawView::OnReg)
	ON_COMMAND(ID_Esp, &CdrawView::OnEsp)
	ON_COMMAND(ID_Arb, &CdrawView::OnArb)
	ON_COMMAND(ID_Red, &CdrawView::OnRed)
	ON_COMMAND(ID_Gre, &CdrawView::OnGre)
	ON_COMMAND(ID_Blu, &CdrawView::OnBlu)
	ON_COMMAND(ID_Big, &CdrawView::OnBig)
	ON_COMMAND(ID_Mid, &CdrawView::OnMid)
	ON_COMMAND(ID_Sma, &CdrawView::OnSma)
	ON_WM_RBUTTONDOWN()
	ON_COMMAND(ID_Empty, &CdrawView::OnEmpty)
	ON_COMMAND(ID_Full, &CdrawView::OnFull)
END_MESSAGE_MAP()

// CdrawView 构造/析构

CdrawView::CdrawView()
{
	// TODO: 在此处添加构造代码

}

CdrawView::~CdrawView()
{
}

BOOL CdrawView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CdrawView 绘图

void CdrawView::OnDraw(CDC* /*pDC*/)
{
	CdrawDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CdrawView 打印


void CdrawView::OnFilePrintPreview()
{
#ifndef SHARED_HANDLERS
	AFXPrintPreview(this);
#endif
}

BOOL CdrawView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// 默认准备
	return DoPreparePrinting(pInfo);
}

void CdrawView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 添加额外的打印前进行的初始化过程
}

void CdrawView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 添加打印后进行的清理过程
}

void CdrawView::OnRButtonUp(UINT /* nFlags */, CPoint point)
{
	//ClientToScreen(&point);
	//OnContextMenu(this, point);
}

void CdrawView::OnContextMenu(CWnd* /* pWnd */, CPoint point)
{
#ifndef SHARED_HANDLERS
	theApp.GetContextMenuManager()->ShowPopupMenu(IDR_POPUP_EDIT, point.x, point.y, this, TRUE);
#endif
}


// CdrawView 诊断

#ifdef _DEBUG
void CdrawView::AssertValid() const
{
	CView::AssertValid();
}

void CdrawView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CdrawDoc* CdrawView::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CdrawDoc)));
	return (CdrawDoc*)m_pDocument;
}
#endif //_DEBUG


// CdrawView 消息处理程序

CPoint m_point;
bool m_click;

void CdrawView::OnLButtonDown(UINT nFlags, CPoint point)
{
	switch (drawType)
	{
	case 1:
		m_point = point;
		break;
	case 2:
		m_point = point;
		break;
	case 3:
		m_point = point;
		break;
	case 4:
		m_point = point;
		m_click = true;
		break;
	}
	CView::OnLButtonDown(nFlags, point);
}


void CdrawView::OnLButtonUp(UINT nFlags, CPoint point)
{
	CDC * p = GetDC();
	CPen penr(PS_SOLID, pen_size, RGB(255, 0, 0));
	CPen peng(PS_SOLID, pen_size, RGB(0, 255, 0));
	CPen penb(PS_SOLID, pen_size, RGB(0, 0, 255));
	CBrush brushr(RGB(255, 0, 0));
	CBrush brushg(RGB(0, 255, 0));
	CBrush brushb(RGB(0, 0, 255));
	switch (fill)
	{
	case 0:
		switch (color)
		{
		case 1:
			p->SelectObject(penr);
			break;
		case 2:
			p->SelectObject(peng);
			break;
		case 3:
			p->SelectObject(penb);
			break;
		}
		break;
	case 1:
		switch (color)
		{
		case 1:
			p->SelectObject(brushr);
			break;
		case 2:
			p->SelectObject(brushg);
			break;
		case 3:
			p->SelectObject(brushb);
			break;
		}
	}
	switch (drawType)
	{
	case 1:
		p->MoveTo(m_point);
		p->LineTo(point);
		break;
	case 2:
		p->Rectangle(m_point.x, m_point.y, point.x, point.y);
		break;
	case 3:
		p->Ellipse(m_point.x, m_point.y, point.x, point.y);
		break;
	case 4:
		m_click = false;
		break;
	}
	CView::OnLButtonUp(nFlags, point);
}


void CdrawView::OnMouseMove(UINT nFlags, CPoint point)
{
	CDC *p = GetDC();
	CPen penr(PS_SOLID, pen_size, RGB(255, 0, 0));
	CPen peng(PS_SOLID, pen_size, RGB(0, 255, 0));
	CPen penb(PS_SOLID, pen_size, RGB(0, 0, 255));
	switch (color)
	{
	case 1:
		p->SelectObject(penr);
		break;
	case 2:
		p->SelectObject(peng);
		break;
	case 3:
		p->SelectObject(penb);
		break;
	}
	switch (drawType)
	{
	case 4:
		if (m_click == true)
		{
			p->MoveTo(m_point);
			p->LineTo(point);
			m_point = point;
		}
	}
	CView::OnMouseMove(nFlags, point);
}

//绘图形状
void CdrawView::OnLine()
{
	drawType = 1;//直线
}


void CdrawView::OnReg()
{
	drawType = 2;//矩形
}


void CdrawView::OnEsp()
{
	drawType = 3;//椭圆
}


void CdrawView::OnArb()
{
	drawType = 4;//任意曲线
}

//绘图颜色

void CdrawView::OnRed()
{
	color = 1;
}


void CdrawView::OnGre()
{
	color = 2;
}


void CdrawView::OnBlu()
{
	color = 3;
}

//绘图粗细

void CdrawView::OnBig()
{
	pen_size = 4;
}


void CdrawView::OnMid()
{
	pen_size = 3;
}


void CdrawView::OnSma()
{
	pen_size = 2;
}


void CdrawView::OnRButtonDown(UINT nFlags, CPoint point)
{
	GetParent()->Invalidate(true);
	CView::OnRButtonDown(nFlags, point);
}


void CdrawView::OnEmpty()
{
	fill = 0;
}


void CdrawView::OnFull()
{
	fill = 1;
}
