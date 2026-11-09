/* LEVEL_08.REL:0x115670: reviewed 88-byte candidate, held for ABI review.
 * Clears bit groups in a flag word, then calls two table helpers.
 * pinned C with gnu-ee-trial links 88/88 bytes and is byte-exact at this USA
 * placement, but the prototypes disagree.
 * It declares func_09E868 returning void with (pointer, int, pointer, int,
 * int, int, int), but the accepted LEVEL_08_09E868.c defines it returning void
 * with (pointer, int, int, int, int, int, int).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
extern void func_09E868(char *a0, unsigned int a1, char *a2, int a3, int t0, int t1, int t2);
extern void func_09EA40(char *a0);
extern char D_00115188[];

void func_115670(unsigned int a0)
{
    char buf[16];
    unsigned int flags;

    flags = (a0 & ~0x3Cu) | 4;
    func_09E868(buf, flags & ~3u, D_00115188, 16, 0, -1, 0);
    func_09EA40(buf);
}
