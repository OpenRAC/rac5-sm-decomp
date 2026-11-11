/* LEVEL_05:0x15E700 -- placement copy of LEVEL_01_16B640.c: returns the table record for a byte key when its first word matches and its flag is set. */
extern unsigned int D_00381788[];

unsigned int *func_15E700(unsigned int value)
{
    unsigned int index;
    unsigned int *entry;

    index = value & 0xff;
    entry = (unsigned int *)((char *)D_00381788 + index * 0x6c);
    if (*entry == value && entry[26] != 0) {
        return entry;
    }
    return 0;
}
