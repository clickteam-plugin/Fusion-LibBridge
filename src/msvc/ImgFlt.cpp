#include "Ccxhdr.h"
#include "ImageFlt.h"
#include "ImgFlt.h"

#include <new>

extern "C"
{
	BOOL LibBridge_ImportImageFromInputFile(CImageFilterMgr *ifm, CInputFile *in, cSurface *surf, LPDWORD fID, DWORD flags)
	{
		return ImportImageFromInputFile(ifm, in, surf, fID, flags);
	}
	BOOL LibBridge_GetNextAnimationFrame(CImageFilterMgr *ifm, cSurface *surf, CImageFilter *iF)
	{
		return GetNextAnimationFrame(ifm, surf, iF);
	}
	void LibBridge_EndAnimationImport(CImageFilterMgr *ifm, CImageFilter *iF)
	{
		return EndAnimationImport(ifm, iF);
	}
	BOOL LibBridge_ExportNextFrame(CImageFilterMgr *ifm, cSurface *surf, CImageFilter *iF, int framdur)
	{
		return ExportNextFrame(ifm, surf, iF, framdur);
	}
	void LibBridge_EndAnimationExport(CImageFilterMgr *ifm, CImageFilter *iF)
	{
		return EndAnimationExport(ifm, iF);
	}
#ifdef _UNICODE
	BOOL LibBridge_ImportImageA(CImageFilterMgr *ifm, LPCSTR fname, cSurface *surf, LPDWORD fID, DWORD flags)
	{
		return ImportImageA(ifm, fname, surf, fID, flags);
	}
	BOOL LibBridge_CanImportImageA(CImageFilerMgr *ifm, LPCSTR fname)
	{
		return CanImportImageA(ifm, fname);
	}
	BOOL LibBridge_ImportPaletteA(CImageFIlterMgr *ifm, LPCSTR fname, LPLOGPALETTE pal)
	{
		return ImportPaletteA(ifm, fname, pal);
	}
	BOOL LibBridge_ExportImageA(CImageFIlterMgr *ifm, LPCSTR fname, cSurface *surf, DWORD fID)
	{
		return ExportImageA(ifm, fname, surf, fID);
	}
	BOOL LibBridge_CanImportAnimationA(CImageFIlterMgr *ifm, LPCSTR fname, BOOL *needconv)
	{
		return CanImportAnimationA(ifm, fname, needconv);
	}
	BOOL LibBridge_BeginAnimationImportA(CImageFIlterMgr *ifm, LPCSTR fname, cSurface *surf, CImageFilter *iF, DWORD flags)
	{
		return BeginAnimationImportA(ifm, fname, surf, iF, flags);
	}
	BOOL LibBridge_BeginAnimationExportA(CImageFIlterMgr *ifm, LPCSTR fname, cSurface *surf, CImageFilter *iF, int frames, int framdur, int loops, int loopframe)
	{
		return BeginAnimationExportA(ifm, fname, surf, iF, frames, framdur, loops, loopframe);
	}
	BOOL LibBridge_ImportImageW(CImageFilterMgr *ifm, LPCWSTR fname, cSurface *surf, LPDWORD fID, DWORD flags)
	{
		return ImportImageW(ifm, fname, surf, fID, flags);
	}
	BOOL LibBridge_CanImportImageW(CImageFilerMgr *ifm, LPCWSTR fname)
	{
		return CanImportImageW(ifm, fname);
	}
	BOOL LibBridge_ImportPaletteW(CImageFIlterMgr *ifm, LPCWSTR fname, LPLOGPALETTE pal)
	{
		return ImportPaletteW(ifm, fname, pal);
	}
	BOOL LibBridge_ExportImageW(CImageFIlterMgr *ifm, LPCWSTR fname, cSurface *surf, DWORD fID)
	{
		return ExportImageW(ifm, fname, surf, fID);
	}
	BOOL LibBridge_CanImportAnimationW(CImageFIlterMgr *ifm, LPCWSTR fname, BOOL *needconv)
	{
		return CanImportAnimationW(ifm, fname, needconv);
	}
	BOOL LibBridge_BeginAnimationImportW(CImageFIlterMgr *ifm, LPCWSTR fname, cSurface *surf, CImageFilter *iF, DWORD flags)
	{
		return BeginAnimationImportW(ifm, fname, surf, iF, flags);
	}
	BOOL LibBridge_BeginAnimationExportW(CImageFIlterMgr *ifm, LPCWSTR fname, cSurface *surf, CImageFilter *iF, int frames, int framdur, int loops, int loopframe)
	{
		return BeginAnimationExportW(ifm, fname, surf, iF, frames, framdur, loops, loopframe);
	}
#else
	BOOL LibBridge_ImportImage(CImageFilterMgr *ifm, LPCSTR fname, cSurface *surf, LPDWORD fID, DWORD flags)
	{
		return ImportImage(ifm, fname, surf, fID, flags);
	}
	BOOL LibBridge_CanImportImage(CImageFilterMgr *ifm, LPCSTR fname)
	{
		return CanImportImage(ifm, fname);
	}
	BOOL LibBridge_ImportPalette(CImageFilterMgr *ifm, LPCSTR fname, LPLOGPALETTE pal)
	{
		return ImportPalette(ifm, fname, pal);
	}
	BOOL LibBridge_ExportImage(CImageFilterMgr *ifm, LPCSTR fname, cSurface *surf, DWORD fID)
	{
		return ExportImage(ifm, fname, surf, fID);
	}
	BOOL LibBridge_CanImportAnimation(CImageFilterMgr *ifm, LPCSTR fname, BOOL *needconv)
	{
		return CanImportAnimation(ifm, fname, needconv);
	}
	BOOL LibBridge_BeginAnimationImport(CImageFilterMgr *ifm, LPCSTR fname, cSurface *surf, CImageFilter *iF, DWORD flags)
	{
		return BeginAnimationImport(ifm, fname, surf, iF, flags);
	}
	BOOL LibBridge_BeginAnimationExport(CImageFilterMgr *ifm, LPCSTR fname, cSurface *surf, CImageFilter *iF, int frames, int framdur, int loops, int loopframe)
	{
		return BeginAnimationExport(ifm, fname, surf, iF, frames, framdur, loops, loopframe);
	}
#endif
	BOOL LibBridge_ChoosePictureA(LPOPENFILENAMEA ofn, BOOL open, CImageFilterMgr *ifm, LPDWORD fID, DWORD flags)
	{
		return ChoosePictureA(ofn, open, ifm, fID, flags);
	}
	BOOL LibBridge_ChoosePictureW(LPOPENFILENAMEW ofn, BOOL open, CImageFilterMgr *ifm, LPDWORD fID, DWORD flags)
	{
		return ChoosePictureW(ofn, open, ifm, fID, flags);
	}
}
