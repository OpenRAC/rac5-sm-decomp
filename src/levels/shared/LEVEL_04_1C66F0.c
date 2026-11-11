int func_1C66F0(char *object, int value)
{
    char *child = *(char **)(object + 0x54);
    return *(int *)(child + 8) == value;
}
