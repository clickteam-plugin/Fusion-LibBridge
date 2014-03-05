#include "Ccxhdr.h"
#include "FilterMgr.h"

#include <new>

extern "C"
{
	void LibBridge_CFilterMgr_DCONSTRUCTOR(CFilterMgr *This)
	{
		new (This) CFilterMgr;
	}
	void LibBridge_CFilterMgr_DESTRUCTOR(CFilterMgr *This)
	{
		This->~CFilterMgr();
	}
	CFilterMgr *LibBridge_CFilterMgr_CreateInstance()
	{
		return CFilterMgr::CreateInstance();
	}
	void LibBridge_CFilterMgr_Initialize_1(CFilterMgr *This, LPCSTR fp, LPCSTR ft, DWORD flags)
	{
		return This->Initialize(fp, ft, flags);
	}
	void LibBridge_CFilterMgr_Free(CFilterMgr *This)
	{
		return This->Free();
	}
	void LibBridge_CFilterMgr_Delete(CFilterMgr *This)
	{
		return This->Delete();
	}
	int LibBridge_CFilterMgr_GetFilterCount(CFilterMgr *This)
	{
		return This->GetFilterCount();
	}
	LPCSTR LibBridge_CFilterMgr_GetFilterNameA(CFilterMgr *This, int index)
	{
		return This->GetFilterNameA(index);
	}
	LPCSTR LibBridge_CFilterMgr_GetFilterFileNameA(CFilterMgr *This, int index)
	{
		return This->GetFilterFileNameA(index);
	}
	DWORD LibBridge_CFilterMgr_GetFilterID(CFilterMgr *This, int index)
	{
		return This->GetFilterID(index);
	}
	int LibBridge_CFilterMgr_GetFilterIndex(CFilterMgr *This, DWORD ID)
	{
		return This->GetFilterIndex(ID);
	}
	LPCSTR *LibBridge_CFilterMgr_GetFilterExtsA(CFilterMgr *This, int index)
	{
		return This->GetFilterExtsA(index);
	}
	LPCSTR *LibBridge_CFilterMgr_GetFilterDependenciesA(CFilterMgr *This, int index)
	{
		return This->GetFilterDependenciesA(index);
	}
	BOOL LibBridge_CFilterMgr_CanReadFile(CFilterMgr *This, int index, CInputFile *f)
	{
		return This->CanReadFile(index, f);
	}
	LPVOID LibBridge_CFilterMgr_CreateFilterObject_1(CFilterMgr *This, int index)
	{
		return This->CreateFilterObject(index);
	}
	LPVOID LibBridge_CFilterMgr_CreateFilterObject_2(CFilterMgr *This, DWORD ID)
	{
		return This->CreateFilterObject(ID);
	}
	LPVOID LibBridge_CFilterMgr_CreateFilterObject_3(CFilterMgr *This, CInputFile *f)
	{
		return This->CreateFilterObject(f);
	}
	void LibBridge_CFilterMgr_RemoveFilter(CFilterMgr *This, int index)
	{
		return This->RemoveFilter(index);
	}
	void LibBridge_CFilterMgr_Initialize_2(CFilterMgr *This, LPCWSTR fp, LPCWSTR ft, DWORD flags)
	{
		return This->Initialize(fp, ft, flags);
	}
	LPCWSTR LibBridge_CFilterMgr_GetFilterNameW(CFilterMgr *This, int index)
	{
		return This->GetFilterNameW(index);
	}
	LPCWSTR LibBridge_CFilterMgr_GetFilterFileNameW(CFilterMgr *This, int index)
	{
		return This->GetFilterFileNameW(index);
	}
	LPCWSTR *LibBridge_CFilterMgr_GetFilterExtsW(CFilterMgr *This, int index)
	{
		return This->GetFilterExtsW(index);
	}
	LPCWSTR *LibBridge_CFilterMgr_GetFilterDependenciesW(CFilterMgr *This, int index)
	{
		return This->GetFilterDependenciesW(index);
	}
}
