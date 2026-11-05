extern char *D_001F8254;

void func_003158(unsigned long long value)
{
    unsigned long long *flags =
        (unsigned long long *)(D_001F8254 + 0x40);
    *flags = (*flags & ~(1ull << 3)) |
             ((value & 1ull) << 3);
}
