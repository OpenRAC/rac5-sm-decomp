extern void func_11AC58(int, void *, long long, long long, long long);

void func_11ABC8(unsigned int value, long long a, long long b, long long c)
{
    func_11AC58(0x40, (void *)((value + 0x40u) & ~0x3fu), a, b, c);
}
