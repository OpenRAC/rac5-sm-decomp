/* LEVEL_18:0x08EF50 -- placement copy of FRONTEND_006468.c: stores a 64-bit difference into a ring slot. */
extern long long func_090D10(void);
extern long long D_001A5B80;
extern unsigned int D_001A5B90;
extern int D_00256D90[];

void STAT_CPU_DONE__Fv(void)
{
    long long result = func_090D10();
    D_00256D90[D_001A5B90 & 0x1f] = (int)(result - D_001A5B80);
}
