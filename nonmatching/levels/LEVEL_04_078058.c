/* LEVEL_04.REL:0x078058: reviewed 160-byte candidate, held for ABI review.
 * Runs a setup call, then calls a per-entry helper for each count.
 * pinned C with gnu-ee-trial links 160/160 bytes and is byte-exact at this and
 * 2 other USA placements, but the prototypes disagree.
 * It declares func_07A7A0 returning void with (pointer, pointer, pointer,
 * int), but the accepted LEVEL_04_07A7A0.c defines it returning void with
 * (pointer, pointer, pointer, pointer).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
void func_07A7A0(void *a, void *b, void *c, int d);
void func_07A8C8(void *a, void *b, void *c, int d, int e);

void func_078058(void *a0, void *a1, void *a2, void *a3)
{
    unsigned int i;

    func_07A7A0(a0, a3, a1, (int)a2);
    i = 0;
    if (i < *(unsigned int *)((char *)a3 + 0x14)) {
        do {
            func_07A8C8(a0, a3, a1, (int)a2, i * 5);
            i++;
        } while (i < *(unsigned int *)((char *)a3 + 0x14));
    }
}
