/* LEVEL_09:0x0174C8 -- placement copy of LEVEL_01_0180B8.c: starts the level record with its two stored words. */
extern int D_001D90A4;
extern int D_001D90B4;
extern char D_00217030[];
extern void func_082EE8(void *, int, int, int, int, int, unsigned int);

void func_0174C8(void)
{
    func_082EE8(D_00217030, D_001D90A4, D_001D90B4, 1, 1, 0, 0xFFFFFFFF);
}
