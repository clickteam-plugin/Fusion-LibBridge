#include "Ccxhdr.h"

extern "C"
{
	LPSURFACE LibBridge_NewSurface()
	{
		return NewSurface();
	}
	void LibBridge_DeleteSurface(LPSURFACE surf)
	{
		return DeleteSurface(surf);
	}
	BOOL LibBridge_GetSurfacePrototype(LPSURFACE *protr, int depth, int st, int drv)
	{
		return GetSurfacePrototype(proto, depth, st, drv);
	}
	DWORD LibBridge_GetDIBHeaderSize(int depth)
	{
		return GetDIBHeaderSize(depth);
	}
	DWORD LibBridge_GetDIBWidthBytes(int width, int depth)
	{
		return GetDIBWidthBytes(width, depth);
	}
	DWORD LibBridge_GetDIBSize(int width, int height, int depth)
	{
		return GetDIBSize(width, height, depth);
	}
	LPBYTE LibBridge_GetDIBBitmap(LPBITMAPINFO bmi)
	{
		return GetDIBBitmap(bmi);
	}
	void LibBridge_cSurface_DCONSTRUCTOR(cSurface *This)
	{
		new (This) cSurface;
	}
	void LibBridge_cSurface_DESTRUCTOR(cSurface *This)
	{
		This->~cSurface();
	}
	void LibBridge_cSurface_InitializeSurfaces()
	{
		return cSurface::InitializeSurfaces();
	}
	void LibBridge_cSurface_FreeSurfaces()
	{
		return cSurface::FreeSurfaces();
	}
#ifdef HWABETA
	void LibBridge_cSurface_FreeExternalModules()
	{
		return cSurface::FreeExternalModules();
	}
#endif
	cSurface &LibBridge_cSurface_OP_ASSIGN(cSurface *This, cSurface const &source)
	{
		return This->operator=(source);
	}
	void LibBridge_cSurface_Create_1(cSurface *This, int width, int height, LPSURFACE prototype)
	{
		return This->Create(width, height, prototype);
	}
	void LibBridge_cSurface_Create_2(HDC dc)
	{
		return This->Create(dc);
	}
	void LibBridge_cSurface_Create_3(HWND wnd, BOOL IncludeFrame)
	{
		return This->Create(wnd, IncludeFrame);
	}
	BOOL LibBridge_cSurface_CreateScreenSurface(cSurface *This)
	{
		return This->CreateScreenSurface();
	}
	BOOL LibBridge_cSurface_IsScreenSurface(cSurface *This)
	{
		return This->IsScreenSurface();
	}
	BOOL LibBridge_cSurface_IsValid(cSurface *This)
	{
		return This->IsValid();
	}
	int LibBridge_cSurface_GetType(cSurface *This)
	{
		return This->GetType();
	}
	int LibBridge_cSurface_GetDriver(cSurface *This)
	{
		return This->GetDriver();
	}
	DWORD LibBridge_cSurface_GetDriverInfo(cSurface *This, LPVOID info)
	{
		return This->GetDriverInfo(info);
	}
	void LibBridge_cSurface_Clone(cSurface *This, cSurface const &src, int nw, int nh)
	{
		return This->Clone(src, nw, nh);
	}
	void LibBridge_cSurface_Delete(cSurface *This)
	{
		return This->Delete();
	}
	int LibBridge_cSurface_GetLastError(cSurface *This)
	{
		return This->GetLastError();
	}
	int LibBridge_cSurface_GetWidth(cSurface const *This)
	{
		return This->GetWidth();
	}
	int LibBridge_cSurface_GetHeight(cSurface const *This)
	{
		return This->GetHeight();
	}
	int LibBridge_cSurface_GetDepth(cSurface const *This)
	{
		return This->GetDepth();
	}
	BOOL LibBridge_cSurface_GetInfo(cSurface const *This, int &width, int &height, int &depth)
	{
		return This->GetInfo(width, height, depth);
	}
	void LibBridge_cSurface_SetOrigin_1(cSurface *This, int x, int y)
	{
		return This->SetOrigin(x, y);
	}
	void LibBridge_cSurface_SetOrigin_2(cSurface *This, POINT c)
	{
		return This->SetOrigin(c);
	}
	void LibBridge_cSurface_GetOrigin_1(cSurface *This, POINT &pt)
	{
		return This->GetOrigin(pt);
	}
	void LibBridge_cSurface_GetOrigin_2(cSurface *This, int &x, int &y)
	{
		return This->GetOrigin(x, y);
	}
	void LibBridge_cSurface_OffsetOrigin_1(cSurface *This, int dx, int dy)
	{
		return This->OffsetOrigin(dx, dy);
	}
	void LibBridge_cSurface_OffsetOrigin_2(cSurface *This, POINT delta)
	{
		return This->OffsetOrigin(delta);
	}
	LPBYTE LibBridge_cSurface_LockBuffer(cSurface *This)
	{
		return This->LockBuffer();
	}
	void LibBridge_cSurface_UnlockBuffer(cSurface *This, LPBYTE buffer)
	{
		return This->UnlockBuffer(buffer);
	}
	int LibBridge_cSurface_GetPitch(cSurface const *This)
	{
		return This->GetPitch();
	}
	void LibBridge_cSurface_SetCurrentDevice(cSurface *This)
	{
		return This->SetCurrentDevice();
	}
	int LibBridge_cSurface_BeginRendering(cSurface *This, BOOL clear, RGBAREF rgba)
	{
		return This->BeginRendering(clear, rgba);
	}
	int LibBridge_cSurface_EndRendering(cSurface *This)
	{
		return This->EndRendering();
	}
	BOOL LibBridge_cSurface_UpdateScreen(cSurface *This)
	{
		return This->UpdateScreen();
	}
#ifdef HWABETA
	cSurface *LibBridge_cSurface_GetRenderTargetSurface(cSurface *This)
	{
		return This->GetRenderTargetSurface();
	}
	void LibBridge_cSurface_ReleaseRenderTargetSurface(cSurface *This, cSurface *sf)
	{
		return This->ReleaseRenderTargetSurface(sf);
	}
	void LibBridge_cSurface_Flush(cSurface *This, BOOL m)
	{
		return This->Flush(m);
	}
	void LibBridge_cSurface_SetZBuffer(cSurface *This, float z2D)
	{
		return This->SetZBuffer(z2D);
	}
#endif
	HDC LibBridge_cSurface_GetDC(cSurface *This)
	{
		return This->GetDC();
	}
	void LibBridge_cSurface_ReleaseDC(cSurface *This, HDC dc)
	{
		return This->ReleaseDC(dc);
	}
	void LibBridge_cSurface_AttachWindow(cSurface *This, HWND wnd)
	{
		return This->AttachWindow(wnd);
	}
	void LibBridge_cSurface_GetClipRect(cSurface *This, int &x, int &y, int &w, int &h)
	{
		return This->GetClipRect(x, y, w, h);
	}
	void LibBridge_cSurface_SetClipRect(cSurface *This, int x, int y, int w, int h)
	{
		return This->SetClipRect(x, y, w, h);
	}
	void LibBridge_cSurface_ClearClipRect(cSurface *This)
	{
		return This->ClearClipRect();
	}
	BOOL LibBridge_cSurface_LoadImageA_1(cSurface *This, HFILE f, DWORD size, LIFlags flags)
	{
		return This->LoadImageA(f, size, flags);
	}
	BOOL LibBridge_cSurface_LoadImageA_2(cSurface *This, LPCSTR fname, LIFlags flags)
	{
		return This->LoadImageA(fname, flags);
	}
	BOOL LibBridge_cSurface_LoadImageA_3(cSurface *This, HINSTANCE inst, int bmpID, LIFlags flags)
	{
		return This->LoadImageA(inst, bmpID, flags);
	}
	BOOL LibBridge_cSurface_LoadImageA_4(cSurface *This, LPBITMAPINFO bmi, LPBYTE bits, LIFlags flags)
	{
		return This->LoadImageA(bmi, bits, flags);
	}
	BOOL LibBridge_cSurface_LoadImageW_1(cSurface *This, HFILE f, DWORD size, LIFlags flags)
	{
		return This->LoadImageW(f, size, flags);
	}
	BOOL LibBridge_cSurface_LoadImageW_2(cSurface *This, LPCWSTR fname, LIFlags flags)
	{
		return This->LoadImageW(fname, flags);
	}
	BOOL LibBridge_cSurface_LoadImageW_3(cSurface *This, HINSTANCE inst, int bmpID, LIFlags flags)
	{
		return This->LoadImageW(inst, bmpID, flags);
	}
	BOOL LibBridge_cSurface_LoadImageW_4(cSurface *This, LPBITMAPINFO bmi, LPBYTE bits, LIFlags flags)
	{
		return This->LoadImageW(bmi, bits, flags);
	}
	BOOL LibBridge_cSurface_SaveImage_1(cSurface *This, HFIE f, SIFlags flags)
	{
		return This->SaveImage(f, flags);
	}
	BOOL LibBridge_cSurface_SaveImage_2(cSurface *This, LPCSTR fname, SIFlags flags)
	{
		return This->SaveImage(fname, flags);
	}
	BOOL LibBridge_cSurface_SaveImage_3(cSurface *This, LPCWSTR fname, SIFlags flags)
	{
		return This->SaveImage(fname, flags);
	}
	BOOL LibBridge_cSurface_SaveImage_4(cSurface *This, LPBITMAPINFO bmi, LPBYTE bits, SIFlags flags)
	{
		return This->SaveImage(bmi, bits, flags);
	}
	DWORD LibBridge_cSurface_GetDIBSize(cSurface *This)
	{
		return This->GetDIBSize();
	}
	void LibBridge_cSurface_SetPixel_1(cSurface *This, int x, int y, COLORREF c)
	{
		return This->SetPixel(x, y, c);
	}
	void LibBridge_cSurface_SetPixel_2(cSurface *This, int x, int y, BYTE R, BYTE G, BYTE B)
	{
		return This->SetPixel(x, y, R, G, B);
	}
	void LibBridge_cSurface_SetPixel_3(cSurface *This, int x, int y, int index)
	{
		return This->SetPixel(x, y, index);
	}
	void LibBridge_cSurface_SetPixelFast(cSurface *This, int x, int y, COLORREF c)
	{
		return This->SetPixelFast(x, y, c);
	}
	void LibBridge_cSurface_SetPixelFast8(cSurface *This, int x, int y, int index)
	{
		return This->SetPixelFast8(x, y, index);
	}
	BOOL LibBridge_cSurface_GetPixel_1(cSurface const *This, int x, int y, COLORREF &c)
	{
		return This->GetPixel(x, y, c);
	}
	BOOL LibBridge_cSurface_GetPixel_2(cSurface const *This, int x, int y, BYTE &R, BYTE &G, BYTE &B)
	{
		return This->GetPixel(x, y, R, G, B);
	}
	BOOL LibBridge_cSurface_GetPixel_3(cSurface const *This, int x, int y, int &index)
	{
		return This->GetPixel(x, y, index);
	}
	COLORREF LibBridge_cSurface_GetPixelFast(cSurface *This, int x, int y)
	{
		return This->GetPixelFast(x, y);
	}
	int LibBridge_cSurface_GetPixelFast8(cSurface *This, int x, int y)
	{
		return This->GetPixelFast8(x, y);
	}
	BOOL LibBridge_cSurface_Blit_1(cSurface const *This, cSurface &dest)
	{
		return This->Blit(dest);
	}
	BOOL LibBridge_cSurface_Blit_2(cSurface const *This, cSurface &dest, int x, int y, BlitMode bm, BlitOp bo, LPARAM param, DWORD flags)
	{
		return This->Blit(dest, x, y, bm, bo, param, flags);
	}
	BOOL LibBridge_cSurface_Blit_3(cSurface const *This, cSurface &dest, int dx, int dy, int sx, int sy, int sw, int sh, BlitMode bm, BlitOp bo, LPARAM param, DWORD flags)
	{
		return This->Blit(dest, dx, dy, sx, sy, sw, sh, bm, bo, param, flags);
	}
#ifdef HWABETA
	BOOL LibBridge_cSurface_BlitEx(cSurface const *This, cSurface &dest, float dx, float dy, float fsx, float fsy, int sx, int sy, int sw, int sh, LPPOINT center, float angle, BlitMode bm, BlitOp bo, LPARAM param, DWORD flags)
	{
		return This->BlitEx(dest, dx, dy, fsx, fsy, sx, sy, sw, sh, center, angle, bm, bo, param, flags);
	}
#endif
	BOOL LibBridge_cSurface_Scroll(cSurface *This, int dx, int dy, nt sx, int sy, int w, int h)
	{
		return This->Scroll(dx, dy, sx, sy, w, h);
	}
	BOOL LibBridge_cSurface_FilterBlit_1(cSurface const *This, cSurface &dest, int dx, int dy, int sx, int sy, int sw, int sh, BlitMode bm, FILTERBLITPROC proc, LPARAM param)
	{
		return This->FilterBlit(dest, dx, dy, sx, sy, sw, sh, bm, proc, param);
	}
	BOOL LibBridge_cSurface_FilterBlit_2(cSurface const *This, cSurface &dest, FILTERBLITPROC proc, LPARAM param, BlitMode bm)
	{
		return This->FilterBlit(dest, proc, param, bm);
	}
	BOOL LibBridge_cSurface_MatrixFilterBlit(cSurface const *This, cSurface &dest, int dx, int dy, int sx, int sy, int sw, int sh, int mw, int mh, int mdx, int mdy, MATRIXFILTERBLITPROC proc, LPARAM param)
	{
		return This->MatrixFilterBlit(dest, dx, dy, sx, sy, sw, sh, mw, mh, mdx, mdy, proc, param);
	}
	BOOL LibBridge_cSurface_Stretch_1(cSurface const *This, cSurface &dest, DWORD flags)
	{
		return This->Stretch(dest, flags);
	}
	BOOL LibBridge_cSurface_Stretch_2(cSurface const *This, cSurface &dest, int dx, int dy, int dw, int dh, BlitMode bm, BlitOp bo, LPARAM param, DWORD flags)
	{
		return This->Stretch(dest, dx, dy, dw, dh, bm, bo, param, flags);
	}
	BOOL LibBridge_cSurface_Stretch_3(cSurface const *This, cSurface &dest, int dx, int dy, int dw, int dh, int sx, int sy, int sw, int sh, BlitMode bm, BlitOp bo, LPARAM param, DWORD flags)
	{
		return This->Stretch(dest, dx, dy, dw, dh, sx, sy, sw, sh, bm, bo, param, flags);
	}
	BOOL LibBridge_cSurface_ReverseX_1(cSurface *This)
	{
		return This->ReverseX();
	}
	BOOL LibBridge_cSurface_ReverseX_2(cSurface *This, int x, int y, int w, int h)
	{
		return This->ReverseX(x, y, w, h);
	}
	BOOL LibBridge_cSurface_ReverseY_1(cSurface *This)
	{
		return This->ReverseY();
	}
	BOOL LibBridge_cSurface_ReverseY_2(cSurface *This, int x, int y, int w, int h)
	{
		return This->ReverseY(x, y, w, h);
	}
	BOOL LibBridge_cSurface_GetMinimizeRect(cSurface *This, RECT *r)
	{
		return This->GetMinimizeRect(r);
	}
	BOOL LibBridge_cSurface_Minimize_1(cSurface *This)
	{
		return This->Minimize();
	}
	BOOL LibBridge_cSurface_Minimize_2(cSurface *This, RECT *r)
	{
		return This->Minimize(r);
	}
	BOOL LibBridge_cSurface_CaptureDC(HDC s, HDC d LONG sx, LONG sy, LONG dx, LONG dy, LONG sw, LONG sh, LONG dw, LONG dh, BOOL flush, BOOL keep)
	{
		return cSurface::CaptureDC(s, d, sx, sy, dx, dy, sw, sh, dw, dh, flush, keep);
	}
	BOOL LibBridge_cSurface_Fill_1(cSurface *This, COLORREF c)
	{
		return This->Fill(c);
	}
	BOOL LibBridge_cSurface_Fill_2(cSurface *This, CFillData *fd)
	{
		return This->Fill(fd);
	}
	BOOL LibBridge_cSurface_Fill_3(cSurface *This, int index)
	{
		return This->Fill(index);
	}
	BOOL LibBridge_cSurface_Fill_4(cSurface *This, int R, int G, int B)
	{
		return This->Fill(R, G, B);
	}
	BOOL LibBridge_cSurface_Fill_5(cSurface *This, int x, int y, int w, int h, COLORREF c)
	{
		return This->Fill(x, y, w, h, c);
	}
	BOOL LibBridge_cSurface_Fill_6(cSurface *This, int x, int y, int w, int h, CFillData *fd)
	{
		return This->Fill(x, y, w, h, fd);
	}
	BOOL LibBridge_cSurface_Fill_7(cSurface *This, int x, int y, int w, int h, int index)
	{
		return This->Fill(x, y, w, h, index);
	}
	BOOL LibBridge_cSurface_Fill_8(cSurface *This, int x, int y, int w, int h, int R, int G, int B)
	{
		return This->Fill(x, y, w, h, R, G, B);
	}
#ifdef HWABETA
	BOOL LibBridge_cSurface_Fill_9(cSurface *This, int x, int y, int w, int h, COLORREF *colors, DWORD flags)
	{
		return This->Fill(x, y, w, h, colors, flags);
	}
#endif
	BOOL LibBridge_cSurface_Ellipse_1(cSurface *This, int l, int t, int r, int b, int th, COLORREF co)
	{
		return This->Ellipse(l, t, r, b, th, co);
	}
	BOOL LibBridge_cSurface_Ellipse_2(cSurface *This, int l, int t, int r, int b, COLORREF cf, int th, COLORREF co, BOOL fill)
	{
		return This->Ellipse(l, t, r, b, cf, th, co, fill);
	}
	BOOL LibBridge_cSurface_Rectangle_1(cSurface *This, int l, int t, int r, int b, int th, COLORREF co)
	{
		return This->Rectangle(l, t, r, b, th, co);
	}
	BOOL LibBridge_cSurface_Rectangle_2(cSurface *This, int l, int t, int r, int b, COLORREF cf, int th, COLORREF co, BOOL fill)
	{
		return This->Rectangle(l, t, r, b, cf, th, co, fill);
	}
	BOOL LibBridge_cSurface_Polygon_1(cSurface *This, LPPOINT pts, int np, int th, COLORREF co)
	{
		return This->Polygon(pts, np, th, co);
	}
	BOOL LibBridge_cSurface_Polygon_2(cSurface *This, LPPOINT pts, int np, COLORREF cf, int th, COLORREF co, BOOL fill)
	{
		return This->Polygon(pts, np, cf, th, co, fill);
	}
	BOOL LibBridge_cSurface_Line_1(cSurface *This, int x1, int y1, int x2, int y2, int th, COLORREF co)
	{
		return This->Line(x1, y1, x2, y2, th, co);
	}
	BOOL LibBridge_cSurface_Ellipse_3(cSurface *This, int l, int t, int r, int b, int th, CFillData *fdo, BOOL aa, BlitMode bm, BlitOp bo, LPARAM param)
	{
		return This->Ellipse(l, t, r, b, th, fdo, aa, bm, bo, param);
	}
	BOOL LibBridge_cSurface_Ellipse_4(cSurface *This, int l, int t, int r, int b, CFillData *fdf, BOOL aa, BlitMode bm, BlitOp bo, LPARAM param)
	{
		return This->Ellipse(l, t, r, b, fdf, aa, bm, bo param);
	}
	BOOL LibBridge_cSurface_Ellipse_5(cSurface *This, int l, int t, int r, int b, CFillData *fdf, int th, CFillData *fdo, BOOL aa, BlitMode bm, BlitOp bo, LPARAM param, BOOL fill)
	{
		return This->Ellipse(l, t, r, b, fdf, th, fdo, aa, bm, bo param, fill);
	}
	BOOL LibBridge_cSurface_Rectangle_3(cSurface *This, int l, int t, int r, int b, int th, CFillData *fdo, BOOL aa, BlitMode bm, BlitOp bo, LPARAM param)
	{
		return This->Rectangle(l, t, r, b, th, fdo, aa, bm, bo, param);
	}
	BOOL LibBridge_cSurface_Rectangle_4(cSurface *This, int l, int t, int r, int b, CFilData *fdf, BOOL aa, BlitMode bm, BlitOp bo, LPARAM param)
	{
		return This->Rectangle(l, t, r, b, fdf, aa, bm, bo, param);
	}
	BOOL LibBridge_cSurface_Rectangle_5(cSurface *This, int l, int t, int r, int b, CFilData *fdf, int th, CFillData *fdo, BOOL aa, BlitMode bm, BlitOp bo, LPARAM param, BOOL fill)
	{
		return This->Rectangle(l, t, r, b, fdf, th, fdo, aa, bm, bo, param, fill);
	}
	BOOL LibBridge_cSurface_Polygon_3(cSurface *This, LPPOINT pts, int np, int th, CFillData *fdo, BOOL aa, BlitMode bm, BlitOp bo, LPARAM param)
	{
		return This->Polygon(pts, np, th, fdo, aa, bm, bo, param);
	}
	BOOL LibBridge_cSurface_Polygon_4(cSurface *This, LPPOINT pts, int np, CFillData *fdf, BOOL aa, BlitMode bm, BlitOp bo, LPARAM param)
	{
		return This->Polygon(pts, np, fdf, aa, bm, bo, param);
	}
	BOOL LibBridge_cSurface_Polygon_5(cSurface *This, LPPOINT pts, int np, CFillData *fdf, int th, CFillData *fdo, BOOL aa, BlitMode bm, BlitOp bo, LPARAM param, BOOL fill)
	{
		return This->Polygon(pts, np, fdf, th, fdo, aa, bm, bo, param, fill);
	}
	BOOL LibBridge_cSurface_Line_2(cSurface *This, int x1, int y1, int x2, int y2, int th, CFillData *fdo, BOOL aa, BlitMode bm, BlitOp bo, LPARAM param)
	{
		return This->Line(x1, y1, x2, y2, th, fdo, aa, bm, bo, param);
	}
	BOOL LibBridge_cSurface_FloodFill_1(cSurface *This, int x, int y, int &l, int &t, int &r, int &b, COLORREF cf, BOOL aa, int tol, BlitMode bm, BlitOp bo, LPARAM param)
	{
		return This->FloodFill(x, y, l, t, r, b, cf, aa, tol, bm, bo, param);
	}
	BOOL LibBridge_cSurface_FloodFill_2(cSurface *This, int x, int y, COLORREF cf, BOOL aa, int tol, BlitMode bm, BlitOp bo, LPARAM param)
	{
		return This->FloodFill(x, y, cf, aa, tol, bm, bo, param);
	}
	BOOL LibBridge_cSurface_Rotate_1(cSurface *This, cSurface &dest, double a, BOOL aa, COLORREF cf, BOOL trans)
	{
		return This->Rotate(dest, a, aa, cf, trans);
	}
	BOOL LibBridge_cSurface_Rotate_2(cSurface *This, cSurface &dest, int a, BOOL aa, COLORREF cf, BOOL trans)
	{
		return This->Rotate(dest, a, aa, cf, trans);
	}
	BOOL LibBridge_cSurface_Rotate90(cSurface *This, cSurface &dest, BOOL b270)
	{
		return This->Rotate90(dest, b270);
	}
	BOOL LibBridge_cSurface_CreateRotatedSurface_1(cSurface *This, cSurface &ps, double a, BOOL aa, COLORREF cf, BOOL trans)
	{
		return This->CreateRotatedSurface(ps, a, aa, cf, trans);
	}
	BOOL LibBridge_cSurface_CreateRotatedSurface_2(cSurface *This, cSurface &ps, int a, BOOL aa, COLORREF cf, BOOL trans)
	{
		return This->CreateRotatedSurface(ps, a, aa, cf, trans);
	}
	void LibBridge_cSurface_GetSizeOfRotatedRect(int *w, int *h,
#ifdef HWABETA
		float
#else
		int
#endif
		angle)
	{
		return cSurface::GetSizeOfRotatedRect(w, h);
	}
	int LibBridge_cSurface_TextOutA(cSurface *This, LPCSTR text, DWORD len, int x, int y, DWORD align, LPRECT clip, CLORREF color, HFONT font, BlitMode bm, BlitOp bo, LPARAM param, int aa)
	{
		return This->TextOutA(text, len, x, y, align, clip, color, font, bm, bo, param, aa);
	}
	int LibBridge_cSurface_TextOutW(cSurface *This, LPCWSTR text, DWORD len, int x, int y, DWORD align, LPRECT clip, CLORREF color, HFONT font, BlitMode bm, BlitOp bo, LPARAM param, int aa)
	{
		return This->TextOutW(text, len, x, y, align, clip, color, font, bm, bo, param, aa);
	}
	int LibBridge_cSurface_DrawTextA(cSurface *This, LPCSTR text, DWORD len, LPRECT r, DWORD flags, COLORREF color, HFONT font, BlitMode bm, BlitOp bo, LPARAM param, int aa, DWORD lm, DOWRD rm, DWORD ts)
	{
		return This->DrawTextA(text, len, r, flags, color, font, bm, bo, param, aa, lm, rm, ts);
	}
	int LibBridge_cSurface_DrawTextW(cSurface *This, LPCWSTR text, DWORD len, LPRECT r, DWORD flags, COLORREF color, HFONT font, BlitMode bm, BlitOp bo, LPARAM param, int aa, DWORD lm, DOWRD rm, DWORD ts)
	{
		return This->DrawTextW(text, len, r, flags, color, font, bm, bo, param, aa, lm, rm, ts);
	}
	BOOL LibBridge_cSurface_IsTransparent(cSurface *This)
	{
		return This->IsTransparent();
	}
	BOOL LibBridge_cSurface_ReplaceColor(cSurface *This, COLORREF nc, COLORREF oc)
	{
		return This->ReplaceColor(nc, oc);
	}
	BOOL LibBridge_cSurface_IsColliding(cSurface *This, cSurface &dest, int dx, int dy, int sx, int sy, int w, int h)
	{
		return This->IsColliding(dest, dx, dy, sx, sy, w, h);
	}
	HICON LibBridge_cSurface_CreateIcon(cSurface *This, int w, int h, COLORREF trans, POINT *hs)
	{
		return This->CreateIcon(w, h, trans, hs);
	}
	BOOL LibBridge_cSurface_Indexed(cSurface *This)
	{
		return This->Indexed();
	}
	BOOL LibBridge_cSurface_SetPalette_1(cSurface *This, LPLOGPALETTE p, SetPaletteAction a)
	{
		return This->SetPalette(p, a);
	}
	BOOL LibBridge_cSurface_SetPalette_2(cSurface *This, LPCSPALETTE p, SetPaletteAction a)
	{
		return This->SetPalette(p, a);
	}
	BOOL LibBridge_cSurface_SetPalette_3(cSurface *This, cSurface &s, SetPaletteAction a)
	{
		return This->SetPalette(s, a);
	}
	BOOL LibBridge_cSurface_SetPalette_4(cSurface *This, HPALETTE p, SetPaletteAction a)
	{
		return This->SetPalette(p, a);
	}
	void LibBridge_cSurface_Remap_1(cSurface *This, cSurface &s)
	{
		return This->Remap(s);
	}
	void LibBridge_cSurface_Remap_2(cSurface *This, LPBYTE rt)
	{
		return This->Remap(rt);
	}
	LPCSPALETTE LibBridge_cSurface_GetPalette(cSurface *This)
	{
		return This->GetPalette();
	}
	UINT LibBridge_cSurface_GetPaletteEntries(cSurface *This, LPPALETTEENTRY pe, int index, int nbc)
	{
		return This->GetPaletteEntries(pe, index, nbc);
	}
	int LibBridge_cSurface_GetNearestColorIndex(cSurface *This, COLORREF rgb)
	{
		return This->GetNearestColorIndex(rgb);
	}
	COLORREF LibBridge_cSurface_GetRGB(cSurface *This, int index)
	{
		return This->GetRGB(index);
	}
	int LibBridge_cSurface_GetOpaqueBlackIndex(cSurface *This)
	{
		return This->GetOpaqueBlackIndex();
	}
	void LibBridge_cSurface_EnumScreenModes(cSurface *This, LPENUMSCREENMODESPROC proc, LPVOID param)
	{
		return This->EnumScreenModes(proc, param);
	}
	BOOL LibBridge_cSurface_SetScreenMode(cSurface *This, HWND wnd, int w, int h, int d)
	{
		return This->SetScreenMode(wnd, w, h, d);
	}
	void LibBridge_cSurface_RestoreWindowedMode(cSurface *This, HWND wnd)
	{
		return This->RestoreWindowedMode(wnd);
	}
	void LibBridge_cSurface_CopyScreenModeInfo(cSurface *This, cSurface *s)
	{
		return This->CopyScreenModeInfo(s);
	}
#ifdef HWABETA
	BOOL LibBridge_cSurface_SetAutoVSync(cSurface *This, int avs)
	{
		return This->SetAutoVSync(avs);
	}
#endif
	BOOL LibBridge_cSurface_WaitForVBlank(cSurface *This)
	{
		return This->WaitForVBlank();
	}
	COLORREF LibBridge_cSurface_GetSysColor(int ci)
	{
		return cSurface::GetSysColor(ci);
	}
	void LibBridge_cSurface_OnSysColorChange()
	{
		return cSurface::OnSysColorChange();
	}
	void LibBridge_cSurface_SetTransparentColor(cSurface *This, COLORREF rgb)
	{
		return This->SetTransparentColor(rgb);
	}
	COLORREF LibBridge_cSurface_GetTransparentColor(cSurface *This)
	{
		return This->GetTransparentColor();
	}
	int LibBridge_cSurface_GetTransparentColorIndex(cSurface *This)
	{
		return This->GetTransparentColorIndex();
	}
	BOOL LibBridge_cSurface_HasAlpha(cSurface *This)
	{
		return This->HasAlpha();
	}
	LPBYTE LibBridge_cSurface_LockAlpha(cSurface *This)
	{
		return This->LockAlpha();
	}
	void LibBridge_cSurface_UnlockAlpha(cSurface *This)
	{
		return This->UnlockAlpha();
	}
	int LibBridge_cSurface_GetAlphaPitch(cSurface *This)
	{
		return This->GetAlphaPitch();
	}
	void LibBridge_cSurface_CreateAlpha(cSurface *This)
	{
		return This->CreateAlpha();
	}
	void LibBridge_cSurface_SetAlpha(cSurface *This, LPBYTE a, int p)
	{
		return This->SetAlpha(a, p);
	}
	void LibBridge_cSurface_AttachAlpha(cSurface *This, LPBYTE a, int p)
	{
		return This->AttachAlpha(a, p);
	}
	LPBYTE LibBridge_cSurface_DetachAlpha(cSurface *This, LPLONG p)
	{
		return This->DetachAlpha(p);
	}
	cSurface *LibBridge_cSurface_GetAlphaSurface(cSurface *This)
	{
		return This->GetAlphaSurface();
	}
	void LibBridge_cSurface_ReleaseAlphaSurface(cSurface *This, cSurface *as)
	{
		return This->ReleaseAlphaSurface(as);
	}
	DWORD LibBridge_cSurface_CreateMask(cSurface *This, LPSMASK mask, UINT flags)
	{
		return This->CreateMask(mask, flags);
	}
#ifdef HWABETA
	void LibBridge_cSurface_OnLostDevice(cSurface *This)
	{
		return This->OnLostDevice();
	}
	void LibBridge_cSurface_AddLostDeviceCallBack(cSurface *This, LOSTDEVICECALLBACKPROC proc, LPARAM param)
	{
		return This->AddLostDeviceCallBack(proc, param);
	}
	void LibBridge_cSurface_RemoveLostDeviceCallBack(cSurface *This, LOSTDEVICECALLBACKPROC proc, LPARAM param)
	{
		return This->RemoveLostDeviceCallBack(proc, param);
	}
#endif
	cSurfaceImplementation *LibBridge_cSurface_GetSurfaceImplementation(cSurface &s)
	{
		return cSurface::GetSurfaceImplementation(cs);
	}
	void LibBridge_cSurface_SetSurfaceImplementation(cSurface &s, cSurfaceImplementation *si)
	{
		return cSurface::SetSurfaceImplementation(s, si);
	}
	void LibBridge_cSurface_BuildSysColorTable()
	{
		return cSurface::BuildSysColorTable();
	}
	HRGN LibBridge_cSurface_SetDrawClip(cSurface *This, HDC dc)
	{
		return This->SetDrawClip(dc);
	}
	void LibBridge_cSurface_RestoreDrawClip(HDC dc, HRGN old)
	{
		return This->RestoreDrawClip(dc, old);
	}
}
