extern double func_0F9090(int value);
extern double func_0F8B18(double a, double b);
extern double func_0F8A58(double a, double b);

double __floatdidf(long long value)
{
    double hi = func_0F8B18(func_0F8B18(func_0F9090((int)(value >> 32)), 65536.0), 65536.0);
    double lo;
    int low = (int)(value & 0xFFFFFFFF);

    lo = func_0F9090(low);
    if (low < 0)
        lo = func_0F8A58(lo, 4294967296.0);
    return func_0F8A58(hi, lo);
}
