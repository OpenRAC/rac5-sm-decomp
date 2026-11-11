extern unsigned char *D_002082AC;

unsigned int func_0002D8(int index)
{
    unsigned char *record;
    if (index >= 6)
        return 0xffffu;
    record = D_002082AC + index;
    return record[0x854];
}
