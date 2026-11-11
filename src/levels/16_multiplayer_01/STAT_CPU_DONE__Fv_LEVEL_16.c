/* LEVEL_16:0x08FF40 -- placement copy of FRONTEND_006468.c: stores a 64-bit difference into a ring slot. */
extern long long func_091D00(void);
extern long long D_001A4700;
extern unsigned int D_001A4710;
extern int D_00256A10[];

void STAT_CPU_DONE__Fv(void)
{
    long long result = func_091D00();
    D_00256A10[D_001A4710 & 0x1f] = (int)(result - D_001A4700);
}
