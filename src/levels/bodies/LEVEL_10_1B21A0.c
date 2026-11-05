void func_1B21A0(char *object, int value)
{
    char *child = *(char **)(object + 0x58);
    *(int *)(child + 0x7E0) = value;
}
