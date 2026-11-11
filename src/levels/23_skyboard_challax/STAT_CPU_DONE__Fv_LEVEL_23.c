/* LEVEL_23:0x0979B8 -- placement copy of FRONTEND_006468.c: stores a 64-bit difference into a ring slot. */
extern long long func_0997E0(void);
extern long long D_001C9B30;
extern unsigned int D_001C9B40;
extern int D_00270300[];

void STAT_CPU_DONE__Fv(void)
{
    long long result = func_0997E0();
    D_00270300[D_001C9B40 & 0x1f] = (int)(result - D_001C9B30);
}
