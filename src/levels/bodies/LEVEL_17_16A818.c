int func_16A818(char *object)
{
    char *child = *(char **)(object + 0x58);
    return *(unsigned char *)(child + 0x1C) != 0;
}
