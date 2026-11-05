int func_1C3008(char *object, int value)
{
    char *child = *(char **)(object + 0x54);
    return *(int *)child == value;
}
