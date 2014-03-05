#include "Ccxhdr.h"
#include "ImageFlt.h"

#include <new>

extern "C"
{
	void LibBridge_CImageFilterMgr_DCONSTRUCTOR(CImageFilterMgr *This)
	{
		new (This) CImageFilterMgr;
	}
	CImageFilterMgr *LibBridge_CImageFilterMgr_CreateInstance()
	{
		return CImageFilterMgr::CreateInstance();
	}
	void LibBridge_CImageFilterMgr_Initialize_1(CImageFilterMgr *This, LPCSTR fp, DWORD flags)
	{
		return This->Initialize(fp, flags);
	}
	void LibBridge_CImageFilterMgr_Initialize_2(CImageFilterMgr *This, LPCWSTR fp, DWORD flags)
	{
		return This->Initialize(fp, flags);
	}
	BOOL LibBridge_CImageFilterMgr_DoesFilterSupportImages(CImageFilterMgr *This, int index)
	{
		return This->DoesFilterSupportImages(index);
	}
	BOOL LibBridge_CImageFilterMgr_DoesFilterSupportAnimations(CImageFilterMgr *This, int index)
	{
		return This->DoesFilterSupportAnimations(index);
	}
	void LibBridge_CImageFilter_CONSTRUCTOR(CImageFilter *This, CImageFilterMgr *mgr)
	{
		new (This) CImageFilter(mgr);
	}
	void LibBridge_CImageFilter_DESTRUCTOR(CImageFilter *This)
	{
		This->~CImageFilter();
	}
	BOOL LibBridge_CImageFilter_UseSpecificFilterIndex(CImageFilter *This, int index)
	{
		return This->UseSpecificFilterIndex(index);
	}
	BOOL LibBridge_CImageFilter_UseSpecificFilterID(CImageFilter *This, DWORD ID)
	{
		return This->UseSpecificFilterID(ID);
	}
	void LibBridge_CImageFilter_SetCompressionLevel(CImageFilter *This, int level)
	{
		return This->SetCompressionLevel(level);
	}
	int LibBridge_CImageFilter_Open_1(CImageFilter *This, LPCSTR fname)
	{
		return This->Open(fname);
	}
	int LibBridge_CImageFilter_Open_2(CImageFilter *This, LPCWSTR fname)
	{
		return This->Open(fname);
	}
	int LibBridge_CImageFilter_Open_3(CImageFilter *This, CInputFile *f)
	{
		return This->Open(f);
	}
	int LibBridge_CImageFilter_PrepareLoading(CImageFilter *This, int w, int h, int d, LPLOGPALETTE pal)
	{
		return This->PrepareLoading(w, h, d, pal);
	}
	int LibBridge_CImageFilter_Load(CImageFilter *This, LPBYTE data, int w, int h, int p, int d, LPLOGPALETTE pal, LPBYTE alpha, int ap)
	{
		return This->Load(data, w, h, p, d, pal, alpha, ap);
	}
	int LibBridge_CImageFilter_Save_1(CImageFilter *This, LPCSTR fname, LPBYTE data, int w, int h, int d, int p, LPLOGPALETTE pal, LPBYTE alpha, int ap)
	{
		return This->Save(fname, data, w, h, d, p, pal, alpha, ap);
	}
	int LibBridge_CImageFilter_Save_2(CImageFilter *This, LPCWSTR fname, LPBYTE data, int w, int h, int d, int p, LPLOGPALETTE pal, LPBYTE alpha, int ap)
	{
		return This->Save(fname, data, w, h, d, p, pal, alpha, ap);
	}
	void LibBridge_CImageFilter_Close(CImageFilter *This)
	{
		return This->Close();
	}
	int LibBridge_CImageFilter_GetWidth(CImageFilter *This)
	{
		return This->GetWidth();
	}
	int LibBridge_CImageFilter_GetHeight(CImageFilter *This)
	{
		return This->GetHeight();
	}
	int LibBridge_CImageFilter_GetPitch(CImageFilter *This)
	{
		return This->GetPitch();
	}
	int LibBridge_CImageFilter_GetDepth(CImageFilter *This)
	{
		return This->GetDepth();
	}
	DWORD LibBridge_CImageFilter_GetDataSize(CImageFilter *This)
	{
		return This->GetDataSize();
	}
	LPLOGPALETTE LibBridge_CImageFilter_GetPalette(CImageFilter *This)
	{
		return This->GetPalette();
	}
	BOOL LibBridge_CImageFilter_GetTransparentColor(CImageFilter *This, COLORREF *tc)
	{
		return This->GetTransparentColor(tc);
	}
	BOOL LibBridge_CImageFilter_ContainsAlphaChannel(CImageFilter *This)
	{
		return This->ContainsAlphaChannel();
	}
	BOOL LibBridge_CImageFilter_IsAnimation(CImageFilter *This)
	{
		return This->IsAnimation();
	}
	int LibBridge_CImageFilter_GetNumberOfFrames(CImageFilter *This)
	{
		return This->GetNumberOfFrames();
	}
	int LibBridge_CImageFilter_GetCurrentFrame(CImageFilter *This)
	{
		return This->GetCurrentFrame();
	}
	int LibBridge_CImageFilter_GetFrameDelay(CImageFilter *This, int fi)
	{
		return This->GetFrameDelay(fi);
	}
	DWORD LibBridge_CImageFilter_GetAnimDuration(CImageFilter *This)
	{
		return This->GetAnimDuration();
	}
	LPBYTE LibBridge_CImageFilter_GetUserInfo(CImageFilter *This)
	{
		return This->GetUserInfo();
	}
	DWORD LibBridge_CImageFilter_GetUserInfoSize(CImageFilter *This)
	{
		return This->GetUserInfoSize();
	}
	void LibBridge_CImageFilter_Restart(CImageFilter *This)
	{
		return This->Restart();
	}
	int LibBridge_CImageFilter_GoToImage(CImageFilter *This, LPBYTE data, int p, int n)
	{
		return This->GoToImage(data, p, n);
	}
	void LibBridge_CImageFilter_GetUpdateRect(CImageFilter *This, LPRECT r)
	{
		return This->GetUpdateRect(r);
	}
	int LibBridge_CImageFilter_GetLoopCount(CImageFilter *This)
	{
		return This->GetLoopCount();
	}
	int LibBridge_CImageFilter_GetLoopFrame(CImageFilter *This)
	{
		return This->GetLoopFrame();
	}
	int LibBridge_CImageFilter_CreateAnimation_1(CImageFilter *This, LPCSTR fname, int w, int h, int d, int nf, int ms, int lc, int lf, LPBYTE ui, DWORD uis)
	{
		return This->CreateAnimation(fname, w, h, d, nf, ms, lc, lf, ui, uis);
	}
	int LibBridge_CImageFilter_CreateAnimation_2(CImageFilter *This, LPCWSTR fname, int w, int h, int d, int nf, int ms, int lc, int lf, LPBYTE ui, DWORD uis)
	{
		return This->CreateAnimation(fname, w, h, d, nf, ms, lc, lf, ui, uis);
	}
	int LibBridge_CImageFilter_CreateAnimation_3(CImageFilter *This, COutputFile *f, int w, int h, int d, int nf, int ms, int lc, int lf, LPBYTE ui, DWORD uis)
	{
		return This->CreateAnimation(f, w, h, d, nf, ms, lc, lf, ui, uis);
	}
	int LibBridge_CImageFilter_SaveAnimationFrame_1(CImageFilter *This, LPBYTE data, int w, int h, int p, int d, LPLOGPALETTE pal, LPBYTE alpha, int ap, int ms, DWORD flags)
	{
		return This->SaveAnimationFrame(data, w, h, p, d, pal, alpha, ap, ms, flags);
	}
	int LibBridge_CImageFilter_SaveAnimationFrame_2(CImageFilter *This, LPBYTE data, LPBYTE pdata, int w, int h, int p, int d, LPLOGPALETTE pal, LPBYTE alpha, LPBYTE palpha, int ap, int ms, DWORD flags)
	{
		return This->SaveAnimationFrame(data, pdata, w, h, p, d, pal, alpha, palpha, ap, ms, flags);
	}
	void LibBridge_CImageFilter_AddPreviousFrameDuration(CImageFilter *This, int ms)
	{
		return This->AddPreviousFrameDuration(ms);
	}
	DWORD LibBridge_CImageFilter_GetCurrentSaveAnimSize(CImageFilter *This)
	{
		return This->GetCurrentSaveAnimSize();
	}
	void LibBridge_CImageFilter_SetProgressCallBack(CImageFilter *This, PROGRESSPROC proc)
	{
		return This->SetProgressCallBack(proc);
	}
	DWORD LibBridge_CImageFilter_GetFilterID(CImageFilter *This)
	{
		return This->GetFilterID();
	}
	LPCSTR LibBridge_CImageFilter_GetFilterNameA(CImageFilter *This)
	{
		return This->GetFilterNameA();
	}
	int LibBridge_CImageFilter_GetFilterIndex(CImageFilter *This)
	{
		return This->GetFilterIndex();
	}
	DWORD LibBridge_CImageFilter_GetFilterColorCaps(CImageFilter *This)
	{
		return This->GetFilterColorCaps();
	}
	BOOL LibBridge_CImageFilter_CanSave(CImageFilter *This)
	{
		return This->CanSave();
	}
	BOOL LibBridge_CImageFilter_CanSaveAnim(CImageFilter *This)
	{
		return This->CanSaveAnim();
	}
	LPCWSTR LibBridge_CImageFilter_GetFilterNameW(CImageFilter *This)
	{
		return This->GetFilterNameW();
	}
}
