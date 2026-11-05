/* USA LEVEL_05:0x07A520, 48 retail bytes.
 * Pinned C links to 48 bytes; first difference at body byte
 * 2. This is a publishable source hypothesis, not a match.
 * Recover the primary/fallback pointer branch layout and the nested
 * result-pointer lifetime.
 * This source is uncounted.
 */
int func_07A520(char *object)
{
    char *owner = *(char **)(object + 0x48);
    char *candidate = *(char **)(owner + 0x18);
    char *next;
    if (candidate != 0) {
        next = *(char **)candidate;
    } else {
        candidate = *(char **)(owner + 0x14);
        if (candidate == 0)
            return -1;
        next = *(char **)candidate;
    }
    return *(int *)(*(char **)next + 4);
}
