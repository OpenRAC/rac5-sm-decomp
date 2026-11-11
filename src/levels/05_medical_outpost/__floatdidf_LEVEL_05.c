extern double func_1DA2B8(int value);
extern double func_1D9D40(double a, double b);
extern double func_1D9C80(double a, double b);

double __floatdidf(long long value)
{
    double hi = func_1D9D40(func_1D9D40(func_1DA2B8((int)(value >> 32)), 65536.0), 65536.0);
    double lo;
    int low = (int)(value & 0xFFFFFFFF);

    lo = func_1DA2B8(low);
    if (low < 0)
        lo = func_1D9C80(lo, 4294967296.0);
    return func_1D9C80(hi, lo);
}
