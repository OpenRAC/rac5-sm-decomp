extern char *D_0018E2DC;

void func_003160(unsigned long long value)
{
    unsigned long long *flags = (unsigned long long *)(D_0018E2DC + 0x40);
    *flags = (*flags & ~(1ull << 19)) | ((value & 1ull) << 19);
}
