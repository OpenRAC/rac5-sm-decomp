extern unsigned char *D_0023CB2C;

unsigned char func_027CA8(unsigned int index)
{
    unsigned char *record;
    if (index >= 100)
        return 0;
    record = D_0023CB2C + index;
    return record[0x1b60] & 1u;
}
