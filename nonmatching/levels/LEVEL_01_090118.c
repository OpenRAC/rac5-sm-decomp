/* LEVEL_01.REL:0x090118: 20 USA placements.
 * Ghidra body: 92 bytes; pinned C links 76 bytes and first differs at +4.
 * The sorted linked-list insertion emits a shorter loop with different key and predecessor registers. Reopen with node layout and loop-entry evidence.
 * This source has no matching credit.
 */
void func_090118(char **head, char *item)
{
    char *current = *head;
    char *previous = 0;
    if (current != 0) {
        for (;;) {
            unsigned int current_key = *(unsigned int *)(current + 4);
            unsigned int item_key = *(unsigned int *)(item + 4);
            if (current_key >= item_key)
                break;
            previous = current;
            current = *(char **)(current + 0x24);
            if (current == 0)
                break;
        }
    }
    *(char **)(item + 0x24) = current;
    if (previous != 0)
        *(char **)(previous + 0x24) = item;
    else
        *head = item;
}
