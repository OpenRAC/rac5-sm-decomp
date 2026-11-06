extern void func_04C8B0(long long, int, int *, long long, long long, long long, long long, long long);

int func_04D230(long long a, long long b, long long c, long long d, long long e, long long f)
{
    int output[4];
    output[0] = 0;
    func_04C8B0(a, 1, output, b, c, d, e, f);
    return output[0];
}
