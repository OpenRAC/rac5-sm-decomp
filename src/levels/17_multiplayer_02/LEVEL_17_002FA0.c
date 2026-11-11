extern char *D_0018E2DC;

void func_002FA0(int value)
{
    unsigned long long *flags =
        (unsigned long long *)(D_0018E2DC + 0x40);
    *flags = (*flags & ~(1ull << 3)) |
             ((value & 1ull) << 3);
}
