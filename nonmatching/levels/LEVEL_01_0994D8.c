/* LEVEL_01.REL:0x0994D8: Ghidra body 100 bytes.
 * Pinned pure C links 96 bytes and first differs at +12.
 * Recheck the common global base and record count lifetime. No matching credit.
 */
extern char D_0029AEF8[];

void func_0994D8(int first, int second, int third, int index)
{
    int offset = index * 0x170c;
    int *count = (int *)(D_0029AEF8 + offset + 0xc40);
    int slot = *count;
    if (slot < 0x80) {
        char *record = D_0029AEF8 + offset + 0x240 + slot * 0x14;
        *(int *)(record + 0x10) = second;
        *(int *)record = third;
        *(short *)(record + 8) = slot;
        *(int *)(record + 0x0c) = first;
        *(short *)(record + 4) = 0;
        record[6] = 0;
        *count = *count + 1;
    }
}
