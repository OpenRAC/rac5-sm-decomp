/* LEVEL_01.REL:0x100D88: reviewed 88-byte candidate, held for ABI review.
 * Masks a flag word and runs two table routines on a stack buffer.
 * pinned C with gnu-ee-trial links 88/88 bytes and is byte-exact at this and
 * 12 other USA placements, but the prototypes disagree.
 * It declares func_096948 returning void with (pointer, int, pointer, int,
 * int, int, int), but the accepted LEVEL_01_096948.c defines it returning void
 * with (pointer, int, int, int, int, int, int).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
extern void func_096948(void *a0, unsigned int a1, void *a2, int a3, int a4, int a5, int a6);
extern void func_096B20(void *a0);
extern char D_000FFB60[];

void func_100D88(unsigned int a0)
{
    unsigned int buf[4];
    unsigned int m;

    m = (a0 & 0xFFFFFFC3) | 4;
    func_096948(buf, m & 0xFFFFFFFC, D_000FFB60, 60, 0, -1, 0);
    func_096B20(buf);
}
