void func_06AE18(char *object, unsigned int enabled)
{
    long long *word = (long long *)(object + 0xF10);
    *word = (*word & -5LL) | ((long long)(enabled & 1) << 2);
}
