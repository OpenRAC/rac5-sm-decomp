extern unsigned char *D_001FCFAC;

unsigned char func_026FD0(unsigned int index)
{
    if (index >= 100)
        return 0;
    return (*(D_001FCFAC + index + 0x1b60) >> 1) & 1u;
}
