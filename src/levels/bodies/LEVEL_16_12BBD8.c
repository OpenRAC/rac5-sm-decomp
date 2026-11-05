int func_12BBD8(char *object)
{
    char *child = *(char **)(object + 0x40);
    if (*(unsigned int *)(child + 0x24) != 0xE997AD78u)
        return 0;
    return *(int *)(*(char **)(object + 0x58) + 0xC);
}
