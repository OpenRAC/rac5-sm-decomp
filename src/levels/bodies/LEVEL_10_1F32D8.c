/* LEVEL_10:0x1F32D8 -- placement copy of FRONTEND_023200.c: converts a double to an unsigned 64-bit integer. */
extern double func_1F4398(void);
extern int func_1F3EC8(double, double);
extern double func_1F39A0(double, double);
extern unsigned int func_1F3FD8(double);
extern double func_1F33D0(long long value);
extern double func_1F38E0(double, double);
extern double func_1F3938(double, double);
unsigned long long func_1F32D8(void)
{
    double a = func_1F4398();
    double b;
    double c;
    unsigned long long v;
    if (func_1F3EC8(a, 0.0) < 0)
        return 0;
    b = func_1F39A0(a, 2.3283064365386963e-10);
    v = func_1F3FD8(b);
    v <<= 32;
    if ((long long)v >= 0)
        c = func_1F33D0(v);
    else {
        c = func_1F33D0((v & 1) | (v >> 1));
        c = func_1F38E0(c, c);
    }
    a = func_1F3938(a, c);
    if (func_1F3EC8(a, 0.0) < 0)
        v -= func_1F3FD8(func_1F3938(0.0, a));
    else
        v += func_1F3FD8(a);
    return v;
}
