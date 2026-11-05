extern unsigned char *D_001E332C;

unsigned char func_0263C0(unsigned int index)
{
    unsigned char *record;
    if (index >= 100)
        return 0;
    record = D_001E332C + index;
    return record[0x1b60] & 1u;
}
