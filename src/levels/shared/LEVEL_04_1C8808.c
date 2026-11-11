void func_1C8808(char *object, int value)
{
    char *child = *(char **)(object + 0x58);
    *(int *)(child + 0x18) = value;
}
