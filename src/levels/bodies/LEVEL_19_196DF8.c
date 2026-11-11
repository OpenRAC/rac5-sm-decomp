/* LEVEL_19:0x196DF8 -- placement copy of FRONTEND_023110.c: converts a double to an unsigned 64-bit integer in two 32-bit halves. */
typedef unsigned long long u64;

extern int func_197AD8(double a, double b);
extern double func_1975B0(double a, double b);
extern unsigned int func_197BE8(double a);
extern double func_196FE0(u64 a);
extern double func_1974F0(double a, double b);
extern double func_197548(double a, double b);

u64 func_196DF8(double a)
{
    u64 v;
    double b;
    double d;

    if (func_197AD8(a, 0.0) < 0)
        return 0;
    b = func_1975B0(a, 2.3283064365386963e-10);
    v = (u64)func_197BE8(b) << 32;
    if ((long long)v >= 0) {
        d = func_196FE0(v);
    } else {
        d = func_196FE0((v & 1) | (v >> 1));
        d = func_1974F0(d, d);
    }
    a = func_197548(a, d);
    if (func_197AD8(a, 0.0) < 0)
        v -= func_197BE8(func_197548(0.0, a));
    else
        v += func_197BE8(a);
    return v;
}
