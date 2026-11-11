extern void func_101F18(int, void *, long long, long long, long long);

void func_101EC8(unsigned int value, long long a, long long b, long long c)
{
    func_101F18(0x40, (void *)((value + 0x40u) & ~0x3fu), a, b, c);
}
