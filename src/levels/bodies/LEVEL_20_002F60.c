extern char *D_000FD3C4;

void func_002F60(unsigned long long value)
{
    unsigned long long *flags =
        (unsigned long long *)(D_000FD3C4 + 0x40);
    *flags = (*flags & ~(1ull << 3)) |
             ((value & 1ull) << 3);
}
