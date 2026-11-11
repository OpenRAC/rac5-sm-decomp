/* LEVEL_10:0x0BA488 -- placement copy of LEVEL_01_0B9140.c: runs the shared reset with 3, then marks slot i active and clears its seven per-slot state entries. */
extern unsigned char D_002059D8[];
extern unsigned char D_002057B0[];
extern unsigned char D_002059E0[];
extern int D_00205828[];
extern int D_002057A8[];
extern unsigned char D_00331B48[];
extern int D_002057B8[];
extern void func_0BA468(void *value);

void func_0BA488(int i)
{
    func_0BA468((void *)3);
    D_002057B0[i] = 0;
    D_002059D8[i] = 1;
    D_002059E0[i] = 0;
    D_00205828[i] = 0;
    D_002057A8[i] = 0;
    D_00331B48[i * 0x100] = 0;
    D_002057B8[i] = 0;
}
