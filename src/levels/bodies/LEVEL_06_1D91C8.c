/* LEVEL_06:0x1D91C8 -- placement copy of FRONTEND_023200.c: converts a double to an unsigned 64-bit integer. */
extern double func_1DA288(void);
extern int func_1D9DB8(double, double);
extern double func_1D9890(double, double);
extern unsigned int func_1D9EC8(double);
extern double func_1D92C0(long long value);
extern double func_1D97D0(double, double);
extern double func_1D9828(double, double);
unsigned long long func_1D91C8(void)
{
    double a = func_1DA288();
    double b;
    double c;
    unsigned long long v;
    if (func_1D9DB8(a, 0.0) < 0)
        return 0;
    b = func_1D9890(a, 2.3283064365386963e-10);
    v = func_1D9EC8(b);
    v <<= 32;
    if ((long long)v >= 0)
        c = func_1D92C0(v);
    else {
        c = func_1D92C0((v & 1) | (v >> 1));
        c = func_1D97D0(c, c);
    }
    a = func_1D9828(a, c);
    if (func_1D9DB8(a, 0.0) < 0)
        v -= func_1D9EC8(func_1D9828(0.0, a));
    else
        v += func_1D9EC8(a);
    return v;
}
