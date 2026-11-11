/* LEVEL_21:0x0257E0 -- placement copy of LEVEL_01_02C070.c: clears four globals around one call, stores the call result. */
extern int D_00179AA0;
extern int D_00179AA4;
extern int D_00179AA8;
extern int D_00179AAC;
extern int D_00179AB0;
extern int D_00179AB4;
extern char D_001491B4;
extern int func_0832F8(void);

void func_0257E0(void)
{
    D_00179AA0 = 0;
    D_00179AA4 = 0;
    D_00179AAC = 0;
    D_00179AB0 = 0;
    D_00179AA8 = func_0832F8();
    D_00179AB4 = 0;
    D_001491B4 = 0;
}
