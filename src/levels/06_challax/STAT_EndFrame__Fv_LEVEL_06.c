/* LEVEL_06:0x09B538 -- placement copy of LEVEL_01_0A0D68.c: advances a 32-slot ring index, runs two setup calls, and records a 64-bit delta in a table slot. */
extern int D_0028BD84;
extern int D_001E5640;
extern int D_001E5644;
extern long long D_001E5650;
extern int D_0028BBC0[];
extern void func_09B498(int a);
extern void func_09D1B8(int a);
extern long long func_09D270(void);

void STAT_EndFrame__Fv(void)
{
    int idx;
    long long t;
    int d;

    idx = D_001E5640;
    D_001E5644 = idx;
    D_001E5640 = (idx + 1) & 0x1F;
    func_09B498(D_0028BD84);
    func_09D1B8(0xDEAD);
    t = func_09D270();
    d = (int)(t - D_001E5650);
    D_001E5650 = t;
    D_0028BBC0[D_001E5640] = d;
}
