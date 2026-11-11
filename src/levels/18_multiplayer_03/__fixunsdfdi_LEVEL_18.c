/* LEVEL_18:0x1970D0 -- placement copy of FRONTEND_023110.c: converts a double to an unsigned 64-bit integer in two 32-bit halves. */
typedef unsigned long long u64;

extern int func_197DB0(double a, double b);
extern double func_197888(double a, double b);
extern unsigned int func_197EC0(double a);
extern double func_1972B8(u64 a);
extern double func_1977C8(double a, double b);
extern double func_197820(double a, double b);

u64 __fixunsdfdi(double a)
{
    u64 v;
    double b;
    double d;

    if (func_197DB0(a, 0.0) < 0)
        return 0;
    b = func_197888(a, 2.3283064365386963e-10);
    v = (u64)func_197EC0(b) << 32;
    if ((long long)v >= 0) {
        d = func_1972B8(v);
    } else {
        d = func_1972B8((v & 1) | (v >> 1));
        d = func_1977C8(d, d);
    }
    a = func_197820(a, d);
    if (func_197DB0(a, 0.0) < 0)
        v -= func_197EC0(func_197820(0.0, a));
    else
        v += func_197EC0(a);
    return v;
}
