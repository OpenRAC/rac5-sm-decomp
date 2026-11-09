/* LEVEL_02.REL:0x160830: reviewed 108-byte candidate, held for ABI review.
 * Maps a masked selector to one of up to three helper calls with a small
 * constant.
 * pinned C with gnu-ee-trial links 108/108 bytes and is byte-exact at this USA
 * placement, but the prototypes disagree.
 * It declares func_036BB0 returning void with (int, int), but the accepted
 * LEVEL_02_036BB0.c defines it returning void with (pointer, int).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
extern void func_036BB0(int a, int b);

void func_160830(int a0, int a1)
{
    unsigned int m;

    m = a1 & 0xFF;
    if (m - 4 < 2) {
        func_036BB0(a0, 1);
        return;
    }
    if (m == 3) {
        func_036BB0(a0, 2);
        return;
    }
    if (m < 2) {
        return;
    }
    if (m == 6) {
        return;
    }
    func_036BB0(a0, 0);
}
