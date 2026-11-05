/* USA LEVEL_10:0x088F10, 48 retail bytes.
 * Pinned C links to 32 bytes; first difference at body byte
 * 4. This is a publishable source hypothesis, not a match.
 * Recover the nullable flag test without the compiler shortening the
 * masked boolean expression.
 * This source is uncounted.
 */
int func_088F10(char *object)
{
    char *child = *(char **)(object + 0x18);
    unsigned int flags;
    if (child == 0)
        return 0;
    flags = *(unsigned char *)(child + 0x14);
    if (((flags ^ 1u) & 1u) == 0)
        return 1;
    return 0;
}
