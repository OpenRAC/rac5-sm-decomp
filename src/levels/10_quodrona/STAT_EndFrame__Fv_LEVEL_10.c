/* LEVEL_10:0x0A1E80 -- placement copy of LEVEL_01_0A0D68.c: advances a 32-slot ring index, runs two setup calls, and records a 64-bit delta in a table slot. */
extern int D_002A8404;
extern int D_001FF740;
extern int D_001FF744;
extern long long D_001FF750;
extern int D_002A8240[];
extern void func_0A1DE0(int a);
extern void func_0A3B00(int a);
extern long long func_0A3BB8(void);

void STAT_EndFrame__Fv(void)
{
    int idx;
    long long t;
    int d;

    idx = D_001FF740;
    D_001FF744 = idx;
    D_001FF740 = (idx + 1) & 0x1F;
    func_0A1DE0(D_002A8404);
    func_0A3B00(0xDEAD);
    t = func_0A3BB8();
    d = (int)(t - D_001FF750);
    D_001FF750 = t;
    D_002A8240[D_001FF740] = d;
}
