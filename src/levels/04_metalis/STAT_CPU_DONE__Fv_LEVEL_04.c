/* LEVEL_04:0x0A5E88 -- placement copy of FRONTEND_006468.c: stores a 64-bit difference into a ring slot. */
extern long long func_0A7CB0(void);
extern long long D_0020FBF0;
extern unsigned int D_0020FC00;
extern int D_002B96C0[];

void STAT_CPU_DONE__Fv(void)
{
    long long result = func_0A7CB0();
    D_002B96C0[D_0020FC00 & 0x1f] = (int)(result - D_0020FBF0);
}
