extern double func_1F3F18(int value);
extern double func_1F39A0(double a, double b);
extern double func_1F38E0(double a, double b);

double func_1F33D0(long long value)
{
    double hi = func_1F39A0(func_1F39A0(func_1F3F18((int)(value >> 32)), 65536.0), 65536.0);
    double lo;
    int low = (int)(value & 0xFFFFFFFF);

    lo = func_1F3F18(low);
    if (low < 0)
        lo = func_1F38E0(lo, 4294967296.0);
    return func_1F38E0(hi, lo);
}
