/* LEVEL_16:0x029A68 -- placement copy of LEVEL_01_02C070.c: clears four globals around one call, stores the call result. */
extern int D_001E0620;
extern int D_001E0624;
extern int D_001E0628;
extern int D_001E062C;
extern int D_001E0630;
extern int D_001E0634;
extern char D_001A2064;
extern int func_091C60(void);

void func_029A68(void)
{
    D_001E0620 = 0;
    D_001E0624 = 0;
    D_001E062C = 0;
    D_001E0630 = 0;
    D_001E0628 = func_091C60();
    D_001E0634 = 0;
    D_001A2064 = 0;
}
