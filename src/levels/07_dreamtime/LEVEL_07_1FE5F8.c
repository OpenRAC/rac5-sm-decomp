/* LEVEL_07:0x1FE5F8 -- placement copy of FRONTEND_023200.c: converts a float, widened to double, to an unsigned 64-bit integer. */
extern double func_1FF6B8(float);
extern int func_1FF1E8(double, double);
extern double func_1FECC0(double, double);
extern unsigned int func_1FF2F8(double);
extern double func_1FE6F0(long long value);
extern double func_1FEC00(double, double);
extern double func_1FEC58(double, double);
unsigned long long func_1FE5F8(float f)
{
    double a = func_1FF6B8(f);
    double b;
    double c;
    unsigned long long v;
    if (func_1FF1E8(a, 0.0) < 0)
        return 0;
    b = func_1FECC0(a, 2.3283064365386963e-10);
    v = func_1FF2F8(b);
    v <<= 32;
    if ((long long)v >= 0)
        c = func_1FE6F0(v);
    else {
        c = func_1FE6F0((v & 1) | (v >> 1));
        c = func_1FEC00(c, c);
    }
    a = func_1FEC58(a, c);
    if (func_1FF1E8(a, 0.0) < 0)
        v -= func_1FF2F8(func_1FEC58(0.0, a));
    else
        v += func_1FF2F8(a);
    return v;
}
