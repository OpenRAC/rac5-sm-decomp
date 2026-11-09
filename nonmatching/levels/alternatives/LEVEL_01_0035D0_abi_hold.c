/* LEVEL_01.REL:0x0035D0: reviewed 44-byte candidate, held for ABI review.
 * Calls a helper when value is at least the record's limit field.
 * pinned C with gnu-ee-trial links 44/44 bytes and is byte-exact at this and
 * 19 other USA placements, but the prototypes disagree.
 * It declares func_001908 returning void with (pointer, int), but the accepted
 * LEVEL_01_001908.c defines it returning void with (pointer, float, float,
 * int, int).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
extern void func_001908(char *record, int value);

void func_0035D0(char *record, int value)
{
    if (value >= *(int *)(record + 0xc))
        func_001908(record, value);
}
