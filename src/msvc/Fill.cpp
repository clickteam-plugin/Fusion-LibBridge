#include "Ccxhdr.h"

extern "C"
{
	void LibBridge_CFillData_DCONSTRUCTOR(CFillData *This)
	{
		new (This) CFillData;
	}
	void LibBridge_CFillData_DESTRUCTOR(CFillData *This)
	{
		This->CFillData::~CFillData();
	}
	void LibBridge_CFillData_DESTRUCTOR_V(CFillData *This)
	{
		This->~CFillData();
	}
	DWORD LibBridge_CFillData_SetFillOrg(CFillData *This, int x, int y)
	{
		return This->CFillData::SetFillOrg(x, y);
	}
	DWORD LibBridge_CFillData_SetFillOrg_V(CFillData *This, int x, int y)
	{
		return This->SetFillOrg(x, y);
	}
	BOOL LibBridge_CFillData_Fill_1(CFillData *This, cSurface *s, int l, int t, int r, int b, BOOL fob)
	{
		return This->CFillData::Fill(s, l, t, r, b, fob);
	}
	BOOL LibBridge_CFillData_Fill_1_V(CFillData *This, cSurface *s, int l, int t, int r, int b, BOOL fob)
	{
		return This->Fill(s, l, t, r, b, fob);
	}
	BOOL LibBridge_CFillData_Fill_2(CFillData *This, cSurface *s, int tw, int th, BOOL fob)
	{
		return This->CFillData::Fill(s, tw, th, fob);
	}
	BOOL LibBridge_CFillData_Fill_2_V(CFillData *This, cSurface *s, int tw, int th, BOOL fob)
	{
		return This->Fill(s, tw, th, fob);
	}
	void LibBridge_CFillFlat_CONSTRUCTOR(CFillFlat *This, COLORREF c)
	{
		new (This) CFillFlat(c);
	}
	void LibBridge_CFillFlat_CCONSTRUCTOR(CFillFlat *This, CFillFlat const &s)
	{
		new (This) CFillFlat(s);
	}
	BOOL LibBridge_CFillFlat_Fill(CFillFlat *This, cSurface *s, int l, int t, int r, int b, BOOL fob)
	{
		return This->CFillFlat::Fill(s, l, t, r, b, fob);
	}
	void LibBridge_CFillDir_CONSTRUCTOR(CFillDir *This, COLORREF f, COLORREF t, BOOL v, int x, int y)
	{
		new (This) CFillDir(f, t, v, x, y);
	}
	void LibBridge_CFillDir_CCONSTRUCTOR(CFillDir *This, CFillDir const &s)
	{
		new (This) CFillDir(s);
	}
	DWORD LibBridge_CFillDir_SetFillOrg(CFillDir *This, int x, int y)
	{
		return This->CFillDir::SetFillOrg(x, y);
	}
	BOOL LibBridge_CFillDir_Fill_1(CFillDir *This, cSurface *s, int l, int t, int r, int b, BOOL fob)
	{
		return This->CFillDir::Fill(s, l, t, r, b, fob);
	}
	BOOL LibBridge_CFillDir_Fill_2(CFillDir *This, cSurface *s, int tw, int th, BOOL fob)
	{
		return This->CFillDir::Fill(s, tw, th, fob);
	}
	void LibBridge_CFillMosaic_CONSTRUCTOR(CFillMosaic *This, cSurface *m, int x, int y)
	{
		new (This) CFillMosaic(m, x, y);
	}
	void LibBridge_CFillMosaic_CCONSTRUCTOR(CFillMosaic *This, CFillMosaic &s)
	{
		new (This) CFillMosaic(s);
	}
	DWORD LibBridge_CFillMosaic_SetFillOrg(CFillMosaic *This, int x, int y)
	{
		return This->CFillMosaic::SetFillOrg(x, y);
	}
	BOOL LibBridge_CFillMosaic_Fill(CFillMosaic *This, cSurface *s, int l, int t, int r, int b, BOOL fob)
	{
		return This->CFillMosaic::Fill(s, l, t, r, b, fob);
	}
}
