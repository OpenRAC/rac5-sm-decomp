/* LEVEL_02:0x1FEE28 -- placement copy of FRONTEND_023110.c: converts a double to an unsigned 64-bit integer in two 32-bit halves. */
typedef unsigned long long u64;

extern int func_1FFB08(double a, double b);
extern double func_1FF5E0(double a, double b);
extern unsigned int func_1FFC18(double a);
extern double func_1FF010(u64 a);
extern double func_1FF520(double a, double b);
extern double func_1FF578(double a, double b);

u64 func_1FEE28(double a)
{
    u64 v;
    double b;
    double d;

    if (func_1FFB08(a, 0.0) < 0)
        return 0;
    b = func_1FF5E0(a, 2.3283064365386963e-10);
    v = (u64)func_1FFC18(b) << 32;
    if ((long long)v >= 0) {
        d = func_1FF010(v);
    } else {
        d = func_1FF010((v & 1) | (v >> 1));
        d = func_1FF520(d, d);
    }
    a = func_1FF578(a, d);
    if (func_1FFB08(a, 0.0) < 0)
        v -= func_1FFC18(func_1FF578(0.0, a));
    else
        v += func_1FFC18(a);
    return v;
}
