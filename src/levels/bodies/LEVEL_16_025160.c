extern unsigned char *D_001A1AB4;

unsigned char func_025160(unsigned int index)
{
    unsigned char *record;
    if (index >= 100)
        return 0;
    record = D_001A1AB4 + index;
    return record[0x1b60] & 1u;
}
