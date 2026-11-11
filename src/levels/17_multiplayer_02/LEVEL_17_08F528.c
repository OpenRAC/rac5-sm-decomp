/* LEVEL_17:0x08F528 -- placement copy of LEVEL_01_0A0D68.c: advances a 32-slot ring index, runs two setup calls, and records a 64-bit delta in a table slot. */
extern int D_00247E54;
extern int D_00197D10;
extern int D_00197D14;
extern long long D_00197D20;
extern int D_00247C90[];
extern void func_08F488(int a);
extern void func_091140(int a);
extern long long func_0911F8(void);

void func_08F528(void)
{
    int idx;
    long long t;
    int d;

    idx = D_00197D10;
    D_00197D14 = idx;
    D_00197D10 = (idx + 1) & 0x1F;
    func_08F488(D_00247E54);
    func_091140(0xDEAD);
    t = func_0911F8();
    d = (int)(t - D_00197D20);
    D_00197D20 = t;
    D_00247C90[D_00197D10] = d;
}
