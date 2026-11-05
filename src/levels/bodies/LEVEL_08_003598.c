extern char *D_00237DD4;

void func_003598(unsigned long long value)
{
    unsigned long long *flags = (unsigned long long *)(D_00237DD4 + 0x40);
    *flags = (*flags & ~(1ull << 19)) | ((value & 1ull) << 19);
}
