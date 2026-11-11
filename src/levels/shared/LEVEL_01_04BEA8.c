int func_04BEA8(char *object)
{
    if ((*(unsigned long long *)(object + 0x960) & 0x40000000000000ULL) != 0)
        return 1;
    if (*(short *)(object + 0x100) == 31)
        return *(unsigned short *)(object + 0x108) == 3;
    return 0;
}
