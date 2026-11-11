/* LEVEL_16:0x195D20 -- placement copy of FRONTEND_023200.c: converts a float, widened to double, to an unsigned 64-bit integer. */
extern double func_196DE0(float);
extern int func_196910(double, double);
extern double func_1963E8(double, double);
extern unsigned int func_196A20(double);
extern double func_195E18(long long value);
extern double func_196328(double, double);
extern double func_196380(double, double);
unsigned long long func_195D20(float f)
{
    double a = func_196DE0(f);
    double b;
    double c;
    unsigned long long v;
    if (func_196910(a, 0.0) < 0)
        return 0;
    b = func_1963E8(a, 2.3283064365386963e-10);
    v = func_196A20(b);
    v <<= 32;
    if ((long long)v >= 0)
        c = func_195E18(v);
    else {
        c = func_195E18((v & 1) | (v >> 1));
        c = func_196328(c, c);
    }
    a = func_196380(a, c);
    if (func_196910(a, 0.0) < 0)
        v -= func_196A20(func_196380(0.0, a));
    else
        v += func_196A20(a);
    return v;
}
