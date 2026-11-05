/* USA LEVEL_16:0x1599E8, 40 retail bytes.
 * Pinned C links to 32 bytes; first difference at body byte
 * 2. This is a publishable source hypothesis, not a match.
 * Recover the two independent stride calculations; the compiler shortens
 * the conditional stride.
 * This source is uncounted.
 */
int func_1599E8(char *object, int index, int mode)
{
    char *child = *(char **)(object + 0x58);
    return *(int *)(child + index * 0x1C + (mode == 0) * 0xEC);
}
