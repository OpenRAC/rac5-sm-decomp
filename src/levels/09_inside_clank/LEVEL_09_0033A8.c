extern char *D_001D9054;

void func_0033A8(int value)
{
    unsigned long long *flags =
        (unsigned long long *)(D_001D9054 + 0x40);
    *flags = (*flags & ~(1ull << 3)) |
             ((value & 1ull) << 3);
}
