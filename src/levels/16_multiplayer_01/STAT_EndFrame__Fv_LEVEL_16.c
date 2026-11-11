/* LEVEL_16:0x090030 -- placement copy of LEVEL_01_0A0D68.c: advances a 32-slot ring index, runs two setup calls, and records a 64-bit delta in a table slot. */
extern int D_00256B54;
extern int D_001A4710;
extern int D_001A4714;
extern long long D_001A4720;
extern int D_00256990[];
extern void func_08FF90(int a);
extern void func_091C48(int a);
extern long long func_091D00(void);

void STAT_EndFrame__Fv(void)
{
    int idx;
    long long t;
    int d;

    idx = D_001A4710;
    D_001A4714 = idx;
    D_001A4710 = (idx + 1) & 0x1F;
    func_08FF90(D_00256B54);
    func_091C48(0xDEAD);
    t = func_091D00();
    d = (int)(t - D_001A4720);
    D_001A4720 = t;
    D_00256990[D_001A4710] = d;
}
