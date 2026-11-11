/* LEVEL_04:0x0BE920 -- placement copy of LEVEL_01_0B9140.c: runs the shared reset with 3, then marks slot i active and clears its seven per-slot state entries. */
extern unsigned char D_00215E98[];
extern unsigned char D_00215C70[];
extern unsigned char D_00215EA0[];
extern int D_00215CE8[];
extern int D_00215C68[];
extern unsigned char D_00342F48[];
extern int D_00215C78[];
extern void func_0BE900(void *value);

void func_0BE920(int i)
{
    func_0BE900((void *)3);
    D_00215C70[i] = 0;
    D_00215E98[i] = 1;
    D_00215EA0[i] = 0;
    D_00215CE8[i] = 0;
    D_00215C68[i] = 0;
    D_00342F48[i * 0x100] = 0;
    D_00215C78[i] = 0;
}
