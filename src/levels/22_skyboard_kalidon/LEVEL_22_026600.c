/* LEVEL_22:0x026600 -- placement copy of LEVEL_01_02C070.c: clears four globals around one call, stores the call result. */
extern int D_00183520;
extern int D_00183524;
extern int D_00183528;
extern int D_0018352C;
extern int D_00183530;
extern int D_00183534;
extern char D_001538B4;
extern int func_091010(void);

void func_026600(void)
{
    D_00183520 = 0;
    D_00183524 = 0;
    D_0018352C = 0;
    D_00183530 = 0;
    D_00183528 = func_091010();
    D_00183534 = 0;
    D_001538B4 = 0;
}
