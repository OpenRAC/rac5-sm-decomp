/* LEVEL_01.REL:0x074D60: reviewed 80-byte candidate, held for ABI review.
 * Finds the first 36-byte table entry whose first word equals a value.
 * pinned C with gnu-ee-trial links 80/80 bytes and is byte-exact at this and
 * 19 other USA placements, but the prototypes disagree.
 * It defines the function returning pointer with (int), but the accepted
 * caller LEVEL_01_0743F8.c declares it returning pointer with (pointer).
 * It defines the function returning pointer with (int), but the accepted
 * caller LEVEL_01_0743C8.c declares it returning pointer with (pointer).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
extern int D_00239E20[];
extern int D_001F60B4;

int *func_074D60(int value)
{
    int *item;
    int *end = D_00239E20 + D_001F60B4 * 9;

    for (item = D_00239E20; item != end; item += 9) {
        if (*item == value)
            return item;
    }
    return 0;
}
