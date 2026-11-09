/* LEVEL_03.REL:0x1F5600: reviewed 92-byte candidate, held for ABI review.
 * Rewrites a flag word in four steps and passes it with a local buffer to two
 * helpers.
 * pinned C with gnu-ee-trial links 92/92 bytes and is byte-exact at this and 1
 * other USA placement, but the prototypes disagree.
 * It declares func_096578 returning void with (pointer, int, pointer, int,
 * int, int, int), but the accepted LEVEL_03_096578.c defines it returning void
 * with (pointer, int, int, int, int, int, int).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
extern void func_096578(void *a0, unsigned int a1, void *a2, int a3, int a4, int a5, int a6);
extern void func_096750(void *a0);
extern char D_001F5818[];

void func_1F5600(int a0, unsigned int a1)
{
    unsigned int buf[4];
    unsigned int flags;

    flags = a1 & 0xFFFFFFFCu;
    flags = flags | 1;
    flags = flags & 0xFFFFFFC3u;
    flags = flags | 0x20;
    func_096578(buf, flags, D_001F5818, 16, 0, -1, 0);
    func_096750(buf);
}
