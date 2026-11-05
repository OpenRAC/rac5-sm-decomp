/* USA LEVEL_07:0x1C3468, 44 retail bytes.
 * Pinned C links to 44 bytes; first difference at body byte
 * 8. This is a publishable source hypothesis, not a match.
 * Recover the early-return branch and second-child preload schedule.
 * This source is uncounted.
 */
int func_1C3468(char *object)
{
    if (*(unsigned char *)(*(char **)(object + 0x54) + 0x3C) == 0)
        return 12;
    if (*(unsigned char *)(*(char **)(object + 0x58) + 0xAB) != 0)
        return 12;
    return 8;
}
