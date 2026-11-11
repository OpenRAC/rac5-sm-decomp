/* LEVEL_18:0x18F550 -- placement copy of LEVEL_01_1DB8C8.c: lazily loads a set of resource handles. */
extern int func_0CB698(int a, int b, int c, int d);
extern int func_0CBCE0(int a, int b, int c, int d);

extern int D_001BFC74;
extern int D_001BFC78;
extern int D_001BFC7C;
extern int D_001BFC80;
extern int D_001BFC84;
extern int D_001BFC88;

void func_18F550(void)
{
    if (D_001BFC74 == -1) {
        D_001BFC74 = func_0CB698(1, 0x8C, 3, 1);
        D_001BFC78 = func_0CB698(0, 1, 1, 1);
        D_001BFC7C = func_0CB698(1, 0x8D, 3, 1);
        D_001BFC80 = func_0CB698(0, 0x8D, 1, 1);
        D_001BFC88 = func_0CB698(0, 0x30, 1, 1);
        D_001BFC84 = func_0CBCE0(0, 0xA, 1, 1);
    }
}
