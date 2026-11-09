/* LEVEL_01.REL:0x10E0E0: reviewed 112-byte candidate, held for ABI review.
 * Packs six small fields into one control word, then runs two table routines
 * on a stack buffer.
 * pinned C with gnu-ee-trial links 112/112 bytes and is byte-exact at this and
 * 7 other USA placements, but the prototypes disagree.
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
extern char D_0010CF78[];

void func_10E0E0(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5)
{
    unsigned int buf[4];
    unsigned int m;
    unsigned int t;

    m = (a1 << 27) | (a0 << 16);
    m = m | (a2 << 14);
    m = m | (a3 << 13);
    t = (a4 << 10) | 0x1000;
    m = m | t;
    m = m | (a5 << 6);
    m = m | 5;
    func_096948(buf, m, D_0010CF78, 0x44, 0, -1, 0);
    func_096B20(buf);
}
