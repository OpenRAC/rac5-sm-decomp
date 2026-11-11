/* LEVEL_24:0x1BAF58 -- placement copy of FRONTEND_023200.c: converts a double to an unsigned 64-bit integer. */
extern double func_1BC018(void);
extern int func_1BBB48(double, double);
extern double func_1BB620(double, double);
extern unsigned int func_1BBC58(double);
extern double func_1BB050(long long value);
extern double func_1BB560(double, double);
extern double func_1BB5B8(double, double);
unsigned long long func_1BAF58(void)
{
    double a = func_1BC018();
    double b;
    double c;
    unsigned long long v;
    if (func_1BBB48(a, 0.0) < 0)
        return 0;
    b = func_1BB620(a, 2.3283064365386963e-10);
    v = func_1BBC58(b);
    v <<= 32;
    if ((long long)v >= 0)
        c = func_1BB050(v);
    else {
        c = func_1BB050((v & 1) | (v >> 1));
        c = func_1BB560(c, c);
    }
    a = func_1BB5B8(a, c);
    if (func_1BBB48(a, 0.0) < 0)
        v -= func_1BBC58(func_1BB5B8(0.0, a));
    else
        v += func_1BBC58(a);
    return v;
}
