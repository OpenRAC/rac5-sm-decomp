/* LEVEL_04.REL:0x106C88: reviewed 112-byte candidate, held for ABI review.
 * Packs six small fields into one control word, then runs two table routines
 * on a stack buffer.
 * pinned C with gnu-ee-trial links 112/112 bytes and is byte-exact at this and
 * 1 other USA placement, but the prototypes disagree.
 * It declares func_099A40 returning void with (pointer, int, pointer, int,
 * int, int, int), but the accepted LEVEL_04_099A40.c defines it returning void
 * with (pointer, int, int, int, int, int, int).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
extern void func_099A40(void *a0, unsigned int a1, void *a2, int a3, int a4, int a5, int a6);
extern void func_099C18(void *a0);
extern char D_00105E40[];

void func_106C88(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5)
{
    unsigned int buf[4];
    unsigned int m;
    unsigned int t;

    m = (a0 << 27) | (a1 << 16);
    m = m | (a2 << 15);
    m = m | (a3 << 14);
    t = (a4 << 10) | 0x3000;
    m = m | t;
    m = m | (a5 << 6);
    m = m | 5;
    func_099A40(buf, m, D_00105E40, 0x4C, 0, -1, 0);
    func_099C18(buf);
}
