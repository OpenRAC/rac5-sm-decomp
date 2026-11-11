/* LEVEL_22:0x149548 -- placement copy of FRONTEND_023110.c: converts a double to an unsigned 64-bit integer in two 32-bit halves. */
typedef unsigned long long u64;

extern int func_14A228(double a, double b);
extern double func_149D00(double a, double b);
extern unsigned int func_14A338(double a);
extern double func_149730(u64 a);
extern double func_149C40(double a, double b);
extern double func_149C98(double a, double b);

u64 __fixunsdfdi(double a)
{
    u64 v;
    double b;
    double d;

    if (func_14A228(a, 0.0) < 0)
        return 0;
    b = func_149D00(a, 2.3283064365386963e-10);
    v = (u64)func_14A338(b) << 32;
    if ((long long)v >= 0) {
        d = func_149730(v);
    } else {
        d = func_149730((v & 1) | (v >> 1));
        d = func_149C40(d, d);
    }
    a = func_149C98(a, d);
    if (func_14A228(a, 0.0) < 0)
        v -= func_14A338(func_149C98(0.0, a));
    else
        v += func_14A338(a);
    return v;
}
