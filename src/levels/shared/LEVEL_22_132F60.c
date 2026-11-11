void func_132F60(char *object, unsigned char value)
{
    char *child = *(char **)(object + 0x54);
    *(unsigned char *)(child + 1) = value;
}
