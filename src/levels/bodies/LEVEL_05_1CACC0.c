/* LEVEL_05:0x1CACC0 -- placement copy of LEVEL_01_1DB8C8.c: lazily loads a set of resource handles. */
extern int func_0DB3B8(int a, int b, int c, int d);
extern int func_0DBA00(int a, int b, int c, int d);

extern int D_001F85CC;
extern int D_001F85D0;
extern int D_001F85D4;
extern int D_001F85D8;
extern int D_001F85DC;
extern int D_001F85E0;

void func_1CACC0(void)
{
    if (D_001F85CC == -1) {
        D_001F85CC = func_0DB3B8(1, 0x8C, 3, 1);
        D_001F85D0 = func_0DB3B8(0, 1, 1, 1);
        D_001F85D4 = func_0DB3B8(1, 0x8D, 3, 1);
        D_001F85D8 = func_0DB3B8(0, 0x8D, 1, 1);
        D_001F85E0 = func_0DB3B8(0, 0x30, 1, 1);
        D_001F85DC = func_0DBA00(0, 0xA, 1, 1);
    }
}
