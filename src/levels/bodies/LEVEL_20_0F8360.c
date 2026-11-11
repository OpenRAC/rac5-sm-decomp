/* LEVEL_20:0x0F8360 -- placement copy of FRONTEND_023110.c: converts a double to an unsigned 64-bit integer in two 32-bit halves. */
typedef unsigned long long u64;

extern int func_0F9040(double a, double b);
extern double func_0F8B18(double a, double b);
extern unsigned int func_0F9150(double a);
extern double func_0F8548(u64 a);
extern double func_0F8A58(double a, double b);
extern double func_0F8AB0(double a, double b);

u64 func_0F8360(double a)
{
    u64 v;
    double b;
    double d;

    if (func_0F9040(a, 0.0) < 0)
        return 0;
    b = func_0F8B18(a, 2.3283064365386963e-10);
    v = (u64)func_0F9150(b) << 32;
    if ((long long)v >= 0) {
        d = func_0F8548(v);
    } else {
        d = func_0F8548((v & 1) | (v >> 1));
        d = func_0F8A58(d, d);
    }
    a = func_0F8AB0(a, d);
    if (func_0F9040(a, 0.0) < 0)
        v -= func_0F9150(func_0F8AB0(0.0, a));
    else
        v += func_0F9150(a);
    return v;
}
