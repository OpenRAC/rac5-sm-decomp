/* LEVEL_03:0x202910 -- placement copy of FRONTEND_023200.c: converts a float, widened to double, to an unsigned 64-bit integer. */
extern double func_2039D0(float);
extern int func_203500(double, double);
extern double func_202FD8(double, double);
extern unsigned int func_203610(double);
extern double func_202A08(long long value);
extern double func_202F18(double, double);
extern double func_202F70(double, double);
unsigned long long func_202910(float f)
{
    double a = func_2039D0(f);
    double b;
    double c;
    unsigned long long v;
    if (func_203500(a, 0.0) < 0)
        return 0;
    b = func_202FD8(a, 2.3283064365386963e-10);
    v = func_203610(b);
    v <<= 32;
    if ((long long)v >= 0)
        c = func_202A08(v);
    else {
        c = func_202A08((v & 1) | (v >> 1));
        c = func_202F18(c, c);
    }
    a = func_202F70(a, c);
    if (func_203500(a, 0.0) < 0)
        v -= func_203610(func_202F70(0.0, a));
    else
        v += func_203610(a);
    return v;
}
