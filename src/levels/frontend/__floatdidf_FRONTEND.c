/* FRONTEND:0x0232F8 -- placement copy of LEVEL_01_1EA378.c. */
extern double func_023E40(int value);
extern double func_0238C8(double a, double b);
extern double func_023808(double a, double b);

double __floatdidf(long long value)
{
    double hi = func_0238C8(func_0238C8(func_023E40((int)(value >> 32)), 65536.0), 65536.0);
    double lo;
    int low = (int)(value & 0xFFFFFFFF);

    lo = func_023E40(low);
    if (low < 0)
        lo = func_023808(lo, 4294967296.0);
    return func_023808(hi, lo);
}
