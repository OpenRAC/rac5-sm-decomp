/* LEVEL_24:0x1BAE68 -- placement copy of FRONTEND_023110.c: converts a double to an unsigned 64-bit integer in two 32-bit halves. */
typedef unsigned long long u64;

extern int func_1BBB48(double a, double b);
extern double func_1BB620(double a, double b);
extern unsigned int func_1BBC58(double a);
extern double func_1BB050(u64 a);
extern double func_1BB560(double a, double b);
extern double func_1BB5B8(double a, double b);

u64 func_1BAE68(double a)
{
    u64 v;
    double b;
    double d;

    if (func_1BBB48(a, 0.0) < 0)
        return 0;
    b = func_1BB620(a, 2.3283064365386963e-10);
    v = (u64)func_1BBC58(b) << 32;
    if ((long long)v >= 0) {
        d = func_1BB050(v);
    } else {
        d = func_1BB050((v & 1) | (v >> 1));
        d = func_1BB560(d, d);
    }
    a = func_1BB5B8(a, d);
    if (func_1BBB48(a, 0.0) < 0)
        v -= func_1BBC58(func_1BB5B8(0.0, a));
    else
        v += func_1BBC58(a);
    return v;
}
