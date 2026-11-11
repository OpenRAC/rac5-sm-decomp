extern char *D_001C2654;

void func_0033A8(int value)
{
    unsigned long long *flags =
        (unsigned long long *)(D_001C2654 + 0x40);
    *flags = (*flags & ~(1ull << 3)) |
             ((value & 1ull) << 3);
}
