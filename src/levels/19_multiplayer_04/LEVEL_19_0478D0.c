extern void func_046EA8(long long, int, int *, long long, long long, long long, long long, long long);

int func_0478D0(long long a, long long b, long long c, long long d, long long e, long long f)
{
    int output[4];
    output[0] = 0;
    func_046EA8(a, 1, output, b, c, d, e, f);
    return output[0];
}
