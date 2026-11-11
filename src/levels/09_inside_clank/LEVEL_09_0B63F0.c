/* LEVEL_09:0x0B63F0 -- placement copy of LEVEL_01_0B9140.c: runs the shared reset with 3, then marks slot i active and clears its seven per-slot state entries. */
extern unsigned char D_001E67D8[];
extern unsigned char D_001E65B0[];
extern unsigned char D_001E67E0[];
extern int D_001E6628[];
extern int D_001E65A8[];
extern unsigned char D_0030FEC8[];
extern int D_001E65B8[];
extern void func_0B63D0(void *value);

void func_0B63F0(int i)
{
    func_0B63D0((void *)3);
    D_001E65B0[i] = 0;
    D_001E67D8[i] = 1;
    D_001E67E0[i] = 0;
    D_001E6628[i] = 0;
    D_001E65A8[i] = 0;
    D_0030FEC8[i * 0x100] = 0;
    D_001E65B8[i] = 0;
}
