/* LEVEL_20:0x0F8450 -- placement copy of FRONTEND_023200.c: converts a double to an unsigned 64-bit integer. */
extern double func_0F9510(void);
extern int func_0F9040(double, double);
extern double func_0F8B18(double, double);
extern unsigned int func_0F9150(double);
extern double func_0F8548(long long value);
extern double func_0F8A58(double, double);
extern double func_0F8AB0(double, double);
unsigned long long func_0F8450(void)
{
    double a = func_0F9510();
    double b;
    double c;
    unsigned long long v;
    if (func_0F9040(a, 0.0) < 0)
        return 0;
    b = func_0F8B18(a, 2.3283064365386963e-10);
    v = func_0F9150(b);
    v <<= 32;
    if ((long long)v >= 0)
        c = func_0F8548(v);
    else {
        c = func_0F8548((v & 1) | (v >> 1));
        c = func_0F8A58(c, c);
    }
    a = func_0F8AB0(a, c);
    if (func_0F9040(a, 0.0) < 0)
        v -= func_0F9150(func_0F8AB0(0.0, a));
    else
        v += func_0F9150(a);
    return v;
}
