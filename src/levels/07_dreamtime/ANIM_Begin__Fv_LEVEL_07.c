/* LEVEL_07:0x08DCA8 -- placement copy of LEVEL_01_08BC10.c: counts one more pass and clears the pass totals. */
extern int D_00254930;
extern int D_0020A58C;
extern int D_00254934;
extern int D_0025493C;
extern int D_00254940;
extern int D_00254944;
extern int D_00254948;
extern int D_0025494C;

void ANIM_Begin__Fv(void)
{
    D_00254930++;
    D_0020A58C = 0;
    D_00254934 = 0;
    D_0025493C = 0;
    D_00254940 = 0;
    D_00254944 = 0;
    D_00254948 = 0;
    D_0025494C = 0;
}
