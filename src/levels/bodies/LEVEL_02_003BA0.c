extern char *D_00203ED4;

void func_003BA0(int value)
{
    unsigned long long *flags =
        (unsigned long long *)(D_00203ED4 + 0x40);
    *flags = (*flags & ~(1ull << 10)) |
             ((value & 1ull) << 10);
}
