extern double func_197E00(int value);
extern double func_197888(double a, double b);
extern double func_1977C8(double a, double b);

double __floatdidf(long long value)
{
    double hi = func_197888(func_197888(func_197E00((int)(value >> 32)), 65536.0), 65536.0);
    double lo;
    int low = (int)(value & 0xFFFFFFFF);

    lo = func_197E00(low);
    if (low < 0)
        lo = func_1977C8(lo, 4294967296.0);
    return func_1977C8(hi, lo);
}
