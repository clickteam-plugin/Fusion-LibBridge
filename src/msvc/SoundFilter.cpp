#include "Ccxhdr.h"

extern "C"
{
	DWORD LibBridge_GetRecommendedBufferSize(LPWAVEFORMATEX wf)
	{
		return GetRecommendedBufferSize(wf);
	}
	void LibBridge_CSoundFilter_DCONSTRUCTOR(CSoundFilter *This)
	{
		new (This) CSoundFilter;
	}
	void LibBridge_CSoundFilter_DESTRUCTOR(CSoundFilter *This)
	{
		This->~CSoundFilter();
	}
	void LibBridge_CSoundFilter_Delete(CSoundFilter *This)
	{
		return This->Delete();
	}
	int LibBridge_CSoundFilter_Open(CSoundFilter *This, CInputFile *f)
	{
		return This->Open(f);
	}
	void LibBridge_CSoundFilter_Close(CSoundFilter *This)
	{
		return This->Close();
	}
	DWORD LibBridge_CSoundFilter_GetLength(CSoundFilter *This)
	{
		return This->GetLength();
	}
	DWORD LibBridge_CSoundFilter_GetPos(CSoundFilter *This)
	{
		return This->GetPos();
	}
	BOOL LibBridge_CSoundFilter_SetPos(CSoundFilter *This, DWORD pos)
	{
		return This->SetPos(pos);
	}
	int LibBridge_CSoundFilter_ReadData(CSoundFilter *This, LPBYTE buf, DWORD size, LPDWORD read)
	{
		return This->ReadData(buf, size, read);
	}
	void LibBridge_CSoundFilter_SetOutputFormat(CSoundFilter *This, PWAVEFORMATEX f)
	{
		return This->SetOutputFormat(f);
	}
	int LibBridge_CSoundFilter_Read(CSoundFilter *This, LPBYTE buf, DWORD size, LPDWORD read)
	{
		return This->Read(buf, size, read);
	}
}
