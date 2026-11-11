extern double func_1EAEC0(int value);
extern double func_1EA948(double a, double b);
extern double func_1EA888(double a, double b);

double __floatdidf(long long value)
{
    double hi = func_1EA948(func_1EA948(func_1EAEC0((int)(value >> 32)), 65536.0), 65536.0);
    double lo;
    int low = (int)(value & 0xFFFFFFFF);

    lo = func_1EAEC0(low);
    if (low < 0)
        lo = func_1EA888(lo, 4294967296.0);
    return func_1EA888(hi, lo);
}
