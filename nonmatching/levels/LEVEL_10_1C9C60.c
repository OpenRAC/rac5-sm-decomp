/* LEVEL_10.REL:0x1C9C60: reviewed 120-byte candidate, held for ABI review.
 * Calls a helper for each slot from a start index to a limit, advancing the
 * index modulo ten.
 * pinned C with gnu-ee-trial links 120/120 bytes and is byte-exact at this USA
 * placement, but the prototypes disagree.
 * It declares func_081168 returning void with (int), but the accepted
 * LEVEL_10_081168.c defines it returning void with (pointer).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
extern void func_081168(int a0);

void func_1C9C60(char *a0)
{
    char *s1;
    int *tb;
    int s0;
    int off;

    s1 = *(char **)(a0 + 0x58);
    s0 = *(int *)(s1 + 0x50);
    if (s0 == *(int *)(s1 + 0x54)) {
        return;
    }
    tb = (int *)(s1 + 0x28);
    do {
        off = s0 << 2;
        func_081168(*(int *)((char *)tb + off));
        s0 = (s0 + 1) % 10;
    } while (s0 != *(int *)(s1 + 0x54));
}
