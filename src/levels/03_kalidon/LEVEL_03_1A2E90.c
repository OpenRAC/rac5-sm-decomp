void func_1A2E90(char *object, int value)
{
    char *child = *(char **)(object + 0x58);
    *(int *)(object + 0x64) &= -17;
    *(int *)(child + 0x64) = value;
}
