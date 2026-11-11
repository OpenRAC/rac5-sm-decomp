void func_179878(char *object, int *first, int *second)
{
    char *child = *(char **)(object + 0x58);
    *first = *(int *)(child + 8);
    *second = *(int *)(child + 0x10);
}
