/* LEVEL_04:0x1F32B8 -- placement copy of LEVEL_01_1DB8C8.c: lazily loads a set of resource handles. */
extern int func_0E2940(int a, int b, int c, int d);
extern int func_0E2F88(int a, int b, int c, int d);

extern int D_00222F54;
extern int D_00222F58;
extern int D_00222F5C;
extern int D_00222F60;
extern int D_00222F64;
extern int D_00222F68;

void func_1F32B8(void)
{
    if (D_00222F54 == -1) {
        D_00222F54 = func_0E2940(1, 0x8C, 3, 1);
        D_00222F58 = func_0E2940(0, 1, 1, 1);
        D_00222F5C = func_0E2940(1, 0x8D, 3, 1);
        D_00222F60 = func_0E2940(0, 0x8D, 1, 1);
        D_00222F68 = func_0E2940(0, 0x30, 1, 1);
        D_00222F64 = func_0E2F88(0, 0xA, 1, 1);
    }
}
