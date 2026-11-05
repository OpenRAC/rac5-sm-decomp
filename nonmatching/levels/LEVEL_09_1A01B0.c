/* USA LEVEL_09:0x1A01B0, 44 retail bytes.
 * Pinned C links to 44 bytes; first difference at body byte
 * 8. This is a publishable source hypothesis, not a match.
 * Recover the early-return branch and second-child preload schedule.
 * This source is uncounted.
 */
int func_1A01B0(char *object)
{
    if (*(unsigned char *)(*(char **)(object + 0x54) + 0x44) == 0)
        return 10;
    if (*(unsigned char *)(*(char **)(object + 0x58) + 0xAD) != 0)
        return 10;
    return 6;
}
