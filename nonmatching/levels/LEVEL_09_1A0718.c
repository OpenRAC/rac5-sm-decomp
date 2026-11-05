/* USA LEVEL_09:0x1A0718, 44 retail bytes.
 * Pinned C links to 44 bytes; first difference at body byte
 * 2. This is a publishable source hypothesis, not a match.
 * Recover the three-condition boolean accumulator and state-compare
 * register lifetimes.
 * This source is uncounted.
 */
int func_1A0718(char *object)
{
    unsigned char state = *(unsigned char *)(object + 0x45);
    int result = *(unsigned char *)(*(char **)(object + 0x54) + 0x47) != 0;
    result |= state == 11;
    result |= state == 14;
    return result;
}
