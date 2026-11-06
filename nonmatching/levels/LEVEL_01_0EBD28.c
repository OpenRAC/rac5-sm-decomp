/* LEVEL_01.REL:0x0EBD28: Ghidra body 136 bytes.
 * Pinned pure C links 132 bytes and first differs at +5.
 * Recheck nested list traversal and pointer register lifetimes. No matching credit.
 */
int func_0EBD28(int *out, char *node, char *stop, int stride, int field)
{
    int first = *(int *)(node + 8) + *(unsigned short *)(node + 0xc) * stride;
    char *current = node;
    do {
        char *entry = node;
        int begin = *(int *)(entry + 8) +
                    *(unsigned short *)(entry + 0xc) * stride;
        int address = begin;
        do {
            if (0.0f < *(float *)(address + field)) {
                out[1] = first;
                out[0] = (int)current;
                return 1;
            }
            first = address;
            address += stride;
            current = entry;
        } while (address != begin + *(unsigned short *)(entry + 0xe) * stride);
        node = *(char **)(entry + 4);
    } while (node != stop);
    return 0;
}
