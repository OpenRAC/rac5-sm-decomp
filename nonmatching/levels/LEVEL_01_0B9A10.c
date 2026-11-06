/* LEVEL_01.REL:0x0B9A10: 20 USA placements.
 * Ghidra body: 84 bytes; pinned C links 80 bytes and first differs at +4.
 * The slot assignment links 80 bytes but omits an early copy of the index register. Reopen with the source-level index lifetime or callee ABI evidence.
 * This source has no matching credit.
 */
int func_0B9A10(int *set, int index, int value, unsigned int slot)
{
    char *record;
    if ((unsigned int)index >= (unsigned int)set[1])
        return 0;
    if (slot - 1 >= 4)
        return 0;
    record = *(char **)((char *)(unsigned int)set[0] + index * 4);
    *(int *)(record + (slot - 1) * 4 + 0xd0) = value;
    return 1;
}
