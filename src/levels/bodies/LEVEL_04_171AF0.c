int func_171AF0(char *object)
{
    if (*(unsigned char *)(object + 0x45) != 3)
        return 0;
    return *(int *)(*(char **)(object + 0x58) + 0x64);
}
