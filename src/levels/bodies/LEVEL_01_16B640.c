/* LEVEL_01:0x16B640 -- returns the table record for a byte key when its first word matches and its flag is set. */
extern unsigned int D_003959F8[];

unsigned int *func_16B640(unsigned int value)
{
    unsigned int index;
    unsigned int *entry;

    index = value & 0xff;
    entry = (unsigned int *)((char *)D_003959F8 + index * 0x6c);
    if (*entry == value && entry[26] != 0) {
        return entry;
    }
    return 0;
}
