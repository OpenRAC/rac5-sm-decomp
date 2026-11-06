/* LEVEL_01.REL:0x08BE18: 20 USA placements.
 * Ghidra body: 88 bytes; pinned C links 88 bytes and first differs at +62.
 * The removal from a compact pointer array matches size but swaps one commutative address operand near the end. Reopen with an evidenced array/slot source layout.
 * This source has no matching credit.
 */
int func_08BE18(char *state, char *item)
{
    int *array;
    int slot = (signed char)item[4];
    int *place;
    int last;
    if (slot == -1)
        return 0;
    array = (int *)(state + 0x20);
    place = array + slot;
    if (*place != (int)item)
        return 0;
    last = *(int *)(state + 0x1c) - 1;
    *(int *)(state + 0x1c) = last;
    *place = *(int *)((char *)array + last * 4);
    item[4] = -1;
    return 1;
}
