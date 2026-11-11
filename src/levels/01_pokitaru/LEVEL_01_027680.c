extern unsigned char *D_001F3FAC;

unsigned char func_027680(unsigned int index)
{
    unsigned char *record;
    if (index >= 100)
        return 0;
    record = D_001F3FAC + index;
    return record[0x1b60] & 1u;
}
