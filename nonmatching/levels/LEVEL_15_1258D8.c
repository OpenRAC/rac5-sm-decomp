/* LEVEL_15.REL:0x1258D8: reviewed 92-byte candidate, held for ABI review.
 * Rewrites a flag word with a second field pattern and passes it with a local
 * buffer to two helpers.
 * pinned C with gnu-ee-trial links 92/92 bytes and is byte-exact at this and 1
 * other USA placement, but the prototypes disagree.
 * It declares func_07A808 returning void with (pointer, int, pointer, int,
 * int, int, int), but the accepted LEVEL_15_07A808.c defines it returning void
 * with (pointer, int, int, int, int, int, int).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
extern void func_07A808(void *a0, unsigned int a1, void *a2, int a3, int a4, int a5, int a6);
extern void func_07A9E0(void *a0);
extern char D_00124D10[];

void func_1258D8(unsigned int a0)
{
    unsigned int buf[4];
    unsigned int flags;

    flags = a0 & 0xFFFFFFC3u;
    flags = flags | 0x18;
    flags = flags & 0xFFFFFFFCu;
    flags = flags | 1;
    func_07A808(buf, flags, D_00124D10, 0x30, 0, -1, 0);
    func_07A9E0(buf);
}
