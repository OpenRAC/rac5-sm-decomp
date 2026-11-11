void func_170158(char *object)
{
    char *child = *(char **)(object + 0x58);
    *(int *)(child + 0x1C) = -1;
    *(int *)(child + 0x58) = 0;
}
