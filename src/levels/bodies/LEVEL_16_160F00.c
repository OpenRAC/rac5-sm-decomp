void func_160F00(char *object, int value)
{
    char *child = *(char **)(object + 0x58);
    *(int *)(child + 0xA4) = value;
}
