/* LEVEL_07:0x1FE508 -- placement copy of FRONTEND_023110.c: converts a double to an unsigned 64-bit integer in two 32-bit halves. */
typedef unsigned long long u64;

extern int func_1FF1E8(double a, double b);
extern double func_1FECC0(double a, double b);
extern unsigned int func_1FF2F8(double a);
extern double func_1FE6F0(u64 a);
extern double func_1FEC00(double a, double b);
extern double func_1FEC58(double a, double b);

u64 __fixunsdfdi(double a)
{
    u64 v;
    double b;
    double d;

    if (func_1FF1E8(a, 0.0) < 0)
        return 0;
    b = func_1FECC0(a, 2.3283064365386963e-10);
    v = (u64)func_1FF2F8(b) << 32;
    if ((long long)v >= 0) {
        d = func_1FE6F0(v);
    } else {
        d = func_1FE6F0((v & 1) | (v >> 1));
        d = func_1FEC00(d, d);
    }
    a = func_1FEC58(a, d);
    if (func_1FF1E8(a, 0.0) < 0)
        v -= func_1FF2F8(func_1FEC58(0.0, a));
    else
        v += func_1FF2F8(a);
    return v;
}
