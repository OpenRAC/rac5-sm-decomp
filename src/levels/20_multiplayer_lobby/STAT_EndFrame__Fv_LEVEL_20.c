/* LEVEL_20:0x07A728 -- placement copy of LEVEL_01_0A0D68.c: advances a 32-slot ring index, runs two setup calls, and records a 64-bit delta in a table slot. */
extern int D_0017A394;
extern int D_00106DF0;
extern int D_00106DF4;
extern long long D_00106E00;
extern int D_0017A1D0[];
extern void func_07A688(int a);
extern void func_07C340(int a);
extern long long func_07C3F8(void);

void STAT_EndFrame__Fv(void)
{
    int idx;
    long long t;
    int d;

    idx = D_00106DF0;
    D_00106DF4 = idx;
    D_00106DF0 = (idx + 1) & 0x1F;
    func_07A688(D_0017A394);
    func_07C340(0xDEAD);
    t = func_07C3F8();
    d = (int)(t - D_00106E00);
    D_00106E00 = t;
    D_0017A1D0[D_00106DF0] = d;
}
