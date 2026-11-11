/* LEVEL_06:0x1D90D8 -- placement copy of FRONTEND_023110.c: converts a double to an unsigned 64-bit integer in two 32-bit halves. */
typedef unsigned long long u64;

extern int func_1D9DB8(double a, double b);
extern double func_1D9890(double a, double b);
extern unsigned int func_1D9EC8(double a);
extern double func_1D92C0(u64 a);
extern double func_1D97D0(double a, double b);
extern double func_1D9828(double a, double b);

u64 func_1D90D8(double a)
{
    u64 v;
    double b;
    double d;

    if (func_1D9DB8(a, 0.0) < 0)
        return 0;
    b = func_1D9890(a, 2.3283064365386963e-10);
    v = (u64)func_1D9EC8(b) << 32;
    if ((long long)v >= 0) {
        d = func_1D92C0(v);
    } else {
        d = func_1D92C0((v & 1) | (v >> 1));
        d = func_1D97D0(d, d);
    }
    a = func_1D9828(a, d);
    if (func_1D9DB8(a, 0.0) < 0)
        v -= func_1D9EC8(func_1D9828(0.0, a));
    else
        v += func_1D9EC8(a);
    return v;
}
