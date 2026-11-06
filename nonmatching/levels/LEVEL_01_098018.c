/* LEVEL_01.REL:0x098018: 20 USA placements.
 * Ghidra body: 92 bytes; pinned C links 88 bytes and first differs at +16.
 * The fixed-stride link initializer emits 88 bytes, first differing in multiply/add order at byte 16. Reopen with the original count and cursor lifetime.
 * This source has no matching credit.
 */
void func_098018(int *list)
{
    char *entry = (char *)(unsigned int)list[3];
    char *end = entry + list[4] * 0x2c - 0x2c;
    char *previous;
    if (entry == end) {
        *(int *)(entry + 0x24) = 0;
    } else {
        do {
            previous = entry;
            entry = previous + 0x2c;
            *(char **)(previous + 0x24) = entry;
        } while (entry != end);
        *(int *)(previous + 0x50) = 0;
    }
    list[2] = (int)(list + 1);
    list[1] = (int)(list + 1);
    list[0] = list[3];
}
