extern unsigned char *D_001E332C;

unsigned int func_0002D8(int index)
{
    unsigned char *record;
    if (index >= 6)
        return 0xffffu;
    record = D_001E332C + index;
    return record[0x854];
}
