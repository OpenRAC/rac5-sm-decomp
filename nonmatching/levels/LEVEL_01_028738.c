/* LEVEL_01.REL:0x028738: reviewed 96-byte candidate, held for ABI review.
 * Looks for a value in a four-slot table, returning early when found, and
 * otherwise stores it in the first empty slot.
 * pinned C with gnu-ee-trial links 96/96 bytes and is byte-exact at this and 4
 * other USA placements, but the prototypes disagree.
 * It defines the function returning void with (int), but the accepted caller
 * LEVEL_01_1C5638.c declares it returning void with (pointer).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
extern int D_00230F40[];

void func_028738(int a0)
{
    unsigned int i;

    for (i = 0; i < 4; i++) {
        if (a0 == D_00230F40[9 + i]) {
            return;
        }
    }
    for (i = 0; i < 4; i++) {
        if (D_00230F40[9 + i] == 0) {
            D_00230F40[9 + i] = a0;
            return;
        }
    }
}
