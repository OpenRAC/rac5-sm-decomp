/* LEVEL_05:0x1D9588 -- placement copy of FRONTEND_023110.c: converts a double to an unsigned 64-bit integer in two 32-bit halves. */
typedef unsigned long long u64;

extern int func_1DA268(double a, double b);
extern double func_1D9D40(double a, double b);
extern unsigned int func_1DA378(double a);
extern double func_1D9770(u64 a);
extern double func_1D9C80(double a, double b);
extern double func_1D9CD8(double a, double b);

u64 __fixunsdfdi(double a)
{
    u64 v;
    double b;
    double d;

    if (func_1DA268(a, 0.0) < 0)
        return 0;
    b = func_1D9D40(a, 2.3283064365386963e-10);
    v = (u64)func_1DA378(b) << 32;
    if ((long long)v >= 0) {
        d = func_1D9770(v);
    } else {
        d = func_1D9770((v & 1) | (v >> 1));
        d = func_1D9C80(d, d);
    }
    a = func_1D9CD8(a, d);
    if (func_1DA268(a, 0.0) < 0)
        v -= func_1DA378(func_1D9CD8(0.0, a));
    else
        v += func_1DA378(a);
    return v;
}
