/* LEVEL_09:0x09E018 -- placement copy of LEVEL_01_0A0D68.c: advances a 32-slot ring index, runs two setup calls, and records a 64-bit delta in a table slot. */
extern int D_00286784;
extern int D_001E0540;
extern int D_001E0544;
extern long long D_001E0550;
extern int D_002865C0[];
extern void func_09DF78(int a);
extern void func_09FC98(int a);
extern long long func_09FD50(void);

void STAT_EndFrame__Fv(void)
{
    int idx;
    long long t;
    int d;

    idx = D_001E0540;
    D_001E0544 = idx;
    D_001E0540 = (idx + 1) & 0x1F;
    func_09DF78(D_00286784);
    func_09FC98(0xDEAD);
    t = func_09FD50();
    d = (int)(t - D_001E0550);
    D_001E0550 = t;
    D_002865C0[D_001E0540] = d;
}
