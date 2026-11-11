/* LEVEL_24:0x016D28 -- placement copy of LEVEL_01_0180B8.c: starts the level record with its two stored words. */
extern int D_001BFF24;
extern int D_001BFF34;
extern char D_001FB7B0[];
extern void func_07F7D0(void *, int, int, int, int, int, unsigned int);

void func_016D28(void)
{
    func_07F7D0(D_001FB7B0, D_001BFF24, D_001BFF34, 1, 1, 0, 0xFFFFFFFF);
}
