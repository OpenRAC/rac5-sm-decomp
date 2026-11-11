/* LEVEL_04:0x203440 -- placement copy of FRONTEND_023200.c: converts a float, widened to double, to an unsigned 64-bit integer. */
extern double func_204500(float);
extern int func_204030(double, double);
extern double func_203B08(double, double);
extern unsigned int func_204140(double);
extern double func_203538(long long value);
extern double func_203A48(double, double);
extern double func_203AA0(double, double);
unsigned long long func_203440(float f)
{
    double a = func_204500(f);
    double b;
    double c;
    unsigned long long v;
    if (func_204030(a, 0.0) < 0)
        return 0;
    b = func_203B08(a, 2.3283064365386963e-10);
    v = func_204140(b);
    v <<= 32;
    if ((long long)v >= 0)
        c = func_203538(v);
    else {
        c = func_203538((v & 1) | (v >> 1));
        c = func_203A48(c, c);
    }
    a = func_203AA0(a, c);
    if (func_204030(a, 0.0) < 0)
        v -= func_204140(func_203AA0(0.0, a));
    else
        v += func_204140(a);
    return v;
}
