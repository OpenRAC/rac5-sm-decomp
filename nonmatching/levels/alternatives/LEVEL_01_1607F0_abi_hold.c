/* LEVEL_01.REL:0x1607F0: reviewed 104-byte candidate, held for ABI review.
 * When the flag is zero, calls a probe and a helper first; then calls a second
 * helper with the object, a1 and a3; returns 1.
 * pinned C with gnu-ee-trial links 104/104 bytes and is byte-exact at this and
 * 12 other USA placements, but the prototypes disagree.
 * Another placement of the same form conflicts with an accepted prototype, so
 * the whole form is held.
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
extern void func_1CAC80(void);
extern void func_15FB48(char *a0, int a1, int a2);
extern void func_160780(char *a0, void *a1, int a2);

int func_1607F0(char *a0, void *a1, int a2, int a3)
{
    if (a2 == 0) {
        func_1CAC80();
        func_15FB48(a0, 2, 0);
    }
    func_160780(a0, a1, a3);
    return 1;
}
