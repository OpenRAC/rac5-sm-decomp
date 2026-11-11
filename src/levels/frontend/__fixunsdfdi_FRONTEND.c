/* FRONTEND:0x023110 -- converts a double to an unsigned 64-bit integer in two 32-bit halves. */
typedef unsigned long long u64;

extern int func_023DF0(double a, double b);
extern double func_0238C8(double a, double b);
extern unsigned int func_023F00(double a);
extern double func_0232F8(u64 a);
extern double func_023808(double a, double b);
extern double func_023860(double a, double b);

u64 __fixunsdfdi(double a)
{
    u64 v;
    double b;
    double d;

    if (func_023DF0(a, 0.0) < 0)
        return 0;
    b = func_0238C8(a, 2.3283064365386963e-10);
    v = (u64)func_023F00(b) << 32;
    if ((long long)v >= 0) {
        d = func_0232F8(v);
    } else {
        d = func_0232F8((v & 1) | (v >> 1));
        d = func_023808(d, d);
    }
    a = func_023860(a, d);
    if (func_023DF0(a, 0.0) < 0)
        v -= func_023F00(func_023860(0.0, a));
    else
        v += func_023F00(a);
    return v;
}
