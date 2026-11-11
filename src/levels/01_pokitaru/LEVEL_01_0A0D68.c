/* LEVEL_01:0x0A0D68 -- advances a 32-slot ring index, runs two setup calls, and records a 64-bit delta in a table slot. */
extern int D_0029F004;
extern int D_001F6740;
extern int D_001F6744;
extern long long D_001F6750;
extern int D_0029EE40[];
extern void func_0A0CC8(int a);
extern void func_0A29E8(int a);
extern long long func_0A2AA0(void);

void func_0A0D68(void)
{
    int idx;
    long long t;
    int d;

    idx = D_001F6740;
    D_001F6744 = idx;
    D_001F6740 = (idx + 1) & 0x1F;
    func_0A0CC8(D_0029F004);
    func_0A29E8(0xDEAD);
    t = func_0A2AA0();
    d = (int)(t - D_001F6750);
    D_001F6750 = t;
    D_0029EE40[D_001F6740] = d;
}
