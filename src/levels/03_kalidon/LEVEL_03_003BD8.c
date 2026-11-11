extern char *D_002078D4;

void func_003BD8(int value)
{
    unsigned long long *flags =
        (unsigned long long *)(D_002078D4 + 0x40);
    *flags = (*flags & ~(1ull << 10)) |
             ((value & 1ull) << 10);
}
