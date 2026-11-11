/* LEVEL_07:0x0A2C78 -- placement copy of FRONTEND_006468.c: stores a 64-bit difference into a ring slot. */
extern long long func_0A4AA0(void);
extern long long D_0020AA30;
extern unsigned int D_0020AA40;
extern int D_002B47C0[];

void STAT_CPU_DONE__Fv(void)
{
    long long result = func_0A4AA0();
    D_002B47C0[D_0020AA40 & 0x1f] = (int)(result - D_0020AA30);
}
