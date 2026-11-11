/* LEVEL_03:0x0A0AE8 -- placement copy of LEVEL_01_0A0D68.c: advances a 32-slot ring index, runs two setup calls, and records a 64-bit delta in a table slot. */
extern int D_002B9E84;
extern int D_0020EDC0;
extern int D_0020EDC4;
extern long long D_0020EDD0;
extern int D_002B9CC0[];
extern void func_0A0A48(int a);
extern void func_0A2768(int a);
extern long long func_0A2820(void);

void func_0A0AE8(void)
{
    int idx;
    long long t;
    int d;

    idx = D_0020EDC0;
    D_0020EDC4 = idx;
    D_0020EDC0 = (idx + 1) & 0x1F;
    func_0A0A48(D_002B9E84);
    func_0A2768(0xDEAD);
    t = func_0A2820();
    d = (int)(t - D_0020EDD0);
    D_0020EDD0 = t;
    D_002B9CC0[D_0020EDC0] = d;
}
