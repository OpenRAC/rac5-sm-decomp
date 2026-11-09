/* LEVEL_01.REL:0x0EBA78: reviewed 112-byte candidate, held for ABI review.
 * Packs five fields into one word and passes it with a constant table to two
 * helpers.
 * pinned C with gnu-ee-trial links 112/112 bytes and is byte-exact at this and
 * 3 other USA placements, but the prototypes disagree.
 * It declares func_096948 returning void with (pointer, int, pointer, int,
 * int, int, int), but the accepted LEVEL_01_096948.c defines it returning void
 * with (pointer, int, int, int, int, int, int).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
extern char D_000EAEA0[];
extern void func_096948(unsigned int *buf, unsigned int v, char *tbl, int n, int a, int b, int c);
extern void func_096B20(unsigned int *buf);

void func_0EBA78(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int t0)
{
    unsigned int buf[4];
    unsigned int x3;
    unsigned int x4;

    a1 = a1 << 15;
    a1 = a1 | 0x7FD0000;
    a0 = a0 << 27;
    a0 = a0 | a1;
    a2 = a2 << 14;
    x3 = a3 << 10;
    a0 = a0 | a2;
    x3 = x3 | 0x2000;
    x4 = t0 << 6;
    a0 = a0 | x3;
    a0 = a0 | x4;
    func_096948(buf, a0 | 5, D_000EAEA0, 0x24, 0, -1, 0);
    func_096B20(buf);
}
