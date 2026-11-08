/* LEVEL_01.REL:0x1ECF38: reviewed 72-byte candidate.
 * pinned C with gnu-ee-trial links 72 bytes; first differs at +24.
 * Retry: Change the measured source/compiler hypothesis; representative still
 * differs.
 * No matching credit.
 */
int func_1ECF38(int *item)
{
    int count = 0;
    int offset = *item;
    if (offset != 0) {
        unsigned int previous = item[1];
        while (1) {
            int next;
            int *next_item;
        if (previous != 0 && item[2] != 0)
            count++;
            next_item = (int *)((char *)item + offset + 4);
            next = *next_item;
            if (next == 0)
                break;
            offset = next;
            previous = next_item[1];
            item = next_item;
        }
    }
    return count;
}
