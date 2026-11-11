/* LEVEL_09:0x1D3FF8 -- placement copy of FRONTEND_023110.c: converts a double to an unsigned 64-bit integer in two 32-bit halves. */
typedef unsigned long long u64;

extern int func_1D4CD8(double a, double b);
extern double func_1D47B0(double a, double b);
extern unsigned int func_1D4DE8(double a);
extern double func_1D41E0(u64 a);
extern double func_1D46F0(double a, double b);
extern double func_1D4748(double a, double b);

u64 func_1D3FF8(double a)
{
    u64 v;
    double b;
    double d;

    if (func_1D4CD8(a, 0.0) < 0)
        return 0;
    b = func_1D47B0(a, 2.3283064365386963e-10);
    v = (u64)func_1D4DE8(b) << 32;
    if ((long long)v >= 0) {
        d = func_1D41E0(v);
    } else {
        d = func_1D41E0((v & 1) | (v >> 1));
        d = func_1D46F0(d, d);
    }
    a = func_1D4748(a, d);
    if (func_1D4CD8(a, 0.0) < 0)
        v -= func_1D4DE8(func_1D4748(0.0, a));
    else
        v += func_1D4DE8(a);
    return v;
}
