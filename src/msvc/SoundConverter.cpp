#include "Ccxhdr.h"
#include "SoundConverter.h"

#include <new>

extern "C"
{
	SAMPLECONVERTPROC LibBridge_GetConversionFunction(LPWAVEFORMATEX src, LPWAVEFORMATEX dest)
	{
		return GetConversionFunction(src, dest);
	}
}
