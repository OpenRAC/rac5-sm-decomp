/* LEVEL_22:0x105E20 -- placement copy of LEVEL_03_12D438.c: decodes a two-word state pair, then returns a 2-bit field. */

int func_105800(int *a, int *b);
int func_021D98(int a0, int a1);

int func_105E20(int a0, int a1)
{
    int x0;
    int x1;
    int s1;
    int v;

    s1 = 0x48;
    x0 = a0;
    x1 = a1;
    if (func_105800(&x0, &x1) == 0) {
        return 0;
    }
    if (x1 == 6 || x1 == 0x17) {
        s1 = 0x4A;
    }
    v = (x0 % 4) * 2;
    return func_021D98(s1, (3 << v) & 0xFF) >> v;
}
