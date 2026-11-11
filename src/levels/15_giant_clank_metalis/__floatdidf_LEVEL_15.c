extern double func_13FBB8(int value);
extern double func_13F640(double a, double b);
extern double func_13F580(double a, double b);

double __floatdidf(long long value)
{
    double hi = func_13F640(func_13F640(func_13FBB8((int)(value >> 32)), 65536.0), 65536.0);
    double lo;
    int low = (int)(value & 0xFFFFFFFF);

    lo = func_13FBB8(low);
    if (low < 0)
        lo = func_13F580(lo, 4294967296.0);
    return func_13F580(hi, lo);
}
