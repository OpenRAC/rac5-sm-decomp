/* LEVEL_03:0x12D438 -- decodes a two-word state pair, then returns a 2-bit field. */

int func_12CE78(int *a, int *b);
int func_0272E8(int a0, int a1);

int func_12D438(int a0, int a1)
{
    int x0;
    int x1;
    int s1;
    int v;

    s1 = 0x48;
    x0 = a0;
    x1 = a1;
    if (func_12CE78(&x0, &x1) == 0) {
        return 0;
    }
    if (x1 == 6 || x1 == 0x17) {
        s1 = 0x4A;
    }
    v = (x0 % 4) * 2;
    return func_0272E8(s1, (3 << v) & 0xFF) >> v;
}
