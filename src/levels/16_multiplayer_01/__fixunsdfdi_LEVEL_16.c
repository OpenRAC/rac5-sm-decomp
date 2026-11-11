/* LEVEL_16:0x195C30 -- placement copy of FRONTEND_023110.c: converts a double to an unsigned 64-bit integer in two 32-bit halves. */
typedef unsigned long long u64;

extern int func_196910(double a, double b);
extern double func_1963E8(double a, double b);
extern unsigned int func_196A20(double a);
extern double func_195E18(u64 a);
extern double func_196328(double a, double b);
extern double func_196380(double a, double b);

u64 __fixunsdfdi(double a)
{
    u64 v;
    double b;
    double d;

    if (func_196910(a, 0.0) < 0)
        return 0;
    b = func_1963E8(a, 2.3283064365386963e-10);
    v = (u64)func_196A20(b) << 32;
    if ((long long)v >= 0) {
        d = func_195E18(v);
    } else {
        d = func_195E18((v & 1) | (v >> 1));
        d = func_196328(d, d);
    }
    a = func_196380(a, d);
    if (func_196910(a, 0.0) < 0)
        v -= func_196A20(func_196380(0.0, a));
    else
        v += func_196A20(a);
    return v;
}
