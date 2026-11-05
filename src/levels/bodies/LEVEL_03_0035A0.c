extern char *D_002078D4;

void func_0035A0(unsigned long long value)
{
    unsigned long long *flags = (unsigned long long *)(D_002078D4 + 0x40);
    *flags = (*flags & ~(1ull << 19)) | ((value & 1ull) << 19);
}
