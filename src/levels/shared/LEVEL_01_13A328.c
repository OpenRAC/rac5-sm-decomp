void func_13A328(char *object, unsigned int mask, unsigned int bits)
{
    char *child = *(char **)(object + 0x58);
    unsigned short *flags = (unsigned short *)(child + 0xC);
    *flags = (*flags & mask) | bits;
}
