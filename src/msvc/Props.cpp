#include "Ccxhdr.h"
#include "Props.h"

#include <new>

extern "C"
{
	void LibBridge_CPropValue_Delete(CPropValue *This)
	{
		return This->Delete();
	}
	CPropValue *LibBridge_CPropValue_CreateCopy(CPropValue *This)
	{
		return This->CreateCopy();
	}
	BOOL LibBridge_CPropValue_IsEqual(CPropValue *This, CPropValue *other)
	{
		return This->IsEqual(other);
	}
	DWORD LibBridge_CPropValue_GetClassID(CPropValue *This)
	{
		return This->GetClassID();
	}
}
