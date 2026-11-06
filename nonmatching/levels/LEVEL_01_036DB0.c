/* LEVEL_01.REL:0x036DB0: Ghidra body 112 bytes.
 * Pinned pure C links 116 bytes and first differs at +1.
 * Recheck parent-index division and loop branch layout. No matching credit.
 */
void func_036DB0(unsigned short *items, int index, int first,
                 unsigned short value)
{
    int parent = (index - 1) / 2;
    while (first < index) {
        if (value <= items[parent]) {
            break;
        }
        items[index] = items[parent];
        index = parent;
        parent = (parent - 1) / 2;
    }
    items[index] = value;
}
