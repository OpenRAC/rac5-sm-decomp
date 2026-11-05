void func_158500(char *object)
{
    char *child = *(char **)(object + 0x58);
    *(unsigned char *)(object + 0x45) = 2;
    *(int *)(child + 0x1C) = 0;
    *(int *)(child + 0x20) = 0;
}
