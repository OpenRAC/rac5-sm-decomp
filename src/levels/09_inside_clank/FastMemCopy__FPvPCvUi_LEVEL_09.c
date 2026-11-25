/* LEVEL_09:0x025FE8 -- placement copy of LEVEL_01_026FE0.c: placement copy of LEVEL_01 FastMemCopy__FPvPCvUi.c: 16-byte-granular copy helper memcpy(dst, src, count << 4). */
extern void *memcpy(void *dst, const void *src, unsigned int n);

void FastMemCopy__FPvPCvUi(void *dst, const void *src, unsigned int count)
{
    memcpy(dst, src, count << 4);
}
