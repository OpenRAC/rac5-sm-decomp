/* LEVEL_03.REL:0x1C4918: reviewed 96-byte candidate, held for ABI review.
 * Compares a global byte-sized selector with an argument and runs a fixed
 * helper sequence on match.
 * pinned C with gnu-ee-trial links 96/96 bytes and is byte-exact at this USA
 * placement, but the prototypes disagree.
 * It declares func_1342B8 returning int with (int, int), but the accepted
 * FRONTEND_0025B0.c defines it returning int with no arguments.
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
extern int D_0020CFFC;
extern int func_1342B8(int a0, unsigned int a1);
extern void func_1C4CC0(int a0);
extern void func_1C1F80(int a0);
extern void func_1C3098(int a0);
extern void func_1C3758(int a0);

void func_1C4918(int a0)
{
    if (D_0020CFFC >= 0) {
        if (func_1342B8(0, *(unsigned char *)&D_0020CFFC) != a0) {
            return;
        }
    }
    func_1C4CC0(a0);
    func_1C1F80(a0);
    func_1C3098(a0);
    func_1C3758(a0);
}
