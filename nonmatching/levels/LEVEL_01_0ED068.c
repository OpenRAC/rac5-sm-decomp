/* LEVEL_01.REL:0x0ED068: reviewed 120-byte candidate, held for ABI review.
 * Packs seven small fields into one control word with a low tag, passes it
 * with two tables to a helper on a local buffer, then runs a second helper on
 * the buffer.
 * pinned C with gnu-ee-trial links 120/120 bytes and is byte-exact at this and
 * 11 other USA placements, but the prototypes disagree.
 * It declares func_096948 returning void with (pointer, int, pointer, int,
 * int, int, pointer), but the accepted LEVEL_01_096948.c defines it returning
 * void with (pointer, int, int, int, int, int, int).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
extern unsigned char D_000EBF88[];
extern unsigned char D_000EBEF8[];

void func_096948(unsigned char *buf, unsigned int mask, unsigned char *tbl, int n, int a, int b, unsigned char *c);
void func_096B20(unsigned char *buf);

void func_0ED068(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int t0, unsigned int t1,
                 unsigned int t2)
{
    unsigned char buf[16];
    unsigned int x3;
    unsigned int x4;
    unsigned int x5;

    a0 = a0 << 27;
    a1 = a1 << 16;
    a0 = a0 | a1;
    a2 = a2 << 15;
    a0 = a0 | a2;
    x3 = a3 << 14;
    x4 = t0 << 13;
    a0 = a0 | x3;
    x5 = t1 << 10;
    a0 = a0 | x4;
    a0 = a0 | x5;
    t2 = t2 << 6;
    a0 = a0 | t2;
    func_096948(buf, a0 | 0x21, D_000EBF88, 0x24, 0, -1, D_000EBEF8);
    func_096B20(buf);
}
