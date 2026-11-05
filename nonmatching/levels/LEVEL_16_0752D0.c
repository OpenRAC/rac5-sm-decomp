/* USA LEVEL_16:0x0752D0, 64 retail bytes.
 * Pinned C links to 64 bytes; first difference at body byte
 * 2. This is a publishable source hypothesis, not a match.
 * Recover the loop-end pointer and accumulator register lifetimes while
 * retaining the 0x80 record stride.
 * This source is uncounted.
 */
int func_0752D0(char *object)
{
    char *record = *(char **)(object + 0xC);
    unsigned int count = *(unsigned int *)(object + 0x30);
    int unused_count = 0;
    unsigned int i;
    for (i = 0; i < count; i++, record += 0x80) {
        if ((*(unsigned int *)(record + 0x64) & 1u) == 0)
            unused_count++;
    }
    return unused_count;
}
