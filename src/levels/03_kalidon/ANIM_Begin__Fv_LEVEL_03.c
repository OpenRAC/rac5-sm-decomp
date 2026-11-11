/* LEVEL_03:0x08BA30 -- placement copy of LEVEL_01_08BC10.c: counts one more pass and clears the pass totals. */
extern int D_00259EB0;
extern int D_0020E90C;
extern int D_00259EB4;
extern int D_00259EBC;
extern int D_00259EC0;
extern int D_00259EC4;
extern int D_00259EC8;
extern int D_00259ECC;

void ANIM_Begin__Fv(void)
{
    D_00259EB0++;
    D_0020E90C = 0;
    D_00259EB4 = 0;
    D_00259EBC = 0;
    D_00259EC0 = 0;
    D_00259EC4 = 0;
    D_00259EC8 = 0;
    D_00259ECC = 0;
}
