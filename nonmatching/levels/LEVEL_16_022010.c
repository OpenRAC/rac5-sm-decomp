/* LEVEL_16.REL:0x022010: reviewed 96-byte candidate, held for ABI review.
 * Returns whether a field of a looked-up record is nonzero, after two checks.
 * pinned C with gnu-ee-trial links 96/96 bytes and is byte-exact at this and 4
 * other USA placements, but the prototypes disagree.
 * It declares func_021F50 returning int with (pointer, int), but the accepted
 * LEVEL_16_021F50.c defines it returning pointer with (int, int).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
struct R022010 {
    char pad0[0x38];
    int f38;
};

extern int func_021F50(void *a, int b);
extern struct R022010 *func_022110(void *a, int b);

int func_022010(void *a)
{
    if (func_021F50(a, -1) == 0) {
        return 0;
    }
    if (a == (void *)12) {
        return 0;
    }
    if (func_022110(a, -1) == 0) {
        return 0;
    }
    return func_022110(a, -1)->f38 != 0;
}
