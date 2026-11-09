/* LEVEL_15.REL:0x11C0D0: reviewed 88-byte candidate, held for ABI review.
 * Masks and sets bit fields of its argument, then calls two helpers with a
 * local buffer.
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
extern void func_07A808(void *buf, unsigned int v, void *tab, int n, int a, int b, int c);
extern void func_07A9E0(void *buf);
extern char D_0011B278[];

void func_11C0D0(unsigned int flags)
{
    unsigned char buf[16];
    unsigned int v;

    v = (flags & ~0x3CU) | 4U;
    func_07A808(buf, v & ~3U, D_0011B278, 0x38, 0, 2, 0);
    func_07A9E0(buf);
}
