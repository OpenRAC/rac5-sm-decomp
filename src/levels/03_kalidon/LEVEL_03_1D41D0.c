int func_1D41D0(char *object, int value)
{
    unsigned char state = *(unsigned char *)(object + 0x45);
    char *child = *(char **)(object + 0x58);
    if (state != 8)
        return 0;
    if (*(int *)(child + 0x24) != 0)
        return 0;
    *(int *)(child + 0x24) = value;
    return 1;
}
