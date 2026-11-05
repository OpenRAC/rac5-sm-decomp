extern char *D_00143EBC;

void func_003720(unsigned long long value)
{
    unsigned long long *flags =
        (unsigned long long *)(D_00143EBC + 0x40);
    *flags = (*flags & ~(1ull << 11)) |
             ((value & 1ull) << 11);
}
