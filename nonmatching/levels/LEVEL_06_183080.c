/* LEVEL_06.REL:0x183080: reviewed 84-byte candidate, held for ABI review.
 * Forwards a packed table entry and six constants to a helper.
 * pinned C with gnu-ee-trial links 84/84 bytes and is byte-exact at this USA
 * placement, but the prototypes disagree.
 * It declares func_08F598 returning void with (int, int, pointer, int, int,
 * int, int), but the accepted LEVEL_06_08F598.c defines it returning void with
 * (pointer, int, int, int, int, int, int).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
extern int D_00284B40[];
extern int D_001827D0;
void func_08F598(int a0, int a1, int *a2, int a3, int a4, int a5, int a6);

void func_183080(int a0, int a1)
{
    func_08F598(a0, (D_00284B40[a1] << 16) | 0x80007059, &D_001827D0, 44, 0, -1, 0);
}
