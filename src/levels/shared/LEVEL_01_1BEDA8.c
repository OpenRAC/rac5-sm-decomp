void func_1BEDA8(char *object, int value)
{
    unsigned char state = *(unsigned char *)(object + 0x45);
    char *child = *(char **)(object + 0x58);
    if (state != 6)
        return;
    if (*(int *)(child + 0x5C) == value)
        *(int *)(child + 0x5C) = 0;
}
