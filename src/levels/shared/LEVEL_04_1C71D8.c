int func_1C71D8(char *object, int value)
{
    char *child = *(char **)(object + 0x54);
    return *(int *)(child + 4) == value;
}
