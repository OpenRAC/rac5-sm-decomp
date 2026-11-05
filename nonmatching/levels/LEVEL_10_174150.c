/* USA LEVEL_10:0x174150, 56 retail bytes.
 * Pinned C links to 56 bytes; first difference at body byte
 * 12. This is a publishable source hypothesis, not a match.
 * Recover the subobject pointer and callback-call source shape around the
 * 0x50 record offset.
 * This source is uncounted.
 */
typedef void (*Callback_174150)(char *, char *);

void func_174150(char *object)
{
    char *item = *(char **)(object + 0x4C);
    char *vtable = *(char **)item;
    *(int *)(object + 0x44) = 0;
    *(char **)(object + 0x48) = item;
    (*(Callback_174150 *)(vtable + 0x1C))
        (item + *(short *)(vtable + 0x18), object);
}
