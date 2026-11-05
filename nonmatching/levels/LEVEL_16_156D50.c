/* USA LEVEL_16:0x156D50, 52 retail bytes.
 * Pinned C links to 48 bytes; first difference at body byte
 * 0. This is a publishable source hypothesis, not a match.
 * Recover the source and destination field-load schedule for the five
 * record updates.
 * This source is uncounted.
 */
void func_156D50(char *object)
{
    char *child = *(char **)(object + 0x58);
    int a = *(int *)(object + 0x28);
    int b = *(int *)(object + 0x38);
    int c = *(int *)(object + 0x20);
    *(int *)(child + 0x18) = *(int *)(object + 0x30);
    *(int *)(child + 0x24) = a;
    *(int *)(child + 0x1C) = b;
    *(int *)(child + 0x20) = c;
    *(unsigned char *)(child + 0x6E) = 10;
}
