/* LEVEL_15:0x13EF78 -- placement copy of FRONTEND_023200.c: converts a float, widened to double, to an unsigned 64-bit integer. */
extern double func_140038(float);
extern int func_13FB68(double, double);
extern double func_13F640(double, double);
extern unsigned int func_13FC78(double);
extern double func_13F070(long long value);
extern double func_13F580(double, double);
extern double func_13F5D8(double, double);
unsigned long long func_13EF78(float f)
{
    double a = func_140038(f);
    double b;
    double c;
    unsigned long long v;
    if (func_13FB68(a, 0.0) < 0)
        return 0;
    b = func_13F640(a, 2.3283064365386963e-10);
    v = func_13FC78(b);
    v <<= 32;
    if ((long long)v >= 0)
        c = func_13F070(v);
    else {
        c = func_13F070((v & 1) | (v >> 1));
        c = func_13F580(c, c);
    }
    a = func_13F5D8(a, c);
    if (func_13FB68(a, 0.0) < 0)
        v -= func_13FC78(func_13F5D8(0.0, a));
    else
        v += func_13FC78(a);
    return v;
}
