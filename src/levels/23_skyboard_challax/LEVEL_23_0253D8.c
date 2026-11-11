extern unsigned char *D_001C73AC;

unsigned char func_0253D8(unsigned int index)
{
    unsigned char *record;
    if (index >= 100)
        return 0;
    record = D_001C73AC + index;
    return record[0x1b60] & 1u;
}
