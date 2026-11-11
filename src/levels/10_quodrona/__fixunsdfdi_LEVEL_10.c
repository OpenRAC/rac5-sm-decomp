/* LEVEL_10:0x1F31E8 -- placement copy of FRONTEND_023110.c: converts a double to an unsigned 64-bit integer in two 32-bit halves. */
typedef unsigned long long u64;

extern int func_1F3EC8(double a, double b);
extern double func_1F39A0(double a, double b);
extern unsigned int func_1F3FD8(double a);
extern double func_1F33D0(u64 a);
extern double func_1F38E0(double a, double b);
extern double func_1F3938(double a, double b);

u64 __fixunsdfdi(double a)
{
    u64 v;
    double b;
    double d;

    if (func_1F3EC8(a, 0.0) < 0)
        return 0;
    b = func_1F39A0(a, 2.3283064365386963e-10);
    v = (u64)func_1F3FD8(b) << 32;
    if ((long long)v >= 0) {
        d = func_1F33D0(v);
    } else {
        d = func_1F33D0((v & 1) | (v >> 1));
        d = func_1F38E0(d, d);
    }
    a = func_1F3938(a, d);
    if (func_1F3EC8(a, 0.0) < 0)
        v -= func_1F3FD8(func_1F3938(0.0, a));
    else
        v += func_1F3FD8(a);
    return v;
}
