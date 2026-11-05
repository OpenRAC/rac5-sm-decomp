/* USA LEVEL_17:0x16A7E0, 52 retail bytes.
 * Pinned C links to 52 bytes; first difference at body byte
 * 8. This is a publishable source hypothesis, not a match.
 * Recover the two-entry loop counter and pointer register lifetimes.
 * This source is uncounted.
 */
int func_16A7E0(char *object)
{
    int *child = *(int **)(object + 0x58);
    int count = 0;
    unsigned int i;
    for (i = 1; i < 3; i++) {
        if (child[i] != 0)
            count++;
    }
    return count;
}
