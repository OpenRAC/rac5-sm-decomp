/* USA LEVEL_17:0x16A720, 64 retail bytes.
 * Pinned C links to 64 bytes; first difference at body byte
 * 12. This is a publishable source hypothesis, not a match.
 * Recover the nested boolean branch and result lifetime without
 * shortening the second state test.
 * This source is uncounted.
 */
int func_16A720(char *object)
{
    char *child = *(char **)(object + 0x58);
    int result = 0;
    if (*(unsigned char *)(child + 0x1C) == 0) {
        if (*(int *)(child + 4) == 0)
            result = 1;
    } else if ((*(int *)(child + 4) == 0 || *(int *)(child + 8) == 0) &&
               *(unsigned char *)(child + 0x1D) == 0) {
        result = 1;
    }
    return result;
}
