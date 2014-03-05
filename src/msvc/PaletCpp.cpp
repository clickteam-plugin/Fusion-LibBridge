#include "Ccxhdr.h"

extern "C"
{
	void LibBridge_csPalette_AddRef(LPCSPALETTE csp)
	{
		return csPalette_AddRef(csp);
	}
	void LibBridge_csPalette_SubRef(LPCSPALETTE csp)
	{
		return csPalette_SubRef(csp);
	}
	HPALETTE LibBridge_csPalette_GetPaletteHandle(LPCSPALETTE csp)
	{
		return csPalette_GetPaletteHandle(csp);
	}
	int LibBridge_csPalette_InitCache(LPCSPALETTE csp)
	{
		return csPalette_InitCache(csp);
	}
	int LibBridge_csPalette_GetNearColorIndex_Fast(LPCSPALETTE csp, COLORREF color)
	{
		return csPalette_GetNearColorIndex_Fast(csp, color);
	}
}
