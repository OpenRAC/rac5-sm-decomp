/* LEVEL_04.REL:0x14ED38: reviewed 96-byte candidate, held for ABI review.
 * Dispatches on a small selector and forwards the pointer to one of two
 * helpers.
 * pinned C with gnu-ee-trial links 96/96 bytes and is byte-exact at this and 2
 * other USA placements, but the prototypes disagree.
 * It declares func_0003B8 returning int with (pointer), but the accepted
 * LEVEL_04_0003B8.c defines it returning void with (int).
 * It declares func_024B48 returning int with (pointer, int), but the accepted
 * LEVEL_04_024B48.c defines it returning int with (int, int).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
int func_0003B8(void *p);
int func_024B48(void *p, int n);

int func_14ED38(int a0, void *a1)
{
    switch (a0) {
    case 2:
    case 3:
        return func_0003B8(a1);
    case 4:
        return func_024B48(a1, -1);
    default:
        return 0;
    }
}
