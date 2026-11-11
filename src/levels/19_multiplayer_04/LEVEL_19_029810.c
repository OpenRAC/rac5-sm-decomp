/* LEVEL_19:0x029810 -- placement copy of LEVEL_01_02C070.c: clears four globals around one call, stores the call result. */
extern int D_001E07A0;
extern int D_001E07A4;
extern int D_001E07A8;
extern int D_001E07AC;
extern int D_001E07B0;
extern int D_001E07B4;
extern char D_001A31E4;
extern int func_0914F0(void);

void func_029810(void)
{
    D_001E07A0 = 0;
    D_001E07A4 = 0;
    D_001E07AC = 0;
    D_001E07B0 = 0;
    D_001E07A8 = func_0914F0();
    D_001E07B4 = 0;
    D_001A31E4 = 0;
}
