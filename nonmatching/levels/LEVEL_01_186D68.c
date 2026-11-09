/* LEVEL_01.REL:0x186D68: reviewed 116-byte candidate, held for ABI review.
 * Calls a helper with a fixed table address, stores two scalar fields and
 * forwards the arguments to another helper.
 * pinned C with gnu-ee-trial links 116/116 bytes and is byte-exact at this and
 * 11 other USA placements, but the prototypes disagree.
 * It declares func_09FB18 returning void with (pointer, pointer), but the
 * accepted LEVEL_01_09FB18.c defines it returning void with (pointer, int).
 * It declares func_186E00 returning void with (pointer, pointer, pointer), but
 * the accepted LEVEL_01_186E00.c defines it returning void with (pointer, int,
 * int).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
extern char D_00222AE0[];
extern void func_09FB18(void *a0, void *a1);
extern void func_186E00(void *a0, void *a1, void *a2);

void func_186D68(char *a0, void *a1, void *a2, int a3, int a4)
{
    func_09FB18(a0, D_00222AE0);
    *(int *)(a0 + 0x24) = a3;
    *(int *)(a0 + 0x28) = a4;
    func_186E00(a0, a1, a2);
}
