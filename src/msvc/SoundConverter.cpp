#include "Ccxhdr.h"

extern "C"
{
	SAMPLECONVERTPROC LibBridge_GetConversionFunction(LPWAVEFORMATEX src, LPWAVEFORMATEX dest)
	{
		return GetConversionFunction(src, dest);
	}
}
