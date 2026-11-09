/* LEVEL_15.REL:0x13EB00: reviewed 104-byte candidate, held for ABI review.
 * Forwards its arguments to two helpers, one of them on a sub-object.
 * pinned C with gnu-ee-trial links 104/104 bytes and is byte-exact at this and
 * 1 other USA placement, but the prototypes disagree.
 * It declares func_0EABF0 returning void with (pointer, int, int), but the
 * accepted LEVEL_01_125FE0.c defines it returning void with (pointer, pointer,
 * pointer).
 * It declares func_13EA10 returning void with (pointer, int, int, int), but
 * the accepted LEVEL_15_13EA10.c defines it returning void with (pointer,
 * pointer, int, pointer).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
extern void func_0EABF0(char *a0, int a1, int a2);
extern void func_13EA10(char *a0, int a1, int a2, int a3);

void func_13EB00(char *a0, int a1, int a2, int a3, int a4)
{
    func_0EABF0(a0 + 0x30, a2, a3);
    func_13EA10(a0, a1, a3, a4);
}
