/* LEVEL_02:0x018A48 -- placement copy of LEVEL_01_0180B8.c: starts the level record with its two stored words. */
extern int D_00203F24;
extern int D_00203F34;
extern char D_00246DB0[];
extern void func_08CE60(void *, int, int, int, int, int, unsigned int);

void func_018A48(void)
{
    func_08CE60(D_00246DB0, D_00203F24, D_00203F34, 1, 1, 0, 0xFFFFFFFF);
}
