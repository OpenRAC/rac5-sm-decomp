/* LEVEL_09:0x088590 -- placement copy of LEVEL_01_08BC10.c: counts one more pass and clears the pass totals. */
extern int D_002267B0;
extern int D_001E008C;
extern int D_002267B4;
extern int D_002267BC;
extern int D_002267C0;
extern int D_002267C4;
extern int D_002267C8;
extern int D_002267CC;

void ANIM_Begin__Fv(void)
{
    D_002267B0++;
    D_001E008C = 0;
    D_002267B4 = 0;
    D_002267BC = 0;
    D_002267C0 = 0;
    D_002267C4 = 0;
    D_002267C8 = 0;
    D_002267CC = 0;
}
