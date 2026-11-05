int func_17CB10(char *object)
{
    char *component = *(char **)(object + 0x40);
    if (*(unsigned int *)(component + 0x24) == 0x4B6F098Cu)
        return *(int *)(*(char **)(object + 0x58) + 4);
    return 0;
}
