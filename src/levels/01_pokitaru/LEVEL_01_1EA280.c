/* LEVEL_01:0x1EA280 -- placement copy of FRONTEND_023200.c: converts a float, widened to double, to an unsigned 64-bit integer. */
extern double func_1EB340(float);
extern int func_1EAE70(double, double);
extern double func_1EA948(double, double);
extern unsigned int func_1EAF80(double);
extern double func_1EA378(long long value);
extern double func_1EA888(double, double);
extern double func_1EA8E0(double, double);
unsigned long long func_1EA280(float f)
{
    double a = func_1EB340(f);
    double b;
    double c;
    unsigned long long v;
    if (func_1EAE70(a, 0.0) < 0)
        return 0;
    b = func_1EA948(a, 2.3283064365386963e-10);
    v = func_1EAF80(b);
    v <<= 32;
    if ((long long)v >= 0)
        c = func_1EA378(v);
    else {
        c = func_1EA378((v & 1) | (v >> 1));
        c = func_1EA888(c, c);
    }
    a = func_1EA8E0(a, c);
    if (func_1EAE70(a, 0.0) < 0)
        v -= func_1EAF80(func_1EA8E0(0.0, a));
    else
        v += func_1EAF80(a);
    return v;
}
