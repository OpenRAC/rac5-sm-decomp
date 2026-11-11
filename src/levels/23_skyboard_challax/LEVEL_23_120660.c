/* LEVEL_23:0x120660 -- placement copy of LEVEL_22_1063B8.c: bumps a 2-bit field in a byte register, returns 1 on success. */
extern int func_11FA88(int *a, int *b);
extern int func_025160(int reg, int mask);
extern void func_0251D8(int reg, int val, int mask);

int func_120660(int a, int b)
{
    int reg;
    int sh;
    unsigned char m;
    int r;
    unsigned t;
    unsigned lim;

    if (!func_11FA88(&a, &b))
        return 0;
    reg = 0x48;
    if (b == 6 || b == 0x17)
        reg = 0x4A;
    lim = 3;
    sh = (a % 4) * 2;
    m = lim << sh;
    r = func_025160(reg, m);
    t = (r >> sh) + 1;
    func_0251D8(reg, (unsigned char)((lim < t ? lim : t) << sh), m);
    return 1;
}
