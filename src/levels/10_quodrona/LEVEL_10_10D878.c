extern void func_10D908(int, void *, long long, long long, long long);

void func_10D878(unsigned int value, long long a, long long b, long long c)
{
    func_10D908(0x40, (void *)((value + 0x40u) & ~0x3fu), a, b, c);
}
