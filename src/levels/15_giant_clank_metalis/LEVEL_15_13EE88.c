/* LEVEL_15:0x13EE88 -- placement copy of FRONTEND_023110.c: converts a double to an unsigned 64-bit integer in two 32-bit halves. */
typedef unsigned long long u64;

extern int func_13FB68(double a, double b);
extern double func_13F640(double a, double b);
extern unsigned int func_13FC78(double a);
extern double func_13F070(u64 a);
extern double func_13F580(double a, double b);
extern double func_13F5D8(double a, double b);

u64 func_13EE88(double a)
{
    u64 v;
    double b;
    double d;

    if (func_13FB68(a, 0.0) < 0)
        return 0;
    b = func_13F640(a, 2.3283064365386963e-10);
    v = (u64)func_13FC78(b) << 32;
    if ((long long)v >= 0) {
        d = func_13F070(v);
    } else {
        d = func_13F070((v & 1) | (v >> 1));
        d = func_13F580(d, d);
    }
    a = func_13F5D8(a, d);
    if (func_13FB68(a, 0.0) < 0)
        v -= func_13FC78(func_13F5D8(0.0, a));
    else
        v += func_13FC78(a);
    return v;
}
