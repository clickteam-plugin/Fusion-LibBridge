#include "Ccxhdr.h"
#include "SoundFilterMgr.h"

#include <new>

extern "C"
{
	void LibBridge_CSoundFilterMgr_DCONSTRUCTOR(CSoundFilterMgr *This)
	{
		new (This) CSoundFilterMgr;
	}
	CSoundFilterMgr *LibBridge_CSoundFilterMgr_CreateInstance()
	{
		return CSoundFilterMgr::CreateInstance();
	}
	void LibBridge_CSoundFilterMgr_Initialize_1(CSoundFilterMgr *This, LPCSTR filterpath, DWORD flags)
	{
		return This->Initialize(filterpath, flags);
	}
	void LibBridge_CSoundFilterMgr_Initialize_2(CSoundFilterMgr *This, LPCWSTR filterpath, DWORD flags)
	{
		return This->Initialize(filterpath, flags);
	}
	CSoundManager *LibBridge_CSoundFilterMgr_CreateSoundManager(CSoundFilterMgr *This, HWND w)
	{
		return This->CreateSoundManager(w);
	}
	CSoundFilter *LibBridge_CSoundFilterMgr_CreateFilter(CSoundFilterMgr *This, CInputFile *f)
	{
		return This->CreateFilter(f);
	}
}
