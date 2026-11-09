/* LEVEL_10:0x02BEF8 -- placement copy of LEVEL_01_02C070.c: clears four globals around one call, stores the call result. */
extern int D_0023AD20;
extern int D_0023AD24;
extern int D_0023AD28;
extern int D_0023AD2C;
extern int D_0023AD30;
extern int D_0023AD34;
extern char D_001FD534;
extern int func_0A3B18(void);

void func_02BEF8(void)
{
    D_0023AD20 = 0;
    D_0023AD24 = 0;
    D_0023AD2C = 0;
    D_0023AD30 = 0;
    D_0023AD28 = func_0A3B18();
    D_0023AD34 = 0;
    D_001FD534 = 0;
}
