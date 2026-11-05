extern char *D_001F8254;

void func_003318(unsigned long long value)
{
    unsigned long long *flags = (unsigned long long *)(D_001F8254 + 0x40);
    *flags = (*flags & ~(1ull << 19)) | ((value & 1ull) << 19);
}
