void func_023B90(char *object, int value)
{
    if (*(int *)(object + 0x9A0) != value)
        *(int *)(object + 0x9C0) = value;
}
