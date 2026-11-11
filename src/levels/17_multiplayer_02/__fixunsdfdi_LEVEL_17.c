/* LEVEL_17:0x189278 -- placement copy of FRONTEND_023110.c: converts a double to an unsigned 64-bit integer in two 32-bit halves. */
typedef unsigned long long u64;

extern int func_189F58(double a, double b);
extern double func_189A30(double a, double b);
extern unsigned int func_18A068(double a);
extern double func_189460(u64 a);
extern double func_189970(double a, double b);
extern double func_1899C8(double a, double b);

u64 __fixunsdfdi(double a)
{
    u64 v;
    double b;
    double d;

    if (func_189F58(a, 0.0) < 0)
        return 0;
    b = func_189A30(a, 2.3283064365386963e-10);
    v = (u64)func_18A068(b) << 32;
    if ((long long)v >= 0) {
        d = func_189460(v);
    } else {
        d = func_189460((v & 1) | (v >> 1));
        d = func_189970(d, d);
    }
    a = func_1899C8(a, d);
    if (func_189F58(a, 0.0) < 0)
        v -= func_18A068(func_1899C8(0.0, a));
    else
        v += func_18A068(a);
    return v;
}
