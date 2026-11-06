/* LEVEL_01.REL:0x039FE8: 20 USA placements.
 * Ghidra body: 84 bytes; pinned C links 88 bytes and first differs at +10.
 * The nested record signature test links 88 bytes but assigns different index and table registers. Reopen with the record layout and caller types.
 * This source has no matching credit.
 */
int func_039FE8(char *record)
{
    char *child = *(char **)(record + 0x5c8);
    char *base;
    char *array;
    unsigned int index;
    int value;
    if (child == 0)
        return 0;
    base = *(char **)(child + 0x40);
    array = *(char **)(base + 4);
    index = (unsigned char)child[0x44];
    value = *(int *)(array + index * 0x34 + 0x20);
    return value == 0x0478fe9a || value == 0x2df5e520;
}
