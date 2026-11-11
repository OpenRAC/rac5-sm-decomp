/* LEVEL_08:0x232E08 -- placement copy of FRONTEND_023200.c: converts a float, widened to double, to an unsigned 64-bit integer. */
extern double func_233EC8(float);
extern int func_2339F8(double, double);
extern double func_2334D0(double, double);
extern unsigned int func_233B08(double);
extern double func_232F00(long long value);
extern double func_233410(double, double);
extern double func_233468(double, double);
unsigned long long func_232E08(float f)
{
    double a = func_233EC8(f);
    double b;
    double c;
    unsigned long long v;
    if (func_2339F8(a, 0.0) < 0)
        return 0;
    b = func_2334D0(a, 2.3283064365386963e-10);
    v = func_233B08(b);
    v <<= 32;
    if ((long long)v >= 0)
        c = func_232F00(v);
    else {
        c = func_232F00((v & 1) | (v >> 1));
        c = func_233410(c, c);
    }
    a = func_233468(a, c);
    if (func_2339F8(a, 0.0) < 0)
        v -= func_233B08(func_233468(0.0, a));
    else
        v += func_233B08(a);
    return v;
}
