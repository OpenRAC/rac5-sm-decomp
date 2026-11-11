extern unsigned char *D_001E2EAC;

unsigned char func_025B30(unsigned int index)
{
    unsigned char *record;
    if (index >= 100)
        return 0;
    record = D_001E2EAC + index;
    return record[0x1b60] & 1u;
}
