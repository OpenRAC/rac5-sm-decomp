/* LEVEL_06.REL:0x157500: reviewed 104-byte candidate, held for ABI review.
 * Calls two helpers, then calls a third helper when a sub-record byte is set,
 * otherwise clears a byte field of the object.
 * pinned C with gnu-ee-trial links 104/104 bytes and is byte-exact at this and
 * 2 other USA placements, but the prototypes disagree.
 * It declares func_001088 returning void with (int, pointer, int), but the
 * accepted LEVEL_06_001088.c defines it returning void with (int, int, int).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
extern char D_00003008[];
extern void func_080C60(int a0);
extern void func_001088(int a0, char *a1, int a2);
extern void func_076268(char *a0, int a1);

void func_157500(char *a0)
{
    unsigned char *s0;

    s0 = *(unsigned char **)(a0 + 0x54);
    func_080C60(2);
    func_001088(0, D_00003008, 0);
    if (s0[0x1C] != 0) {
        func_076268(a0, 1);
    } else {
        a0[0x45] = 0;
    }
}
