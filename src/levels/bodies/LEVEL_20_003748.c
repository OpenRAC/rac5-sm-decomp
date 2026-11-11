extern char *D_000FD3C4;

void func_003748(int value)
{
    unsigned long long *flags =
        (unsigned long long *)(D_000FD3C4 + 0x40);
    *flags = (*flags & ~(1ull << 10)) |
             ((value & 1ull) << 10);
}
