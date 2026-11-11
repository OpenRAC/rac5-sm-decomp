char *func_1A0F80(char *object)
{
    char *child = *(char **)(object + 0x58);
    if (*(unsigned char *)(child + 0x80) == 0)
        return 0;
    return child;
}
