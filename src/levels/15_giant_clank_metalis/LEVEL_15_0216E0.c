extern unsigned char *D_00148C2C;

unsigned char func_0216E0(unsigned int index)
{
    if (index >= 100)
        return 0;
    return (*(D_00148C2C + index + 0x1b60) >> 1) & 1u;
}
