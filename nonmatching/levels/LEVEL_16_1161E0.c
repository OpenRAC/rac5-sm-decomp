/* LEVEL_16.REL:0x1161E0: Ghidra body 68 bytes.
 * Pinned pure C links 64 bytes and first differs at +12.
 * Recheck table stride expression and loop result lifetime. No matching credit.
 */
extern int D_002DF9BC[];

int func_1161E0(int index)
{
    unsigned int item = 0;
    int *cursor = (int *)((char *)D_002DF9BC + index * 0x1c);
    do {
        int value = *cursor;
        item++;
        if (value != 0) {
            return value;
        }
        cursor++;
    } while (item < 4);
    return 0;
}
