/* LEVEL_05.REL:0x106E40: reviewed 88-byte candidate, held for ABI review.
 * Masks and sets bit fields of its argument, then calls two helpers with a
 * local buffer.
 * pinned C with gnu-ee-trial links 88/88 bytes and is byte-exact at this USA
 * placement, but the prototypes disagree.
 * It declares func_094040 returning void with (pointer, int, pointer, int,
 * int, int, int), but the accepted LEVEL_05_094040.c defines it returning void
 * with (pointer, int, int, int, int, int, int).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
extern void func_094040(void *buf, unsigned int v, void *tab, int n, int a, int b, int c);
extern void func_094218(void *buf);
extern char D_001065D8[];

void func_106E40(unsigned int flags)
{
    unsigned char buf[16];
    unsigned int v;

    v = (flags & ~0x3CU) | 4U;
    func_094040(buf, v & ~3U, D_001065D8, 0x20, 0, -1, 0);
    func_094218(buf);
}
