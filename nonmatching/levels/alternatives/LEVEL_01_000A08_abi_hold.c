/* LEVEL_01.REL:0x000A08: reviewed 96-byte candidate, held for ABI review.
 * Calls a helper for six table entries and stores each result in a second
 * table.
 * pinned C with gnu-ee-trial links 96/96 bytes and is byte-exact at this and
 * 12 other USA placements, but the prototypes disagree.
 * It declares func_12A068 returning int with (pointer), but the accepted
 * LEVEL_01_12A068.c defines it returning void with (int).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
extern int func_12A068(void *a0);
extern void *D_0020B928[];
extern int D_001EF228[];

void func_000A08(void)
{
    unsigned int i;

    for (i = 0; i < 6; i++) {
        D_001EF228[i] = func_12A068(D_0020B928[i]);
    }
}
