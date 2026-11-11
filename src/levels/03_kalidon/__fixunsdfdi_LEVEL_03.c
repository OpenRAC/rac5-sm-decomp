/* LEVEL_03:0x202820 -- placement copy of FRONTEND_023110.c: converts a double to an unsigned 64-bit integer in two 32-bit halves. */
typedef unsigned long long u64;

extern int func_203500(double a, double b);
extern double func_202FD8(double a, double b);
extern unsigned int func_203610(double a);
extern double func_202A08(u64 a);
extern double func_202F18(double a, double b);
extern double func_202F70(double a, double b);

u64 __fixunsdfdi(double a)
{
    u64 v;
    double b;
    double d;

    if (func_203500(a, 0.0) < 0)
        return 0;
    b = func_202FD8(a, 2.3283064365386963e-10);
    v = (u64)func_203610(b) << 32;
    if ((long long)v >= 0) {
        d = func_202A08(v);
    } else {
        d = func_202A08((v & 1) | (v >> 1));
        d = func_202F18(d, d);
    }
    a = func_202F70(a, d);
    if (func_203500(a, 0.0) < 0)
        v -= func_203610(func_202F70(0.0, a));
    else
        v += func_203610(a);
    return v;
}
