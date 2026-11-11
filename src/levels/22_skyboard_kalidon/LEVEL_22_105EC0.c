/* LEVEL_22:0x105EC0 -- decodes a two-word state pair, then returns a 2-bit field. */

int func_105800(int *a, int *b);
int func_021D98(int a0, int a1);

int func_105EC0(int a0, int a1)
{
    int x0;
    int x1;
    int s0;
    int s1;

    s1 = 0x47;
    x0 = a0;
    x1 = a1;
    if (func_105800(&x0, &x1) == 0) {
        return 0;
    }
    if (x1 == 6 || x1 == 0x17) {
        s1 = 0x49;
    }
    s0 = x0;
    s0 = s0 % 4;
    s0 = s0 * 2;
    return func_021D98(s1, (3 << s0) & 0xFF) >> s0;
}
