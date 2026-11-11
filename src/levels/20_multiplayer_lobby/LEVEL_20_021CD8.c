extern unsigned char *D_00104194;

unsigned char func_021CD8(unsigned int index)
{
    unsigned char *record;
    if (index >= 100)
        return 0;
    record = D_00104194 + index;
    return record[0x1b60] & 1u;
}
