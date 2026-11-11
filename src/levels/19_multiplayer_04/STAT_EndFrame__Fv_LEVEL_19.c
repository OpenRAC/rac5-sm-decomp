/* LEVEL_19:0x08F8C0 -- placement copy of LEVEL_01_0A0D68.c: advances a 32-slot ring index, runs two setup calls, and records a 64-bit delta in a table slot. */
extern int D_00256CD4;
extern int D_001A5890;
extern int D_001A5894;
extern long long D_001A58A0;
extern int D_00256B10[];
extern void func_08F820(int a);
extern void func_0914D8(int a);
extern long long func_091590(void);

void STAT_EndFrame__Fv(void)
{
    int idx;
    long long t;
    int d;

    idx = D_001A5890;
    D_001A5894 = idx;
    D_001A5890 = (idx + 1) & 0x1F;
    func_08F820(D_00256CD4);
    func_0914D8(0xDEAD);
    t = func_091590();
    d = (int)(t - D_001A58A0);
    D_001A58A0 = t;
    D_00256B10[D_001A5890] = d;
}
