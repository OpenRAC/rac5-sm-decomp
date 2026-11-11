int func_15C010(char *object)
{
    char *child = *(char **)(object + 0x58);
    return *(unsigned char *)(child + 0xC) == 0;
}
