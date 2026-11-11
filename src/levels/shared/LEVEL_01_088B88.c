unsigned int func_088B88(char *object)
{
    int flags = *(int *)(object + 0x20);
    *(unsigned int *)(object + 0x20) = flags & ~4u;
    return (flags >> 2) & 1;
}
