extern unsigned char *D_00208C2C;

unsigned char func_027E68(unsigned int index)
{
    unsigned char *record;
    if (index >= 100)
        return 0;
    record = D_00208C2C + index;
    return record[0x1b60] & 1u;
}
