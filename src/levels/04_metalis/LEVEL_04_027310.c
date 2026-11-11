extern unsigned char *D_0020D12C;

unsigned char func_027310(unsigned int index)
{
    unsigned char *record;
    if (index >= 100)
        return 0;
    record = D_0020D12C + index;
    return record[0x1b60] & 1u;
}
