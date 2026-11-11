extern unsigned char *D_002082AC;

unsigned char func_0279E0(unsigned int index)
{
    unsigned char *record;
    if (index >= 100)
        return 0;
    record = D_002082AC + index;
    return record[0x1b60] & 1u;
}
