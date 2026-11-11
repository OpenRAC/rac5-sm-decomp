/* LEVEL_19:0x18D118 -- placement copy of LEVEL_01_1DB8C8.c: lazily loads a set of resource handles. */
extern int func_0CBF98(int a, int b, int c, int d);
extern int func_0CC5E0(int a, int b, int c, int d);

extern int D_001BF8D4;
extern int D_001BF8D8;
extern int D_001BF8DC;
extern int D_001BF8E0;
extern int D_001BF8E4;
extern int D_001BF8E8;

void func_18D118(void)
{
    if (D_001BF8D4 == -1) {
        D_001BF8D4 = func_0CBF98(1, 0x8C, 3, 1);
        D_001BF8D8 = func_0CBF98(0, 1, 1, 1);
        D_001BF8DC = func_0CBF98(1, 0x8D, 3, 1);
        D_001BF8E0 = func_0CBF98(0, 0x8D, 1, 1);
        D_001BF8E8 = func_0CBF98(0, 0x30, 1, 1);
        D_001BF8E4 = func_0CC5E0(0, 0xA, 1, 1);
    }
}
