extern unsigned char *D_00148C2C;

unsigned char func_021670(unsigned int index)
{
    unsigned char *record;
    if (index >= 100)
        return 0;
    record = D_00148C2C + index;
    return record[0x1b60] & 1u;
}
