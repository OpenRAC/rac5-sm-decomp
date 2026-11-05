/* USA LEVEL_16:0x177F60, 40 retail bytes.
 * Pinned C links to 40 bytes; first difference at body byte
 * 2. This is a publishable source hypothesis, not a match.
 * Recover the byte-counter load, clear store and limit-pointer register
 * order.
 * This source is uncounted.
 */
int func_177F60(char *object)
{
    char *child = *(char **)(object + 0x54);
    unsigned char count;
    *(int *)(child + 0x28) = 0;
    count = *(unsigned char *)(child + 0x25) + 1;
    *(unsigned char *)(child + 0x25) = count;
    return count < *(unsigned short *)(*(char **)(child + 0x10) + 0x14);
}
