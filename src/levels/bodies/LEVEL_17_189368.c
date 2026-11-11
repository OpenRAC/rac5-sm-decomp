/* LEVEL_17:0x189368 -- placement copy of FRONTEND_023200.c: converts a float, widened to double, to an unsigned 64-bit integer. */
extern double func_18A428(float);
extern int func_189F58(double, double);
extern double func_189A30(double, double);
extern unsigned int func_18A068(double);
extern double func_189460(long long value);
extern double func_189970(double, double);
extern double func_1899C8(double, double);
unsigned long long func_189368(float f)
{
    double a = func_18A428(f);
    double b;
    double c;
    unsigned long long v;
    if (func_189F58(a, 0.0) < 0)
        return 0;
    b = func_189A30(a, 2.3283064365386963e-10);
    v = func_18A068(b);
    v <<= 32;
    if ((long long)v >= 0)
        c = func_189460(v);
    else {
        c = func_189460((v & 1) | (v >> 1));
        c = func_189970(c, c);
    }
    a = func_1899C8(a, c);
    if (func_189F58(a, 0.0) < 0)
        v -= func_18A068(func_1899C8(0.0, a));
    else
        v += func_18A068(a);
    return v;
}
