extern void func_045268(long long, int, int *, long long, long long, long long, long long, long long);

int func_045BE8(long long a, long long b, long long c, long long d, long long e, long long f)
{
    int output[4];
    output[0] = 0;
    func_045268(a, 1, output, b, c, d, e, f);
    return output[0];
}
