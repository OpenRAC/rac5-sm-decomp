/* LEVEL_01.REL:0x08C788: reviewed 104-byte candidate, held for ABI review.
 * When the object's byte field equals 2, calls a helper, then calls a second
 * helper twice with the object's sub-record address.
 * pinned C with gnu-ee-trial links 104/104 bytes and is byte-exact at this USA
 * placement, but the prototypes disagree.
 * It declares func_125D40 returning void with (pointer, int, pointer), but the
 * accepted LEVEL_01_125D40.c defines it returning void with (pointer, pointer,
 * pointer).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
extern int func_08BD00(int a0, int a1);
extern void func_125D40(char *a0, int a1, char *a2);

void func_08C788(char *a0, int a1)
{
    int r;

    if (*(unsigned char *)(a0 + 0x18) != 2) {
        return;
    }
    r = func_08BD00(0, 1);
    a0 = a0 + 0xC;
    func_125D40(a0, r, a0);
    func_125D40(a0, a1, a0);
}
