/* LEVEL_02:0x1FEF18 -- placement copy of FRONTEND_023200.c: converts a double to an unsigned 64-bit integer. */
extern double func_1FFFD8(void);
extern int func_1FFB08(double, double);
extern double func_1FF5E0(double, double);
extern unsigned int func_1FFC18(double);
extern double func_1FF010(long long value);
extern double func_1FF520(double, double);
extern double func_1FF578(double, double);
unsigned long long func_1FEF18(void)
{
    double a = func_1FFFD8();
    double b;
    double c;
    unsigned long long v;
    if (func_1FFB08(a, 0.0) < 0)
        return 0;
    b = func_1FF5E0(a, 2.3283064365386963e-10);
    v = func_1FFC18(b);
    v <<= 32;
    if ((long long)v >= 0)
        c = func_1FF010(v);
    else {
        c = func_1FF010((v & 1) | (v >> 1));
        c = func_1FF520(c, c);
    }
    a = func_1FF578(a, c);
    if (func_1FFB08(a, 0.0) < 0)
        v -= func_1FFC18(func_1FF578(0.0, a));
    else
        v += func_1FFC18(a);
    return v;
}
