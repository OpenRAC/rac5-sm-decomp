/* LEVEL_04:0x0A5F78 -- placement copy of LEVEL_01_0A0D68.c: advances a 32-slot ring index, runs two setup calls, and records a 64-bit delta in a table slot. */
extern int D_002B9804;
extern int D_0020FC00;
extern int D_0020FC04;
extern long long D_0020FC10;
extern int D_002B9640[];
extern void func_0A5ED8(int a);
extern void func_0A7BF8(int a);
extern long long func_0A7CB0(void);

void func_0A5F78(void)
{
    int idx;
    long long t;
    int d;

    idx = D_0020FC00;
    D_0020FC04 = idx;
    D_0020FC00 = (idx + 1) & 0x1F;
    func_0A5ED8(D_002B9804);
    func_0A7BF8(0xDEAD);
    t = func_0A7CB0();
    d = (int)(t - D_0020FC10);
    D_0020FC10 = t;
    D_002B9640[D_0020FC00] = d;
}
