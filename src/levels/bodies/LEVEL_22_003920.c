extern char *D_0014E5D4;

void func_003920(int value)
{
    unsigned long long *flags =
        (unsigned long long *)(D_0014E5D4 + 0x40);
    *flags = (*flags & ~(1ull << 10)) |
             ((value & 1ull) << 10);
}
