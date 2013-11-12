#include "Ccxhdr.h"

extern "C"
{
	void LibBridge_CFillData_DCONSTRUCTOR(CFillData *This)
	{
		new (This) CFillData;
	}
	void LibBridge_CFillData_DESTRUCTOR(CFillData *This)
	{
		This->~CFillData();
	}
	DWORD LibBridge_CFillData_SetFillOrg(CFillData *This, int x, int y)
	{
		return This->SetFillOrg(x, y);
	}
	BOOL LibBridge_CFillData_Fill_1(CFillData *This, cSurface *s, int l, int t, int r, int b, BOOL fob)
	{
		return This->Fill(s, l, t, r, b, fob);
	}
	BOOL LibBridge_CFillData_Fill_2(CFillData *This, cSurface *s, int tw, int th, BOOL fob)
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
	void LibBridge_CFillDir_CONSTRUCTOR(CFillDir *This, COLORREF f, COLORREF t, BOOL v, int x, int y)
	{
		new (This) CFillDir(f, t, v, x, y);
	}
	void LibBridge_CFillDir_CCONSTRUCTOR(CFillDir *This, CFillDir const &s)
	{
		new (This) CFillDir(s);
	}
	void LibBridge_CFillMosaic_CONSTRUCTOR(CFillMosaic *This, cSurface *m, int x, int y)
	{
		new (This) CFillMosaic(m, x, y);
	}
	void LibBridge_CFillMosaic_CCONSTRUCTOR(CFillMosaic *This, CFillMosaic &s)
	{
		new (This) CFillMosaic(s);
	}
}
