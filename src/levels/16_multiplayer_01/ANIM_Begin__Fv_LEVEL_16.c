/* LEVEL_16:0x07D1B8 -- placement copy of LEVEL_01_08BC10.c: counts one more pass and clears the pass totals. */
extern int D_001F54B0;
extern int D_001A42BC;
extern int D_001F54B4;
extern int D_001F54BC;
extern int D_001F54C0;
extern int D_001F54C4;
extern int D_001F54C8;
extern int D_001F54CC;

void ANIM_Begin__Fv(void)
{
    D_001F54B0++;
    D_001A42BC = 0;
    D_001F54B4 = 0;
    D_001F54BC = 0;
    D_001F54C0 = 0;
    D_001F54C4 = 0;
    D_001F54C8 = 0;
    D_001F54CC = 0;
}
