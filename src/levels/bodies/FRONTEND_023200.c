/* FRONTEND:0x023200 -- converts a double to an unsigned 64-bit integer. */
extern double func_024140(void);
extern int func_023DF0(double, double);
extern double func_0238C8(double, double);
extern unsigned int func_023F00(double);
extern double func_0232F8(long long value);
extern double func_023808(double, double);
extern double func_023860(double, double);
unsigned long long func_023200(void)
{
    double a = func_024140();
    double b;
    double c;
    unsigned long long v;
    if (func_023DF0(a, 0.0) < 0)
        return 0;
    b = func_0238C8(a, 2.3283064365386963e-10);
    v = func_023F00(b);
    v <<= 32;
    if ((long long)v >= 0)
        c = func_0232F8(v);
    else {
        c = func_0232F8((v & 1) | (v >> 1));
        c = func_023808(c, c);
    }
    a = func_023860(a, c);
    if (func_023DF0(a, 0.0) < 0)
        v -= func_023F00(func_023860(0.0, a));
    else
        v += func_023F00(a);
    return v;
}
