/* LEVEL_01.REL:0x144050: reviewed 72-byte candidate, held for ABI review.
 * Sets object byte 0x45 to 6 or 7 from a category lookup on the record's
 * selector.
 * pinned C with gnu-ee-trial links 72/72 bytes and is byte-exact at this and
 * 15 other USA placements, but the prototypes disagree.
 * It declares func_024C98 returning int with (int, int, int), but the accepted
 * LEVEL_01_024C98.c defines it returning int with (pointer, pointer, pointer).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
extern int func_024C98(int category, int index, int selector);

void func_144050(char *object)
{
    char *holder = *(char **)(object + 0x58);
    char *member = *(char **)holder;
    int selector = *(int *)(member + 0xf8);
    int state = func_024C98(6, 14, selector);

    if (state != 0)
        state = 7;
    else
        state = 6;
    object[0x45] = state;
}
