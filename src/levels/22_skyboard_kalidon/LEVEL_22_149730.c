extern double func_14A278(int value);
extern double func_149D00(double a, double b);
extern double func_149C40(double a, double b);

double func_149730(long long value)
{
    double hi = func_149D00(func_149D00(func_14A278((int)(value >> 32)), 65536.0), 65536.0);
    double lo;
    int low = (int)(value & 0xFFFFFFFF);

    lo = func_14A278(low);
    if (low < 0)
        lo = func_149C40(lo, 4294967296.0);
    return func_149C40(hi, lo);
}
