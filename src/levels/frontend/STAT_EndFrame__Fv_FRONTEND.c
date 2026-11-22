/* FRONTEND:0x006558 -- placement copy of LEVEL_01_0A0D68.c: advances a 32-slot ring index, runs two setup calls, and records a 64-bit delta in a table slot. */
extern int D_0010EC84;
extern int D_0002B020;
extern int D_0002B024;
extern long long D_0002B030;
extern int D_0010EAC0[];
extern void func_0064B8(int a);
extern void func_007A00(int a);
extern long long func_007A58(void);

void STAT_EndFrame__Fv(void)
{
    int idx;
    long long t;
    int d;

    idx = D_0002B020;
    D_0002B024 = idx;
    D_0002B020 = (idx + 1) & 0x1F;
    func_0064B8(D_0010EC84);
    func_007A00(0xDEAD);
    t = func_007A58();
    d = (int)(t - D_0002B030);
    D_0002B030 = t;
    D_0010EAC0[D_0002B020] = d;
}
