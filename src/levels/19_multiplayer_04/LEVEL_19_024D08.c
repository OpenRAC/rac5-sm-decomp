extern unsigned char *D_001A2C34;

unsigned char func_024D08(unsigned int index)
{
    unsigned char *record;
    if (index >= 100)
        return 0;
    record = D_001A2C34 + index;
    return record[0x1b60] & 1u;
}
