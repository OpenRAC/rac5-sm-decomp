/* LEVEL_10:0x017720 -- placement copy of LEVEL_01_0180B8.c: starts the level record with its two stored words. */
extern int D_001F82A4;
extern int D_001F82B4;
extern char D_00238CB0[];
extern void func_086898(void *, int, int, int, int, int, unsigned int);

void func_017720(void)
{
    func_086898(D_00238CB0, D_001F82A4, D_001F82B4, 1, 1, 0, 0xFFFFFFFF);
}
