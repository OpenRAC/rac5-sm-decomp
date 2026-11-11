extern char *D_002083D4;

void func_003370(unsigned long long value)
{
    unsigned long long *flags = (unsigned long long *)(D_002083D4 + 0x40);
    *flags = (*flags & ~(1ull << 19)) | ((value & 1ull) << 19);
}
