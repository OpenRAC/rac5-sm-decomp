/* LEVEL_24:0x0B29D0 -- placement copy of LEVEL_01_0B9140.c: runs the shared reset with 3, then marks slot i active and clears its seven per-slot state entries. */
extern unsigned char D_001CD658[];
extern unsigned char D_001CD430[];
extern unsigned char D_001CD660[];
extern int D_001CD4A8[];
extern int D_001CD428[];
extern unsigned char D_002F4608[];
extern int D_001CD438[];
extern void func_0B29B0(void *value);

void func_0B29D0(int i)
{
    func_0B29B0((void *)3);
    D_001CD430[i] = 0;
    D_001CD658[i] = 1;
    D_001CD660[i] = 0;
    D_001CD4A8[i] = 0;
    D_001CD428[i] = 0;
    D_002F4608[i * 0x100] = 0;
    D_001CD438[i] = 0;
}
