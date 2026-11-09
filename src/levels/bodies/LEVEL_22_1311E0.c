/* LEVEL_22:0x1311E0 -- reads a word from a record table using a masked byte index. */
extern int D_001668A4;

int func_1311E0(int record, unsigned int index)
{
    int nested;
    index &= 0xff;
    if (record == 0)
        record = D_001668A4;
    if (record == 0)
        return 0;
    nested = *(int *)(record + 0x58);
    return *(int *)(nested + (index << 2) + 0x40);
}
