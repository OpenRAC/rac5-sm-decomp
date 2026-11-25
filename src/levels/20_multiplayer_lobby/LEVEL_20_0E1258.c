/* LEVEL_20:0x0E1258 -- placement copy of LEVEL_01_12F110.c: placement copy of LEVEL_22_105EC0.c: decodes a two-word state pair, then returns a 2-bit field. */

int func_0E0D58(int *a, int *b);
int func_021A20(int a0, int a1);

int func_0E1258(int a0, int a1)
{
    int x0;
    int x1;
    int s0;
    int s1;

    s1 = 0x47;
    x0 = a0;
    x1 = a1;
    if (func_0E0D58(&x0, &x1) == 0) {
        return 0;
    }
    if (x1 == 6 || x1 == 0x17) {
        s1 = 0x49;
    }
    s0 = x0;
    s0 = s0 % 4;
    s0 = s0 * 2;
    return func_021A20(s1, (3 << s0) & 0xFF) >> s0;
}
