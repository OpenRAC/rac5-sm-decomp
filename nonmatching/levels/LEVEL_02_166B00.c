/* USA LEVEL_02:0x166B00, 40 retail bytes.
 * Pinned C links to 40 bytes; first difference at body byte
 * 2. This is a publishable source hypothesis, not a match.
 * Recover the byte-counter load, clear store and limit-pointer register
 * order.
 * This source is uncounted.
 */
int func_166B00(char *object)
{
    char *child = *(char **)(object + 0x54);
    unsigned char count;
    *(int *)(child + 0x4C) = 0;
    count = *(unsigned char *)(child + 0x5D) + 1;
    *(unsigned char *)(child + 0x5D) = count;
    return count < *(unsigned short *)(*(char **)(child + 0x1C) + 0x14);
}
