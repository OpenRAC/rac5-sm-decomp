extern unsigned char *D_0015332C;

unsigned char func_022010(unsigned int index)
{
    unsigned char *record;
    if (index >= 100)
        return 0;
    record = D_0015332C + index;
    return record[0x1b60] & 1u;
}
