/* LEVEL_22:0x08F3E0 -- placement copy of LEVEL_01_0A0D68.c: advances a 32-slot ring index, runs two setup calls, and records a 64-bit delta in a table slot. */
extern int D_001F4BC4;
extern int D_00155AC0;
extern int D_00155AC4;
extern long long D_00155AD0;
extern int D_001F4A00[];
extern void func_08F340(int a);
extern void func_090FF8(int a);
extern long long func_0910B0(void);

void func_08F3E0(void)
{
    int idx;
    long long t;
    int d;

    idx = D_00155AC0;
    D_00155AC4 = idx;
    D_00155AC0 = (idx + 1) & 0x1F;
    func_08F340(D_001F4BC4);
    func_090FF8(0xDEAD);
    t = func_0910B0();
    d = (int)(t - D_00155AD0);
    D_00155AD0 = t;
    D_001F4A00[D_00155AC0] = d;
}
