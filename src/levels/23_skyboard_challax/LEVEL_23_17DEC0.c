/* LEVEL_23:0x17DEC0 -- placement copy of LEVEL_22_1311E0.c: reads a word from a record table using a masked byte index. */
extern int D_001DBE24;

int func_17DEC0(int record, unsigned int index)
{
    int nested;
    index &= 0xff;
    if (record == 0)
        record = D_001DBE24;
    if (record == 0)
        return 0;
    nested = *(int *)(record + 0x58);
    return *(int *)(nested + (index << 2) + 0x40);
}
