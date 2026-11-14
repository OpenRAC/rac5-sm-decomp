/*
 * SND_InitScream__Fv
 * USA boot (SCUS_976.15), retail 0x01E90B08, body 552 bytes
 * (0x01E90B08..0x01E90D30).
 *
 * Starts the sound system: video decoder setup, sound system start, thirteen
 * sound-driver register writes, reverb and stream setup. If the stream index
 * is not loaded yet, it opens the index file, reads its first 0x800 bytes to
 * get the entry count, allocates the index (twelve bytes per entry after a
 * four-byte count, rounded up to 0x800) and reads it; the buffer pointer is
 * stored even when the allocation fails, the entry pointer and count only
 * when it succeeds. It then allocates the IOP buffer if there is none and
 * selects playback mode 0.
 *
 * Exact but unaccepted witness. Profile: default chain (cpp, cc1 -quiet -O2
 * -G0, as) rebuilt by tools/compiler/build_gnu_ee.sh; those binaries are not
 * hash-identical to the pins. Measured 14 November 2026: the compiled .text
 * is 552 bytes and equals the retail body with its relocations resolved, and
 * a complete boot gate run with --unpinned-tools passes with this body linked
 * as a provisional replacement (qualifying_tools false).
 *
 * Open points for review:
 * - The next-label interval is 560 bytes. The word after this body is not
 *   zero padding: it is a stack adjustment that follows the return and that
 *   no path reaches. It is left to the assembly baseline and is not explained.
 * - The two calls whose results are ignored, snd_InitVAGStreamingEx and
 *   HIT_fseek__FPii9SEEKPARAM, are declared here as returning int. With void
 *   declarations the body is 543 of 552 bytes: the compiler then picks the
 *   other temporary register for the values computed right after each call.
 *   src/boot/HIT_fseek__FPii9SEEKPARAM.c is accepted as void; written as
 *   returning the result of higIoLseek__Fiii it compiles to the same assembly
 *   with the default, gnu-ee-trial and sdk991111 compilers, so its own bytes
 *   do not decide. This file does not change that accepted source.
 * - The meaning of the seek mode value 2, the buffer element type and the
 *   variadic prototype of sceSdRemote are read from this body only.
 */
extern char D_01F1FFB0[];
extern char D_01F1FFC8[];
extern char *g_VagWadBuffer;
extern char *g_VagWadEntries;
extern int g_VagWadEntryCount;
extern void *g_IOP_Buffer;

extern void VID_InitBink__Fv(void);
extern void snd_StartSoundSystemEx(int mode);
extern int sceSdRemote(int cmd, ...);
extern void snd_PreAllocReverbWorkArea(int a, int b);
extern int snd_InitVAGStreamingEx(int a, int b, int c, int d);
extern int HIT_fopen_internal__FPCcT0(const char *name, const char *mode);
extern int HIT_fread__FPvUiUiPi(void *buf, unsigned int size, unsigned int count, int handle);
extern int HIT_fseek__FPii9SEEKPARAM(int handle, int offset, int mode);
extern void HIT_fclose__FPi(int handle);
extern void *PS2HEAP_Malloc__FUi(unsigned int size);
extern void *sceSifAllocIopHeap(int size);
extern void snd_SetPlaybackMode(int mode);

void SND_InitScream__Fv(void) {
    int buf[0x200];
    int handle;
    unsigned int size;

    VID_InitBink__Fv();
    snd_StartSoundSystemEx(6);
    sceSdRemote(1, 0x8020, 0x800);
    sceSdRemote(1, 0x8020, 0x801);
    sceSdRemote(1, 0x8010, 0x980, 0x3FFF);
    sceSdRemote(1, 0x8010, 0xA80, 0x3FFF);
    sceSdRemote(1, 0x8010, 0xB80, 0);
    sceSdRemote(1, 0x8010, 0xC80, 0);
    sceSdRemote(1, 0x8010, 0xB81, 0);
    sceSdRemote(1, 0x8010, 0xC81, 0);
    sceSdRemote(1, 0x8010, 0xD81, 0x7FFF);
    sceSdRemote(1, 0x8010, 0xE81, 0x7FFF);
    sceSdRemote(1, 0x8070, 0xA, 0x80);
    sceSdRemote(1, 0x8070, 2, 0);
    sceSdRemote(1, 0x8070, 3, 0);
    snd_PreAllocReverbWorkArea(3, 0);
    snd_InitVAGStreamingEx(4, 0xA000, 0, 0);
    if (!g_VagWadBuffer) {
        handle = HIT_fopen_internal__FPCcT0(D_01F1FFB0, D_01F1FFC8);
        if (handle) {
            HIT_fread__FPvUiUiPi(buf, 1, 0x800, handle);
            HIT_fseek__FPii9SEEKPARAM(handle, 0, 2);
            size = (buf[0] * 12 + 0x803) & -0x800;
            g_VagWadBuffer = PS2HEAP_Malloc__FUi(size);
            if (g_VagWadBuffer) {
                HIT_fread__FPvUiUiPi(g_VagWadBuffer, 1, size, handle);
                g_VagWadEntries = g_VagWadBuffer + 4;
                g_VagWadEntryCount = buf[0];
            }
            HIT_fclose__FPi(handle);
        }
    }
    if (!g_IOP_Buffer) {
        g_IOP_Buffer = sceSifAllocIopHeap(0xD4800);
    }
    snd_SetPlaybackMode(0);
}
