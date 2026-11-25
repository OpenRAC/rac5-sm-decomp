/* LEVEL_01:0x026FE0 -- 16-byte-granular copy helper: memcpy(dst, src, n << 4). Ported from OpenRAC/rac5-sm-decomp src/boot/FastMemCopy__FPvPCvUi.c (FastMemCopy__FPvPCvUi). */
extern void *memcpy(void *dst, const void *src, unsigned int n);

void FastMemCopy__FPvPCvUi(void *dst, const void *src, unsigned int n)
{
    memcpy(dst, src, n << 4);
}
