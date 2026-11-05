void func_16E688(char *object, int value)
{
    char *child = *(char **)(object + 0x58);
    *(int *)(child + 4) = value;
}
