/* LEVEL_23:0x016EF0 -- placement copy of LEVEL_01_0180B8.c: starts the level record with its two stored words. */
extern int D_001C26A4;
extern int D_001C26B4;
extern char D_001FCD30[];
extern void func_07C3F0(void *, int, int, int, int, int, unsigned int);

void func_016EF0(void)
{
    func_07C3F0(D_001FCD30, D_001C26A4, D_001C26B4, 1, 1, 0, 0xFFFFFFFF);
}
