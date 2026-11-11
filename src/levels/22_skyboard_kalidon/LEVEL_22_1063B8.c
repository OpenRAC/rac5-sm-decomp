/* LEVEL_22:0x1063B8 -- bumps a 2-bit field in a byte register, returns 1 on success. */
extern int func_105800(int *a, int *b);
extern int func_021D98(int reg, int mask);
extern void func_021E10(int reg, int val, int mask);

int func_1063B8(int a, int b)
{
    int reg;
    int sh;
    unsigned char m;
    int r;
    unsigned t;
    unsigned lim;

    if (!func_105800(&a, &b))
        return 0;
    reg = 0x48;
    if (b == 6 || b == 0x17)
        reg = 0x4A;
    lim = 3;
    sh = (a % 4) * 2;
    m = lim << sh;
    r = func_021D98(reg, m);
    t = (r >> sh) + 1;
    func_021E10(reg, (unsigned char)((lim < t ? lim : t) << sh), m);
    return 1;
}
