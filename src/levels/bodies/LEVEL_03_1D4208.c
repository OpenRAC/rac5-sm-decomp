void func_1D4208(char *object, int value)
{
    unsigned char state = *(unsigned char *)(object + 0x45);
    char *child = *(char **)(object + 0x58);
    if (state != 8)
        return;
    if (*(int *)(child + 0x24) == value)
        *(int *)(child + 0x24) = 0;
}
