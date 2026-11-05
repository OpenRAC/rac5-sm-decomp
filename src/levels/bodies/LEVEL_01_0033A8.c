extern char *D_001EF254;

void func_0033A8(unsigned long long value)
{
    unsigned long long *flags =
        (unsigned long long *)(D_001EF254 + 0x40);
    *flags = (*flags & ~(1ull << 3)) |
             ((value & 1ull) << 3);
}
