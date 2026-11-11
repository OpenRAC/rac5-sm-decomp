/* LEVEL_07:0x1EA080 -- placement copy of LEVEL_01_1DB8C8.c: lazily loads a set of resource handles. */
extern int func_0DEE70(int a, int b, int c, int d);
extern int func_0DF4B8(int a, int b, int c, int d);

extern int D_0021E32C;
extern int D_0021E330;
extern int D_0021E334;
extern int D_0021E338;
extern int D_0021E33C;
extern int D_0021E340;

void func_1EA080(void)
{
    if (D_0021E32C == -1) {
        D_0021E32C = func_0DEE70(1, 0x8C, 3, 1);
        D_0021E330 = func_0DEE70(0, 1, 1, 1);
        D_0021E334 = func_0DEE70(1, 0x8D, 3, 1);
        D_0021E338 = func_0DEE70(0, 0x8D, 1, 1);
        D_0021E340 = func_0DEE70(0, 0x30, 1, 1);
        D_0021E33C = func_0DF4B8(0, 0xA, 1, 1);
    }
}
