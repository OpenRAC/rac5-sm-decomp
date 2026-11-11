/* LEVEL_05:0x017750 -- placement copy of LEVEL_01_0180B8.c: starts the level record with its two stored words. */
extern int D_001DE624;
extern int D_001DE634;
extern char D_0021B5B0[];
extern void func_083E88(void *, int, int, int, int, int, unsigned int);

void func_017750(void)
{
    func_083E88(D_0021B5B0, D_001DE624, D_001DE634, 1, 1, 0, 0xFFFFFFFF);
}
