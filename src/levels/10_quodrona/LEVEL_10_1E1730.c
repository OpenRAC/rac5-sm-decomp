/* LEVEL_10:0x1E1730 -- placement copy of LEVEL_01_1DB8C8.c: lazily loads a set of resource handles. */
extern int func_0DE4C0(int a, int b, int c, int d);
extern int func_0DEB08(int a, int b, int c, int d);

extern int D_002125D4;
extern int D_002125D8;
extern int D_002125DC;
extern int D_002125E0;
extern int D_002125E4;
extern int D_002125E8;

void func_1E1730(void)
{
    if (D_002125D4 == -1) {
        D_002125D4 = func_0DE4C0(1, 0x8C, 3, 1);
        D_002125D8 = func_0DE4C0(0, 1, 1, 1);
        D_002125DC = func_0DE4C0(1, 0x8D, 3, 1);
        D_002125E0 = func_0DE4C0(0, 0x8D, 1, 1);
        D_002125E8 = func_0DE4C0(0, 0x30, 1, 1);
        D_002125E4 = func_0DEB08(0, 0xA, 1, 1);
    }
}
