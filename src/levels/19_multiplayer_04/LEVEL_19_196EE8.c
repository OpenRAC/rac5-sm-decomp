/* LEVEL_19:0x196EE8 -- placement copy of FRONTEND_023200.c: converts a float, widened to double, to an unsigned 64-bit integer. */
extern double func_197FA8(float);
extern int func_197AD8(double, double);
extern double func_1975B0(double, double);
extern unsigned int func_197BE8(double);
extern double func_196FE0(long long value);
extern double func_1974F0(double, double);
extern double func_197548(double, double);
unsigned long long func_196EE8(float f)
{
    double a = func_197FA8(f);
    double b;
    double c;
    unsigned long long v;
    if (func_197AD8(a, 0.0) < 0)
        return 0;
    b = func_1975B0(a, 2.3283064365386963e-10);
    v = func_197BE8(b);
    v <<= 32;
    if ((long long)v >= 0)
        c = func_196FE0(v);
    else {
        c = func_196FE0((v & 1) | (v >> 1));
        c = func_1974F0(c, c);
    }
    a = func_197548(a, c);
    if (func_197AD8(a, 0.0) < 0)
        v -= func_197BE8(func_197548(0.0, a));
    else
        v += func_197BE8(a);
    return v;
}
