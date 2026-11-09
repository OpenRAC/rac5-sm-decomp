/* LEVEL_15.REL:0x0FB1D0: reviewed 88-byte candidate, held for ABI review.
 * Masks a flag word, passes it with a stack buffer to a helper, then hands the
 * buffer to a second helper.
 * pinned C with gnu-ee-trial links 88/88 bytes and is byte-exact at this and 1
 * other USA placement, but the prototypes disagree.
 * It declares func_07A808 returning void with (pointer, int, pointer, int,
 * int, int, int), but the accepted LEVEL_15_07A808.c defines it returning void
 * with (pointer, int, int, int, int, int, int).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
extern char D_000FA810[];

void func_07A808(void *buf, unsigned int flags, void *tbl, int n, int a4, int a5, int a6);
void func_07A9E0(void *buf);

void func_0FB1D0(unsigned int a0)
{
    char buf[16];
    unsigned int flags;

    flags = (a0 & ~0x3C) | 4;
    func_07A808(buf, flags & ~3, D_000FA810, 0x30, 0, -1, 0);
    func_07A9E0(buf);
}
