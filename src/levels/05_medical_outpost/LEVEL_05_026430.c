extern unsigned char *D_001E332C;

unsigned char func_026430(unsigned int index)
{
    if (index >= 100)
        return 0;
    return (*(D_001E332C + index + 0x1b60) >> 1) & 1u;
}
