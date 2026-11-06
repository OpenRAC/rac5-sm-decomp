extern double func_197B28(int value);
extern double func_1975B0(double a, double b);
extern double func_1974F0(double a, double b);

double func_196FE0(long long value)
{
    double hi = func_1975B0(func_1975B0(func_197B28((int)(value >> 32)), 65536.0), 65536.0);
    double lo;
    int low = (int)(value & 0xFFFFFFFF);

    lo = func_197B28(low);
    if (low < 0)
        lo = func_1974F0(lo, 4294967296.0);
    return func_1974F0(hi, lo);
}
