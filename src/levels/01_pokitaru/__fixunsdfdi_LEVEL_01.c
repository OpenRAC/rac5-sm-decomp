/* LEVEL_01:0x1EA190 -- placement copy of FRONTEND_023110.c: converts a double to an unsigned 64-bit integer in two 32-bit halves. */
typedef unsigned long long u64;

extern int func_1EAE70(double a, double b);
extern double func_1EA948(double a, double b);
extern unsigned int func_1EAF80(double a);
extern double func_1EA378(u64 a);
extern double func_1EA888(double a, double b);
extern double func_1EA8E0(double a, double b);

u64 __fixunsdfdi(double a)
{
    u64 v;
    double b;
    double d;

    if (func_1EAE70(a, 0.0) < 0)
        return 0;
    b = func_1EA948(a, 2.3283064365386963e-10);
    v = (u64)func_1EAF80(b) << 32;
    if ((long long)v >= 0) {
        d = func_1EA378(v);
    } else {
        d = func_1EA378((v & 1) | (v >> 1));
        d = func_1EA888(d, d);
    }
    a = func_1EA8E0(a, d);
    if (func_1EAE70(a, 0.0) < 0)
        v -= func_1EAF80(func_1EA8E0(0.0, a));
    else
        v += func_1EAF80(a);
    return v;
}
