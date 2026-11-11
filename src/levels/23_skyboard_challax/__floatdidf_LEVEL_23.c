extern double func_1BE300(int value);
extern double func_1BDD88(double a, double b);
extern double func_1BDCC8(double a, double b);

double __floatdidf(long long value)
{
    double hi = func_1BDD88(func_1BDD88(func_1BE300((int)(value >> 32)), 65536.0), 65536.0);
    double lo;
    int low = (int)(value & 0xFFFFFFFF);

    lo = func_1BE300(low);
    if (low < 0)
        lo = func_1BDCC8(lo, 4294967296.0);
    return func_1BDCC8(hi, lo);
}
