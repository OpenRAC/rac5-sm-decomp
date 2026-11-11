/* LEVEL_02:0x0A7678 -- placement copy of LEVEL_01_0A0D68.c: advances a 32-slot ring index, runs two setup calls, and records a 64-bit delta in a table slot. */
extern int D_002B6504;
extern int D_0020B700;
extern int D_0020B704;
extern long long D_0020B710;
extern int D_002B6340[];
extern void func_0A75D8(int a);
extern void func_0A92F8(int a);
extern long long func_0A93B0(void);

void STAT_EndFrame__Fv(void)
{
    int idx;
    long long t;
    int d;

    idx = D_0020B700;
    D_0020B704 = idx;
    D_0020B700 = (idx + 1) & 0x1F;
    func_0A75D8(D_002B6504);
    func_0A92F8(0xDEAD);
    t = func_0A93B0();
    d = (int)(t - D_0020B710);
    D_0020B710 = t;
    D_002B6340[D_0020B700] = d;
}
