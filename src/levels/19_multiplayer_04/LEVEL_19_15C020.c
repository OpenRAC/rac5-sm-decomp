void func_15C020(char *object)
{
    char *child = *(char **)(object + 0x58);
    *(unsigned char *)(child + 0xC) = 3;
    *(int *)(child + 8) = 0;
}
