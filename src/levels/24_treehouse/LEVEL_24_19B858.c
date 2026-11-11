int func_19B858(char *object)
{
    char *owner;
    char *entry;
    int result;

    if (object == 0)
        return 0;
    owner = *(char **)(object + 0x58);
    entry = *(char **)owner;
    if ((*(unsigned long long *)(entry + 0x960) &
         0x1000000000000000ULL) != 0)
        return 0;
    result = 0;
    if (*(unsigned char *)(object + 0x46) == 0 &&
        *(int *)(entry + 0x36C) != 0x37 &&
        *(float *)(owner + 0xDC) == 0.0f)
        result = 1;
    return result;
}
