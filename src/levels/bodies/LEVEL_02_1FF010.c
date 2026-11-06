extern double func_1FFB58(int value);
extern double func_1FF5E0(double a, double b);
extern double func_1FF520(double a, double b);

double func_1FF010(long long value)
{
    double hi = func_1FF5E0(func_1FF5E0(func_1FFB58((int)(value >> 32)), 65536.0), 65536.0);
    double lo;
    int low = (int)(value & 0xFFFFFFFF);

    lo = func_1FFB58(low);
    if (low < 0)
        lo = func_1FF520(lo, 4294967296.0);
    return func_1FF520(hi, lo);
}
