Fusion-LibBridge
==============
Currently, MMF2.0 & CTF2.5 Extension SDKs can only be built with MSVC. Work is under way to support building extensions with MinGW, however one major barrier is that in order to use some SDK functions, your MFX must link to the mmfs2 libraries, which use the mmfs2 DLL file provided with Fusion.

The only library files provided to link to mmfs2 are only compatible with MSVC, so MinGW cannot link to them. However, Fusion-LibBridge solves this problem - we use MSVC to compile a DLL which exports functions that just directly call the mmfs2 functions. Since the DLL is built with MSVC, it can link to the mmfs2 libraries. Then, we use MinGW to create a static library implementing mmfs2, which loads the DLL and directly calls the DLL functions. In this way, we have effectively 'bridged' the gap between MSVC and MinGW.

mmfs2 (DLL) <-- mmfs2 (lib) <-- Fusion-LibBridge (DLL) <-- Fusion-LibBridge (lib) <-- Extension

The only downside is that any MinGW extensions built this way require the Fusion-LibBridge DLL as a dependency. Each version of the Fusion-LibBridge DLL includes the version number in the file name, so that different MinGW extensions can use their own correct version.
