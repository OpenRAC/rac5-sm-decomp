extern unsigned char *D_0020D12C;

unsigned int func_0002D8(int index)
{
    unsigned char *record;
    if (index >= 6)
        return 0xffffu;
    record = D_0020D12C + index;
    return record[0x854];
}
