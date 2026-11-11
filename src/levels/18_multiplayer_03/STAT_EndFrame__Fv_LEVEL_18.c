/* LEVEL_18:0x08F040 -- placement copy of LEVEL_01_0A0D68.c: advances a 32-slot ring index, runs two setup calls, and records a 64-bit delta in a table slot. */
extern int D_00256ED4;
extern int D_001A5B90;
extern int D_001A5B94;
extern long long D_001A5BA0;
extern int D_00256D10[];
extern void func_08EFA0(int a);
extern void func_090C58(int a);
extern long long func_090D10(void);

void STAT_EndFrame__Fv(void)
{
    int idx;
    long long t;
    int d;

    idx = D_001A5B90;
    D_001A5B94 = idx;
    D_001A5B90 = (idx + 1) & 0x1F;
    func_08EFA0(D_00256ED4);
    func_090C58(0xDEAD);
    t = func_090D10();
    d = (int)(t - D_001A5BA0);
    D_001A5BA0 = t;
    D_00256D10[D_001A5B90] = d;
}
