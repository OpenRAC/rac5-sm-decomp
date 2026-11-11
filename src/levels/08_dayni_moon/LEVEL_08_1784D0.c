void func_1784D0(char *object, unsigned char value)
{
    char *child = *(char **)(object + 0x58);
    *(unsigned char *)(child + 0x1A) = value;
}
