extern unsigned char *D_001E2EAC;

unsigned char func_025BA0(unsigned int index)
{
    if (index >= 100)
        return 0;
    return (*(D_001E2EAC + index + 0x1b60) >> 1) & 1u;
}
