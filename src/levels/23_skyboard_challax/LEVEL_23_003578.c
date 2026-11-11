extern char *D_001C2654;

void func_003578(unsigned long long value)
{
    unsigned long long *flags = (unsigned long long *)(D_001C2654 + 0x40);
    *flags = (*flags & ~(1ull << 19)) | ((value & 1ull) << 19);
}
