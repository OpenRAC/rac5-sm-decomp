/* USA LEVEL_16:0x136178, 56 retail bytes.
 * Pinned C links to 60 bytes; first difference at body byte
 * 16. This is a publishable source hypothesis, not a match.
 * Recover the floating constant store and branch layout while preserving
 * the final child update.
 * This source is uncounted.
 */
void func_136178(char *object)
{
    char *other = *(char **)(object + 0x54);
    *(unsigned char *)(object + 0x45) = 3;
    if (*(unsigned char *)other == 0)
        *(float *)(object + 0x70) = 10.000199317932129f;
    *(int *)(*(char **)(object + 0x58) + 0x28) = 2;
}
