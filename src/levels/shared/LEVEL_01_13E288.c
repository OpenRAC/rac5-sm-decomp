void func_13E288(char *object, int value)
{
    char *child = *(char **)(object + 0x58);
    *(int *)(child + 0x6C) = value;
}
