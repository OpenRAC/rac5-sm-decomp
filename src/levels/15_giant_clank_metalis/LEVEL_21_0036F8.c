extern char *D_00143EBC;

void func_0036F8(int value)
{
    unsigned long long *flags =
        (unsigned long long *)(D_00143EBC + 0x40);
    *flags = (*flags & ~(1ull << 10)) |
             ((value & 1ull) << 10);
}
