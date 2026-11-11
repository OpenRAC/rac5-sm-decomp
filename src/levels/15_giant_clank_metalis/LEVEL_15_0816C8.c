/* LEVEL_15:0x0816C8 -- placement copy of LEVEL_01_0A0D68.c: advances a 32-slot ring index, runs two setup calls, and records a 64-bit delta in a table slot. */
extern int D_001B7044;
extern int D_0014B3C0;
extern int D_0014B3C4;
extern long long D_0014B3D0;
extern int D_001B6E80[];
extern void func_081628(int a);
extern void func_0832E0(int a);
extern long long func_083398(void);

void func_0816C8(void)
{
    int idx;
    long long t;
    int d;

    idx = D_0014B3C0;
    D_0014B3C4 = idx;
    D_0014B3C0 = (idx + 1) & 0x1F;
    func_081628(D_001B7044);
    func_0832E0(0xDEAD);
    t = func_083398();
    d = (int)(t - D_0014B3D0);
    D_0014B3D0 = t;
    D_001B6E80[D_0014B3C0] = d;
}
