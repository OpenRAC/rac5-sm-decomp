/* LEVEL_23:0x097AA8 -- placement copy of LEVEL_01_0A0D68.c: advances a 32-slot ring index, runs two setup calls, and records a 64-bit delta in a table slot. */
extern int D_00270444;
extern int D_001C9B40;
extern int D_001C9B44;
extern long long D_001C9B50;
extern int D_00270280[];
extern void func_097A08(int a);
extern void func_099728(int a);
extern long long func_0997E0(void);

void STAT_EndFrame__Fv(void)
{
    int idx;
    long long t;
    int d;

    idx = D_001C9B40;
    D_001C9B44 = idx;
    D_001C9B40 = (idx + 1) & 0x1F;
    func_097A08(D_00270444);
    func_099728(0xDEAD);
    t = func_0997E0();
    d = (int)(t - D_001C9B50);
    D_001C9B50 = t;
    D_00270280[D_001C9B40] = d;
}
