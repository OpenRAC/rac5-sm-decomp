extern unsigned char *D_001A2F34;

unsigned char func_024710(unsigned int index)
{
    unsigned char *record;
    if (index >= 100)
        return 0;
    record = D_001A2F34 + index;
    return record[0x1b60] & 1u;
}
