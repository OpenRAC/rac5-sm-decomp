extern char *D_001DE154;

void func_003568(unsigned long long value)
{
    unsigned long long *flags = (unsigned long long *)(D_001DE154 + 0x40);
    *flags = (*flags & ~(1ull << 19)) | ((value & 1ull) << 19);
}
