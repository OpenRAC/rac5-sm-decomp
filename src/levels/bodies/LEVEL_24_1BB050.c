extern double func_1BBB98(int value);
extern double func_1BB620(double a, double b);
extern double func_1BB560(double a, double b);

double func_1BB050(long long value)
{
    double hi = func_1BB620(func_1BB620(func_1BBB98((int)(value >> 32)), 65536.0), 65536.0);
    double lo;
    int low = (int)(value & 0xFFFFFFFF);

    lo = func_1BBB98(low);
    if (low < 0)
        lo = func_1BB560(lo, 4294967296.0);
    return func_1BB560(hi, lo);
}
