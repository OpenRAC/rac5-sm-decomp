void func_170108(char *object, int first, int second)
{
    char *child = *(char **)(object + 0x58);
    *(int *)(child + 0x58) = second;
    *(int *)(child + 0x20) = first;
    *(int *)(child + 0x1C) = 0;
}
