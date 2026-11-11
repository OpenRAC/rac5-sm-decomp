/* LEVEL_22:0x149638 -- placement copy of FRONTEND_023200.c: converts a double to an unsigned 64-bit integer. */
extern double func_14A6F8(void);
extern int func_14A228(double, double);
extern double func_149D00(double, double);
extern unsigned int func_14A338(double);
extern double func_149730(long long value);
extern double func_149C40(double, double);
extern double func_149C98(double, double);
unsigned long long func_149638(void)
{
    double a = func_14A6F8();
    double b;
    double c;
    unsigned long long v;
    if (func_14A228(a, 0.0) < 0)
        return 0;
    b = func_149D00(a, 2.3283064365386963e-10);
    v = func_14A338(b);
    v <<= 32;
    if ((long long)v >= 0)
        c = func_149730(v);
    else {
        c = func_149730((v & 1) | (v >> 1));
        c = func_149C40(c, c);
    }
    a = func_149C98(a, c);
    if (func_14A228(a, 0.0) < 0)
        v -= func_14A338(func_149C98(0.0, a));
    else
        v += func_14A338(a);
    return v;
}
