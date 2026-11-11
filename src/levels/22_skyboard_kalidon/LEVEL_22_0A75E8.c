/* LEVEL_22:0x0A75E8 -- placement copy of LEVEL_01_0B9140.c: runs the shared reset with 3, then marks slot i active and clears its seven per-slot state entries. */
extern unsigned char D_0015BD58[];
extern unsigned char D_0015BB30[];
extern unsigned char D_0015BD60[];
extern int D_0015BBA8[];
extern int D_0015BB28[];
extern unsigned char D_0027E308[];
extern int D_0015BB38[];
extern void func_0A75C8(void *value);

void func_0A75E8(int i)
{
    func_0A75C8((void *)3);
    D_0015BB30[i] = 0;
    D_0015BD58[i] = 1;
    D_0015BD60[i] = 0;
    D_0015BBA8[i] = 0;
    D_0015BB28[i] = 0;
    D_0027E308[i * 0x100] = 0;
    D_0015BB38[i] = 0;
}
