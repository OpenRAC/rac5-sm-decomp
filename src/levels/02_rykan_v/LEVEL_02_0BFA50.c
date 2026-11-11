/* LEVEL_02:0x0BFA50 -- placement copy of LEVEL_01_0B9140.c: runs the shared reset with 3, then marks slot i active and clears its seven per-slot state entries. */
extern unsigned char D_00211998[];
extern unsigned char D_00211770[];
extern unsigned char D_002119A0[];
extern int D_002117E8[];
extern int D_00211768[];
extern unsigned char D_0033FC48[];
extern int D_00211778[];
extern void func_0BFA30(void *value);

void func_0BFA50(int i)
{
    func_0BFA30((void *)3);
    D_00211770[i] = 0;
    D_00211998[i] = 1;
    D_002119A0[i] = 0;
    D_002117E8[i] = 0;
    D_00211768[i] = 0;
    D_0033FC48[i * 0x100] = 0;
    D_00211778[i] = 0;
}
