/* LEVEL_20:0x0002D8 -- placement copy of LEVEL_01_0002D8.c. */
extern unsigned char *D_00104194;

unsigned int func_0002D8(int index)
{
    unsigned char *record;
    if (index >= 6)
        return 0xffffu;
    record = D_00104194 + index;
    return record[0x854];
}
