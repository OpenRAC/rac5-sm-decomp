/* LEVEL_09:0x09DF28 -- placement copy of FRONTEND_006468.c: stores a 64-bit difference into a ring slot. */
extern long long func_09FD50(void);
extern long long D_001E0530;
extern unsigned int D_001E0540;
extern int D_00286640[];

void STAT_CPU_DONE__Fv(void)
{
    long long result = func_09FD50();
    D_00286640[D_001E0540 & 0x1f] = (int)(result - D_001E0530);
}
