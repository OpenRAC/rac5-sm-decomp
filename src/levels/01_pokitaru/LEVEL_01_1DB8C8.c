/* LEVEL_01:0x1DB8C8 -- lazily loads a set of resource handles. */
extern int func_0DD080(int a, int b, int c, int d);
extern int func_0DD6C8(int a, int b, int c, int d);

extern int D_00209654;
extern int D_00209658;
extern int D_0020965C;
extern int D_00209660;
extern int D_00209664;
extern int D_00209668;

void func_1DB8C8(void)
{
    if (D_00209654 == -1) {
        D_00209654 = func_0DD080(1, 0x8C, 3, 1);
        D_00209658 = func_0DD080(0, 1, 1, 1);
        D_0020965C = func_0DD080(1, 0x8D, 3, 1);
        D_00209660 = func_0DD080(0, 0x8D, 1, 1);
        D_00209668 = func_0DD080(0, 0x30, 1, 1);
        D_00209664 = func_0DD6C8(0, 0xA, 1, 1);
    }
}
