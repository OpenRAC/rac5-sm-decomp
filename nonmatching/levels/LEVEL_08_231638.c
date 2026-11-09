/* LEVEL_08.REL:0x231638: reviewed 92-byte candidate, held for ABI review.
 * Builds a flag word from the argument, then calls two table helpers with a
 * local buffer.
 * pinned C with gnu-ee-trial links 92/92 bytes and is byte-exact at this USA
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
extern char D_00230628[];

void func_231638(unsigned int a0)
{
    char buf[16];
    unsigned int flags;

    flags = (((a0 & ~0x3Cu) | 4u) & ~3u) | 1u;
    func_09E868(buf, flags, D_00230628, 0x5C, 0, -1, 0);
    func_09EA40(buf);
}
