extern double func_1D4D28(int value);
extern double func_1D47B0(double a, double b);
extern double func_1D46F0(double a, double b);

double func_1D41E0(long long value)
{
    double hi = func_1D47B0(func_1D47B0(func_1D4D28((int)(value >> 32)), 65536.0), 65536.0);
    double lo;
    int low = (int)(value & 0xFFFFFFFF);

    lo = func_1D4D28(low);
    if (low < 0)
        lo = func_1D46F0(lo, 4294967296.0);
    return func_1D46F0(hi, lo);
}
