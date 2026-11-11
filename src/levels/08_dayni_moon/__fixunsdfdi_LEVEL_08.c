/* LEVEL_08:0x232D18 -- placement copy of FRONTEND_023110.c: converts a double to an unsigned 64-bit integer in two 32-bit halves. */
typedef unsigned long long u64;

extern int func_2339F8(double a, double b);
extern double func_2334D0(double a, double b);
extern unsigned int func_233B08(double a);
extern double func_232F00(u64 a);
extern double func_233410(double a, double b);
extern double func_233468(double a, double b);

u64 __fixunsdfdi(double a)
{
    u64 v;
    double b;
    double d;

    if (func_2339F8(a, 0.0) < 0)
        return 0;
    b = func_2334D0(a, 2.3283064365386963e-10);
    v = (u64)func_233B08(b) << 32;
    if ((long long)v >= 0) {
        d = func_232F00(v);
    } else {
        d = func_232F00((v & 1) | (v >> 1));
        d = func_233410(d, d);
    }
    a = func_233468(a, d);
    if (func_2339F8(a, 0.0) < 0)
        v -= func_233B08(func_233468(0.0, a));
    else
        v += func_233B08(a);
    return v;
}
