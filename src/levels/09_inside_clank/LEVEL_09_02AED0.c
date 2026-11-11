/* LEVEL_09:0x02AED0 -- placement copy of LEVEL_01_02C070.c: clears four globals around one call, stores the call result. */
extern int D_002190A0;
extern int D_002190A4;
extern int D_002190A8;
extern int D_002190AC;
extern int D_002190B0;
extern int D_002190B4;
extern char D_001DE334;
extern int func_09FCB0(void);

void func_02AED0(void)
{
    D_002190A0 = 0;
    D_002190A4 = 0;
    D_002190AC = 0;
    D_002190B0 = 0;
    D_002190A8 = func_09FCB0();
    D_002190B4 = 0;
    D_001DE334 = 0;
}
