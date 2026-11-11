/* LEVEL_05:0x1D9678 -- placement copy of FRONTEND_023200.c: converts a float, widened to double, to an unsigned 64-bit integer. */
extern double func_1DA738(float);
extern int func_1DA268(double, double);
extern double func_1D9D40(double, double);
extern unsigned int func_1DA378(double);
extern double func_1D9770(long long value);
extern double func_1D9C80(double, double);
extern double func_1D9CD8(double, double);
unsigned long long func_1D9678(float f)
{
    double a = func_1DA738(f);
    double b;
    double c;
    unsigned long long v;
    if (func_1DA268(a, 0.0) < 0)
        return 0;
    b = func_1D9D40(a, 2.3283064365386963e-10);
    v = func_1DA378(b);
    v <<= 32;
    if ((long long)v >= 0)
        c = func_1D9770(v);
    else {
        c = func_1D9770((v & 1) | (v >> 1));
        c = func_1D9C80(c, c);
    }
    a = func_1D9CD8(a, c);
    if (func_1DA268(a, 0.0) < 0)
        v -= func_1DA378(func_1D9CD8(0.0, a));
    else
        v += func_1DA378(a);
    return v;
}
