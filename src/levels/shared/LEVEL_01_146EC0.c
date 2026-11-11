void func_146EC0(char *object, int value)
{
    char *component = *(char **)(object + 0x40);
    if (*(int *)(component + 0x24) == (int)0xE997AD78u)
        *(int *)(*(char **)(object + 0x58) + 0x0C) = value;
}
