void func_12B2A8(char *node)
{
    char *next = *(char **)node;
    if (next != 0)
        *(char **)(next + 0x10) = node;
}
