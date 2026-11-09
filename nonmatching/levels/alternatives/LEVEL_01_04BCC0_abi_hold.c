/* LEVEL_01.REL:0x04BCC0: reviewed 84-byte candidate, held for ABI review.
 * Probes a record once, runs a follow-up when the probe is set, then checks a
 * counter.
 * pinned C with gnu-ee-trial links 84/84 bytes and is byte-exact at this and
 * 14 other USA placements, but the prototypes disagree.
 * It declares func_06AB80 returning pointer with (pointer), but the accepted
 * LEVEL_01_06AB80.c defines it returning int with (pointer).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
extern char D_00235140[];
extern void *func_06AB80(void *);
extern void func_06AD30(void *);

void func_04BCC0(void)
{
    int calls = 0;
    void *probe;

    do {
        probe = func_06AB80(D_00235140);
        calls++;
        if (probe != 0)
            func_06AD30(D_00235140);
    } while (calls == 0);
}
