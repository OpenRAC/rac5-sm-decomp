/* LEVEL_09:0x1D40E8 -- placement copy of FRONTEND_023200.c: converts a double to an unsigned 64-bit integer. */
extern double func_1D51A8(void);
extern int func_1D4CD8(double, double);
extern double func_1D47B0(double, double);
extern unsigned int func_1D4DE8(double);
extern double func_1D41E0(long long value);
extern double func_1D46F0(double, double);
extern double func_1D4748(double, double);
unsigned long long func_1D40E8(void)
{
    double a = func_1D51A8();
    double b;
    double c;
    unsigned long long v;
    if (func_1D4CD8(a, 0.0) < 0)
        return 0;
    b = func_1D47B0(a, 2.3283064365386963e-10);
    v = func_1D4DE8(b);
    v <<= 32;
    if ((long long)v >= 0)
        c = func_1D41E0(v);
    else {
        c = func_1D41E0((v & 1) | (v >> 1));
        c = func_1D46F0(c, c);
    }
    a = func_1D4748(a, c);
    if (func_1D4CD8(a, 0.0) < 0)
        v -= func_1D4DE8(func_1D4748(0.0, a));
    else
        v += func_1D4DE8(a);
    return v;
}
