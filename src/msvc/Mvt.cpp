#include "Ccxhdr.h"

extern "C"
{
	void LibBridge_CMvtPropMgr_DESTRUCTOR(CMvtPropMgr *This)
	{
		This->~CMvtPropMgr();
	}
	void LibBridge_CMvtPropMgr_AddProps(CMvtPropMgr *This, PropData *pd)
	{
		return This->AddProps(pd);
	}
	void LibBridge_CMvtPropMgr_InsertProps(CMvtPropMgr *This, PropData *pd, UINT ID, BOOL after)
	{
		return This->InsertProps(pd, ID, after);
	}
	void LibBridge_CMvtPropMgr_RemoveProp(CMvtPropMgr *This, UINT ID)
	{
		return This->RemoveProp(ID);
	}
	void LibBridge_CMvtPropMgr_RemoveProps(CMvtPropMgr *This, PropData *pd)
	{
		return This->RemoveProps(pd);
	}
	void LibBridge_CMvtPropMgr_RefreshProp(CMvtPropMgr *This, UINT ID, BOOL reinit)
	{
		return This->RefreshProp(ID, reinit);
	}
	CPropValue *LibBridge_CMvtPropMgr_GetPropValue(CMvtPropMgr *This, UINT ID)
	{
		return This->GetPropValue(ID);
	}
	void LibBridge_CMvtPropMgr_SetPropValue(CMvtPropMgr *This, UINT ID, CPropValue *v)
	{
		return This->SetPropValue(ID, v);
	}
	int LibBridge_CMvtPropMgr_GetPropCheck(CMvtPropMgr *This, UINT ID)
	{
		return This->GetPropCheck(ID);
	}
	void LibBridge_CMvtPropMgr_SetPropCheck(CMvtPropMgr *This, UINT ID, int check)
	{
		return This->SetPropCheck(ID, check);
	}
	void LibBridge_CMvtPropMgr_CONSTRUCTOR(CMvtPropMgr *This, CDynamicItem *di)
	{
		new (This) CMvtPropMgr(di);
	}
}
