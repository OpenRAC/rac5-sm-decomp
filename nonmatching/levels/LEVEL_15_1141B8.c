/* LEVEL_15.REL:0x1141B8: reviewed 84-byte candidate, held for ABI review.
 * Runs three sub-object helpers, and a fourth when the flag is nonzero.
 * pinned C with gnu-ee-trial links 84/84 bytes and is byte-exact at this and 1
 * other USA placement, but the prototypes disagree.
 * It declares func_1140E0 returning void with (pointer), but the accepted
 * LEVEL_15_1140E0.c defines it returning void with no arguments.
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
extern void func_114050(char *p);
extern void func_114080(char *p);
extern void func_1140C8(char *p);
extern void func_1140E0(char *p);

void func_1141B8(char *a0, int a1)
{
    func_114050(a0 + 4);
    func_114080(a0 + 0x4C);
    func_1140C8(a0 + 0x98);
    if (a1 != 0) {
        func_1140E0(a0 + 0x108);
    }
}
