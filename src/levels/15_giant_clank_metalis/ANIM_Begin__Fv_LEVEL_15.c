/* LEVEL_15:0x0702B8 -- placement copy of LEVEL_01_08BC10.c: counts one more pass and clears the pass totals. */
extern int D_001870B0;
extern int D_0014AF0C;
extern int D_001870B4;
extern int D_001870BC;
extern int D_001870C0;
extern int D_001870C4;
extern int D_001870C8;
extern int D_001870CC;

void ANIM_Begin__Fv(void)
{
    D_001870B0++;
    D_0014AF0C = 0;
    D_001870B4 = 0;
    D_001870BC = 0;
    D_001870C0 = 0;
    D_001870C4 = 0;
    D_001870C8 = 0;
    D_001870CC = 0;
}
