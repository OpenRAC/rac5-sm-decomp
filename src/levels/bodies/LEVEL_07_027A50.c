extern unsigned char *D_002082AC;

unsigned char func_027A50(unsigned int index)
{
    if (index >= 100)
        return 0;
    return (*(D_002082AC + index + 0x1b60) >> 1) & 1u;
}
