unsigned char func_023B70(char *object)
{
    unsigned char *part = *(unsigned char **)(object + 0x5A4);
    if (part == 0)
        return 0xFE;
    return part[0x45];
}
