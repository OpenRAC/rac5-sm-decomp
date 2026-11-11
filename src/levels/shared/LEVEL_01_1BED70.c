int func_1BED70(char *object, int value)
{
    unsigned char state = *(unsigned char *)(object + 0x45);
    char *child = *(char **)(object + 0x58);
    if (state != 6)
        return 0;
    if (*(int *)(child + 0x5C) != 0)
        return 0;
    *(int *)(child + 0x5C) = value;
    return 1;
}
