/* LEVEL_02:0x0A7588 -- placement copy of FRONTEND_006468.c: stores a 64-bit difference into a ring slot. */
extern long long func_0A93B0(void);
extern long long D_0020B6F0;
extern unsigned int D_0020B700;
extern int D_002B63C0[];

void STAT_CPU_DONE__Fv(void)
{
    long long result = func_0A93B0();
    D_002B63C0[D_0020B700 & 0x1f] = (int)(result - D_0020B6F0);
}
