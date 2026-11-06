/* LEVEL_01.REL:0x097FB8: 20 USA placements.
 * Ghidra body: 92 bytes; pinned C links 88 bytes and first differs at +16.
 * The fixed-stride link initializer emits 88 bytes, first differing in multiply/add order at byte 16. Reopen with the original count and cursor lifetime.
 * This source has no matching credit.
 */
void func_097FB8(int *list)
{
    int entry = list[3];
    int end = entry + list[4] * 0x8c - 0x8c;
    int previous;
    if (entry == end) {
        *(int *)(entry + 0x84) = 0;
    } else {
        do {
            previous = entry;
            entry = previous + 0x8c;
            *(int *)(previous + 0x84) = entry;
        } while (entry != end);
        *(int *)(previous + 0x110) = 0;
    }
    list[2] = (int)(list + 1);
    list[1] = (int)(list + 1);
    list[0] = list[3];
}
