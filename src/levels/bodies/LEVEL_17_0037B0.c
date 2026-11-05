extern char *D_0018E2DC;

void func_0037B0(unsigned long long value)
{
    unsigned long long *flags =
        (unsigned long long *)(D_0018E2DC + 0x40);
    *flags = (*flags & ~(1ull << 11)) |
             ((value & 1ull) << 11);
}
