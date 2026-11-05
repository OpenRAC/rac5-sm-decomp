extern unsigned char *D_001E2EAC;

unsigned int func_0002D8(int index)
{
    unsigned char *record;
    if (index >= 6)
        return 0xffffu;
    record = D_001E2EAC + index;
    return record[0x854];
}
