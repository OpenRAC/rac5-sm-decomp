void func_171B88(char *object, int value)
{
    char *child = *(char **)(object + 0x58);
    *(int *)(child + 0x78) = value;
    *(int *)(child + 0x94) = value;
}
