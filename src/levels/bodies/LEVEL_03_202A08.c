extern double func_203550(int value);
extern double func_202FD8(double a, double b);
extern double func_202F18(double a, double b);

double func_202A08(long long value)
{
    double hi = func_202FD8(func_202FD8(func_203550((int)(value >> 32)), 65536.0), 65536.0);
    double lo;
    int low = (int)(value & 0xFFFFFFFF);

    lo = func_203550(low);
    if (low < 0)
        lo = func_202F18(lo, 4294967296.0);
    return func_202F18(hi, lo);
}
