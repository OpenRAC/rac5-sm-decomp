/* LEVEL_18:0x029018 -- placement copy of LEVEL_01_02C070.c: clears four globals around one call, stores the call result. */
extern int D_001E09A0;
extern int D_001E09A4;
extern int D_001E09A8;
extern int D_001E09AC;
extern int D_001E09B0;
extern int D_001E09B4;
extern char D_001A34E4;
extern int func_090C70(void);

void func_029018(void)
{
    D_001E09A0 = 0;
    D_001E09A4 = 0;
    D_001E09AC = 0;
    D_001E09B0 = 0;
    D_001E09A8 = func_090C70();
    D_001E09B4 = 0;
    D_001A34E4 = 0;
}
