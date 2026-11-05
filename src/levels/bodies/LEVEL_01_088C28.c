int func_088C28(char *object)
{
    unsigned int flags = *(unsigned int *)(object + 0x20);
    if (flags & 1)
        return 1;
    if (flags & 2)
        return 0;
    return (*(unsigned short *)(*(char **)(object + 4) + 0x2C) >> 1) & 1;
}
