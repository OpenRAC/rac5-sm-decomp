extern double func_189FA8(int value);
extern double func_189A30(double a, double b);
extern double func_189970(double a, double b);

double __floatdidf(long long value)
{
    double hi = func_189A30(func_189A30(func_189FA8((int)(value >> 32)), 65536.0), 65536.0);
    double lo;
    int low = (int)(value & 0xFFFFFFFF);

    lo = func_189FA8(low);
    if (low < 0)
        lo = func_189970(lo, 4294967296.0);
    return func_189970(hi, lo);
}
