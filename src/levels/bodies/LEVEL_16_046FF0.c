void func_046FF0(char *object)
{
    unsigned long long *flags = (unsigned long long *)(object + 0x960);
    *flags &= ~(1ULL << 36);
}
