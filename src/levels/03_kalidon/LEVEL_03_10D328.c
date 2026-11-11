extern void func_10D3B8(int, void *, long long, long long, long long);

void func_10D328(unsigned int value, long long a, long long b, long long c)
{
    func_10D3B8(0x40, (void *)((value + 0x40u) & ~0x3fu), a, b, c);
}
