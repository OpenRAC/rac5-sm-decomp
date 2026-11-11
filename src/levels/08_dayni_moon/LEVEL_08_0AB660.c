/* LEVEL_08:0x0AB660 -- placement copy of LEVEL_01_0A0D68.c: advances a 32-slot ring index, runs two setup calls, and records a 64-bit delta in a table slot. */
extern int D_002EE284;
extern int D_0023F600;
extern int D_0023F604;
extern long long D_0023F610;
extern int D_002EE0C0[];
extern void func_0AB5C0(int a);
extern void func_0AD2E0(int a);
extern long long func_0AD398(void);

void func_0AB660(void)
{
    int idx;
    long long t;
    int d;

    idx = D_0023F600;
    D_0023F604 = idx;
    D_0023F600 = (idx + 1) & 0x1F;
    func_0AB5C0(D_002EE284);
    func_0AD2E0(0xDEAD);
    t = func_0AD398();
    d = (int)(t - D_0023F610);
    D_0023F610 = t;
    D_002EE0C0[D_0023F600] = d;
}
