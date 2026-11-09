/* LEVEL_01.REL:0x088BE8: reviewed 64-byte candidate, held for ABI review.
 * Calls a guard, then a helper with a record field when it is set.
 * pinned C with gnu-ee-trial links 64/64 bytes and is byte-exact at this and
 * 19 other USA placements, but the prototypes disagree.
 * It declares func_088B88 returning long long with (pointer), but the accepted
 * LEVEL_01_088B88.c defines it returning int with (pointer).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
extern int func_088BA8(char *record);
extern long long func_088B88(void *field);

long long func_088BE8(char *record)
{
    void *field;
    if (func_088BA8(record) != 0)
        return 0;
    field = *(void **)(record + 0x14);
    if (field != 0)
        return func_088B88(field);
    return 0;
}
