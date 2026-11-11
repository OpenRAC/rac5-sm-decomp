/* LEVEL_23:0x1BD6C0 -- placement copy of FRONTEND_023200.c: converts a float, widened to double, to an unsigned 64-bit integer. */
extern double func_1BE780(float);
extern int func_1BE2B0(double, double);
extern double func_1BDD88(double, double);
extern unsigned int func_1BE3C0(double);
extern double func_1BD7B8(long long value);
extern double func_1BDCC8(double, double);
extern double func_1BDD20(double, double);
unsigned long long func_1BD6C0(float f)
{
    double a = func_1BE780(f);
    double b;
    double c;
    unsigned long long v;
    if (func_1BE2B0(a, 0.0) < 0)
        return 0;
    b = func_1BDD88(a, 2.3283064365386963e-10);
    v = func_1BE3C0(b);
    v <<= 32;
    if ((long long)v >= 0)
        c = func_1BD7B8(v);
    else {
        c = func_1BD7B8((v & 1) | (v >> 1));
        c = func_1BDCC8(c, c);
    }
    a = func_1BDD20(a, c);
    if (func_1BE2B0(a, 0.0) < 0)
        v -= func_1BE3C0(func_1BDD20(0.0, a));
    else
        v += func_1BE3C0(a);
    return v;
}
