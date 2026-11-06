extern double func_233A48(int value);
extern double func_2334D0(double a, double b);
extern double func_233410(double a, double b);

double func_232F00(long long value)
{
    double hi = func_2334D0(func_2334D0(func_233A48((int)(value >> 32)), 65536.0), 65536.0);
    double lo;
    int low = (int)(value & 0xFFFFFFFF);

    lo = func_233A48(low);
    if (low < 0)
        lo = func_233410(lo, 4294967296.0);
    return func_233410(hi, lo);
}
