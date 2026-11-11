/* LEVEL_10:0x08BFA8 -- placement copy of LEVEL_01_08BC10.c: counts one more pass and clears the pass totals. */
extern int D_00248430;
extern int D_001FF28C;
extern int D_00248434;
extern int D_0024843C;
extern int D_00248440;
extern int D_00248444;
extern int D_00248448;
extern int D_0024844C;

void ANIM_Begin__Fv(void)
{
    D_00248430++;
    D_001FF28C = 0;
    D_00248434 = 0;
    D_0024843C = 0;
    D_00248440 = 0;
    D_00248444 = 0;
    D_00248448 = 0;
    D_0024844C = 0;
}
