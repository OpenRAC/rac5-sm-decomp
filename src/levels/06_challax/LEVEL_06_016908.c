/* LEVEL_06:0x016908 -- placement copy of LEVEL_01_0180B8.c: starts the level record with its two stored words. */
extern int D_001DE1A4;
extern int D_001DE1B4;
extern char D_0021C630[];
extern void func_07F3A8(void *, int, int, int, int, int, unsigned int);

void func_016908(void)
{
    func_07F3A8(D_0021C630, D_001DE1A4, D_001DE1B4, 1, 1, 0, 0xFFFFFFFF);
}
