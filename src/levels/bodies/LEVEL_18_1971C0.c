/* LEVEL_18:0x1971C0 -- placement copy of FRONTEND_023200.c: converts a double to an unsigned 64-bit integer. */
extern double func_198280(void);
extern int func_197DB0(double, double);
extern double func_197888(double, double);
extern unsigned int func_197EC0(double);
extern double func_1972B8(long long value);
extern double func_1977C8(double, double);
extern double func_197820(double, double);
unsigned long long func_1971C0(void)
{
    double a = func_198280();
    double b;
    double c;
    unsigned long long v;
    if (func_197DB0(a, 0.0) < 0)
        return 0;
    b = func_197888(a, 2.3283064365386963e-10);
    v = func_197EC0(b);
    v <<= 32;
    if ((long long)v >= 0)
        c = func_1972B8(v);
    else {
        c = func_1972B8((v & 1) | (v >> 1));
        c = func_1977C8(c, c);
    }
    a = func_197820(a, c);
    if (func_197DB0(a, 0.0) < 0)
        v -= func_197EC0(func_197820(0.0, a));
    else
        v += func_197EC0(a);
    return v;
}
