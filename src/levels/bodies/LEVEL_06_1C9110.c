/* LEVEL_06:0x1C9110 -- placement copy of LEVEL_01_1DB8C8.c: lazily loads a set of resource handles. */
extern int func_0D7980(int a, int b, int c, int d);
extern int func_0D7FC8(int a, int b, int c, int d);

extern int D_001F850C;
extern int D_001F8510;
extern int D_001F8514;
extern int D_001F8518;
extern int D_001F851C;
extern int D_001F8520;

void func_1C9110(void)
{
    if (D_001F850C == -1) {
        D_001F850C = func_0D7980(1, 0x8C, 3, 1);
        D_001F8510 = func_0D7980(0, 1, 1, 1);
        D_001F8514 = func_0D7980(1, 0x8D, 3, 1);
        D_001F8518 = func_0D7980(0, 0x8D, 1, 1);
        D_001F8520 = func_0D7980(0, 0x30, 1, 1);
        D_001F851C = func_0D7FC8(0, 0xA, 1, 1);
    }
}
