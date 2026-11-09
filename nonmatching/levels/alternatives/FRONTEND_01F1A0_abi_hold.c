/* FRONTEND.REL:0x01F1A0: reviewed 104-byte candidate, held for ABI review.
 * Returns a word from an indexed 8-byte table entry after a count check.
 * gnu-ee-trial C with gnu-ee-trial links 104/104 bytes and is byte-exact at
 * this and 20 other USA placements, but the prototypes disagree.
 * It defines the function returning int with (pointer, int), but the accepted
 * caller FRONTEND_01F2C0.c declares it returning int with (pointer, pointer).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
extern int func_01F338(void *);

int func_01F1A0(void *object, int index)
{
    if (index == 0) {
        return 0;
    }
    if (func_01F338(object) == 0) {
        return 0;
    }
    if (*(int *)((char *)object + 4) < index) {
        return 0;
    }
    return *(int *)(*(char **)object + (index << 3) + 8);
}
