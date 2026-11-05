int func_04EB18(char *object, unsigned int flags)
{
    if (flags & 0x8000) {
        *(unsigned short *)(object + 0x102) = 9;
        return 1;
    }
    if (flags & 0x1000) {
        *(unsigned short *)(object + 0x102) = 0;
        return 1;
    }
    return 0;
}
