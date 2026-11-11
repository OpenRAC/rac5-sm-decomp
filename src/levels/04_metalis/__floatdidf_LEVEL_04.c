extern double func_204080(int value);
extern double func_203B08(double a, double b);
extern double func_203A48(double a, double b);

double __floatdidf(long long value)
{
    double hi = func_203B08(func_203B08(func_204080((int)(value >> 32)), 65536.0), 65536.0);
    double lo;
    int low = (int)(value & 0xFFFFFFFF);

    lo = func_204080(low);
    if (low < 0)
        lo = func_203A48(lo, 4294967296.0);
    return func_203A48(hi, lo);
}
