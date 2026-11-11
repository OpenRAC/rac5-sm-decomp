void func_040F68(char *object)
{
    unsigned long long *flags = (unsigned long long *)(object + 0x960);
    *flags &= ~(1ULL << 36);
}
