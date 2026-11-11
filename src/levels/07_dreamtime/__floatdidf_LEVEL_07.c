extern double func_1FF238(int value);
extern double func_1FECC0(double a, double b);
extern double func_1FEC00(double a, double b);

double __floatdidf(long long value)
{
    double hi = func_1FECC0(func_1FECC0(func_1FF238((int)(value >> 32)), 65536.0), 65536.0);
    double lo;
    int low = (int)(value & 0xFFFFFFFF);

    lo = func_1FF238(low);
    if (low < 0)
        lo = func_1FEC00(lo, 4294967296.0);
    return func_1FEC00(hi, lo);
}
