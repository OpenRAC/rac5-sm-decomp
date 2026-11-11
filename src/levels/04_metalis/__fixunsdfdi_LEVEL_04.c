/* LEVEL_04:0x203350 -- placement copy of FRONTEND_023110.c: converts a double to an unsigned 64-bit integer in two 32-bit halves. */
typedef unsigned long long u64;

extern int func_204030(double a, double b);
extern double func_203B08(double a, double b);
extern unsigned int func_204140(double a);
extern double func_203538(u64 a);
extern double func_203A48(double a, double b);
extern double func_203AA0(double a, double b);

u64 __fixunsdfdi(double a)
{
    u64 v;
    double b;
    double d;

    if (func_204030(a, 0.0) < 0)
        return 0;
    b = func_203B08(a, 2.3283064365386963e-10);
    v = (u64)func_204140(b) << 32;
    if ((long long)v >= 0) {
        d = func_203538(v);
    } else {
        d = func_203538((v & 1) | (v >> 1));
        d = func_203A48(d, d);
    }
    a = func_203AA0(a, d);
    if (func_204030(a, 0.0) < 0)
        v -= func_204140(func_203AA0(0.0, a));
    else
        v += func_204140(a);
    return v;
}
