#include "Ccxhdr.h"

extern "C"
{
	void LibBridge_CInputFile_DESTRUCTOR(CInputFile *This)
	{
		This->~CInputFile();
	}
	void LibBridge_CInputFile_Delete(CInputFile *This)
	{
		return This->Delete();
	}
	int LibBridge_CInputFile_Read_1(CInputFile *This, LPBYTE d, DWORD s)
	{
		return This->Read(d, s);
	}
	int LibBridge_CInputFile_Read_2(CInputFile *This, LPBYTE d, DWORD s, LPDWORD real)
	{
		This->Read(d, s, real);
	}
	int LibBridge_CInputFile_ReadByte(CInputFile *This, LPBYTE d)
	{
		return This->ReadByte(d);
	}
	int LibBridge_CInputFile_ReadIntelWord(CInputFile *This, LPWORD d)
	{
		return This->ReadIntelWord(d);
	}
	int LibBridge_CInputFile_ReadIntelDWord(CInputFile *This, LPDWORD d)
	{
		return This->ReadIntelDWord(d);
	}
	int LibBridge_CInputFile_ReadMacWord(CInputFile *This, LPWORD d)
	{
		return This->ReadMacWord(d);
	}
	int LibBridge_CInputFile_ReadMacDWord(CInputFile *This, LPDWORD d)
	{
		return This->ReadMacDWord(d);
	}
	int LibBridge_CInputFile_ReadIntelFloat(CInputFile *This, PFLOAT d)
	{
		return This->ReadIntelFloat(d);
	}
	int LibBridge_CInputFile_ReadMacFloat(CInputFile *This, PFLOAT d)
	{
		return This->ReadMacFloat(d);
	}
	int LibBridge_CInputFile_ReadIntelWordArray(CInputFile *This, LPWORD d, int c)
	{
		return This->ReadIntelWordArray(d, c);
	}
	int LibBridge_CInputFile_ReadIntelDWordArray(CInputFile *This, LPDWORD d, int c)
	{
		return This->ReadIntelDWordArray(d, c);
	}
	int LibBridge_CInputFile_ReadIntelFloatArray(CInputFile *This, PFLOAT d, int c)
	{
		return This->ReadIntelFloatArray(d, c);
	}
	int LibBridge_CInputFile_ReadMacWordArray(CInputFile *This, LPWORD d, int c)
	{
		return This->ReadMacWordArray(d, c);
	}
	int LibBridge_CInputFile_ReadMacDWordArray(CInputFile *This, LPDWORD d, int c)
	{
		return This->ReadMacDWordArray(d, c);
	}
	int LibBridge_CInputFile_ReadMacFloatArray(CInputFile *This, PFLOAT d, int c)
	{
		return This->ReadMacFloatArray(d, c);
	}
	long LibBridge_CInputFile_GetPosition(CInputFile *This)
	{
		return This->GetPosition();
	}
	long LibBridge_CInputFile_GetLength(CInputFile *This)
	{
		return This->GetLength();
	}
	long LibBridge_CInputFile_Seek(CInputFile *This, long pos, int method)
	{
		return This->Seek(pos, method);
	}
	int LibBridge_CInputFile_Attach(CInputFile *This, HANDLE h)
	{
		return This->Attach(h);
	}
	HANDLE LibBridge_CInputFile_Detach(CInputFile *This)
	{
		return This->Detach();
	}
	LPBYTE LibBridge_CInputFile_GetBuffer(CInputFile *This, UINT size)
	{
		return This->GetBuffer(size);
	}
	void LibBridge_CInputFile_FreeBuffer(CInputFile *This, LPBYTE buffer)
	{
		return This->FreeBuffer(buffer);
	}
	LPSTR LibBridge_CInputFile_GetFileNameA(CInputFile *This)
	{
		return This->GetFileNameA();
	}
	LPWSTR LibBridge_CInputFile_GetFileNameW(CInputFile *This)
	{
		return This->GetFileNameW();
	}
	void LibBridge_CInputBufFile_DCONSTRUCTOR(CInputBufFile *This)
	{
		new (This) CInputBufFile;
	}
	CInputBufFile *LibBridge_CInputBufFile_NewInstance()
	{
		return CInputBufFile::NewInstance();
	}
	int LibBridge_CInputBufFile_Create_1(CInputBufFile *This, HFILE f)
	{
		return This->Create(f);
	}
	int LibBridge_CInputBufFile_Create_2(CInputBufFile *This, HFILE f, DWORD o, DWORD s)
	{
		return This->Create(f, o, s);
	}
	int LibBridge_CInputBufFile_Create_3(CInputBufFile *This, LPCSTR fname)
	{
		return This->Create(fname);
	}
	int LibBridge_CInputBufFile_Create_4(CInputBufFile *This, LPCSTR fname, DWORD o, DWORD s)
	{
		return This->Create(fname, o, s);
	}
	int LibBridge_CInputBufFile_Create_5(CInputBufFile *This, LPCWSTR fname)
	{
		return This->Create(fname);
	}
	int LibBridge_CInputBufFile_Create_6(CInputBufFile *This, LPCWSTR fname, DWORD o, DWORD s)
	{
		return This->Create(fname, o, s);
	}
	void LibBridge_CInputMemFile_DCONSTRUCTOR(CInputMemFile *This)
	{
		new (This) CInputMemFile;
	}
	CInputMemFile *LibBridge_CInputMemFile_NewInstance()
	{
		return CInputMemFile::NewInstance();
	}
	int LibBridge_CInputMemFile_Create_1(CInputMemFile *This, LPBYTE buffer, DWORD s)
	{
		return This->Create(buffer, s);
	}
	int LibBridge_CInputMemFile_Create_2(CInputMemFile *This, DWORD s)
	{
		return This->Create(s);
	}
	LPBYTE LibBridge_CInputMemFile_GetMemBuffer(CInputMemFile *This)
	{
		return This->GetMemBuffer();
	}
	void LibBridge_COutputFile_DESTRUCTOR(COutputFile *This)
	{
		This->~COutputFile();
	}
	int LibBridge_COutputFile_WriteIntelWord(COutputFile *This, LPWORD w)
	{
		return This->WriteIntelWord(w);
	}
	int LibBridge_COutputFile_WriteIntelDWord(COutputFile *This, LPDWORD w)
	{
		return This->WriteIntelDWord(w);
	}
	int LibBridge_COutputFile_WriteIntelFloat(COutputFile *This, PFLOAT f)
	{
		return This->WriteIntelFloat(f);
	}
	int LibBridge_COutputFile_WriteMacWord(COutputFile *This, LPWORD w)
	{
		return This->WriteMacWord(w);
	}
	int LibBridge_COutputFile_WriteMacDWord(COutputFile *This, LPDWORD w)
	{
		return This->WriteMacDWord(w);
	}
	int LibBridge_COutputFile_Write(COutputFile *This, LPBYTE b, UINT s)
	{
		return This->Write(b, s);
	}
	int LibBridge_COutputFile_Flush(COutputFile *This)
	{
		return This->Flush();
	}
	DWORD LibBridge_COutputFile_GetLength(COutputFile *This)
	{
		return This->GetLength();
	}
	long LibBridge_COutputFile_GetPosition(COutputFile *This)
	{
		return This->GetPosition();
	}
	long LibBridge_COutputFile_Seek(COutputFile *This, long pos, int method)
	{
		return This->Seek(pos, method);
	}
	LPSTR LibBridge_COutputFile_GetFileNameA(COutputFile *This)
	{
		return This->GetFileNameA();
	}
	LPWSTR LibBridge_COutputFile_GetFileNameW(COutputFile *This)
	{
		return This->GetFileNameW();
	}
	void LibBridge_COutputMemFile_DCONSTRUCTOR(COuputMemFile *This)
	{
		new (This) COutputMemFile;
	}
	int LibBridge_COutputMemFile_Create_1(COutputMemFile *This, UINT s)
	{
		return This->Create(s);
	}
	int LibBridge_COutputMemFile_Create_2(COutputMemFile *This, LPBYTE buffer, DWORD s)
	{
		return This->Create(buffer, s);
	}
	LPBYTE LibBridge_COutputMemFile_GetBuffer(COutputMemFile *This)
	{
		return This->GetBuffer();
	}
	LPBYTE LibBridge_COutputMemFile_DetachBuffer(COutputMemFile *This)
	{
		return This->DetachBuffer();
	}
	void LibBridge_COutputMemFile_FreeBuffer(LPBYTE buffer)
	{
		return COutputMemFile::FreeBuffer(buffer);
	}
	void LibBridge_COutputBufFile_DCONSTRUCTOR(COutputBufFile *This)
	{
		new (This) COutputBufFile;
	}
	int LibBridge_COutputBufFile_Create_1(COutputBufFile *This, HFILE f, UINT s)
	{
		return This->Create(f, s);
	}
	int LibBridge_COutputBufFile_Create_2(COutputBufFile *This, LPCSTR fname, UINT s)
	{
		return This->Create(fname, s);
	}
	int LibBridge_COutputBufFile_Create_3(COutputBufFile *This, LPCWSTR fname, UINT s)
	{
		return This->Create(fname, s);
	}
}
