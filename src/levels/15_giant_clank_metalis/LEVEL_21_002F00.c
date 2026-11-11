extern char *D_00143EBC;

void func_002F00(int value)
{
    unsigned long long *flags =
        (unsigned long long *)(D_00143EBC + 0x40);
    *flags = (*flags & ~(1ull << 3)) |
             ((value & 1ull) << 3);
}
