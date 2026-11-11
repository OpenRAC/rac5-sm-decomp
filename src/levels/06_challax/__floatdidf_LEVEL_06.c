extern double func_1D9E08(int value);
extern double func_1D9890(double a, double b);
extern double func_1D97D0(double a, double b);

double __floatdidf(long long value)
{
    double hi = func_1D9890(func_1D9890(func_1D9E08((int)(value >> 32)), 65536.0), 65536.0);
    double lo;
    int low = (int)(value & 0xFFFFFFFF);

    lo = func_1D9E08(low);
    if (low < 0)
        lo = func_1D97D0(lo, 4294967296.0);
    return func_1D97D0(hi, lo);
}
