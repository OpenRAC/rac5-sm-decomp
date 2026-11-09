/* LEVEL_01.REL:0x000650: reviewed 92-byte candidate, held for ABI review.
 * Calls a per-index test six times on one record and returns one when all
 * pass.
 * pinned C with gnu-ee-trial links 92/92 bytes and is byte-exact at this and 8
 * other USA placements, but the prototypes disagree.
 * It declares func_0004F8 returning int with (pointer, int), but the accepted
 * LEVEL_01_0004F8.c defines it returning int with (int, int).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
extern int func_0004F8(char *a0, unsigned int a1);

int func_000650(char *a0)
{
    unsigned int i;

    for (i = 0; i < 6; i++) {
        if (func_0004F8(a0, i) == 0) {
            return 0;
        }
    }
    return 1;
}
