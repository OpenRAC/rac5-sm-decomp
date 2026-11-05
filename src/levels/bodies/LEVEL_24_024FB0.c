extern unsigned char *D_001C4C2C;

unsigned char func_024FB0(unsigned int index)
{
    unsigned char *record;
    if (index >= 100)
        return 0;
    record = D_001C4C2C + index;
    return record[0x1b60] & 1u;
}
