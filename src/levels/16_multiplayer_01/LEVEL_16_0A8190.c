/* LEVEL_16:0x0A8190 -- placement copy of LEVEL_01_0B9140.c: runs the shared reset with 3, then marks slot i active and clears its seven per-slot state entries. */
extern unsigned char D_001AAA58[];
extern unsigned char D_001AA830[];
extern unsigned char D_001AAA60[];
extern int D_001AA8A8[];
extern int D_001AA828[];
extern unsigned char D_00276688[];
extern int D_001AA838[];
extern void func_0A8170(void *value);

void func_0A8190(int i)
{
    func_0A8170((void *)3);
    D_001AA830[i] = 0;
    D_001AAA58[i] = 1;
    D_001AAA60[i] = 0;
    D_001AA8A8[i] = 0;
    D_001AA828[i] = 0;
    D_00276688[i * 0x100] = 0;
    D_001AA838[i] = 0;
}
