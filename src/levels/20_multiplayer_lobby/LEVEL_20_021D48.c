extern unsigned char *D_00104194;

unsigned char func_021D48(unsigned int index)
{
    if (index >= 100)
        return 0;
    return (*(D_00104194 + index + 0x1b60) >> 1) & 1u;
}
