/* LEVEL_16.REL:0x06E3A0: reviewed 116-byte candidate, held for ABI review.
 * Packs six bit fields into one flag word and passes it, with a local buffer,
 * to two helpers.
 * pinned C with gnu-ee-trial links 116/116 bytes and is byte-exact at this and
 * 4 other USA placements, but the prototypes disagree.
 * It declares func_087530 returning void with (pointer, int, pointer, int,
 * int, int, pointer), but the accepted LEVEL_16_087530.c defines it returning
 * void with (pointer, int, int, int, int, int, int).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
void func_087530(void *buf, int flags, unsigned char *tbl, int n, int a, int b, unsigned char *c);
void func_087708(void *buf);
extern unsigned char D_0006C768[];
extern unsigned char D_0006C600[];

void func_06E3A0(unsigned int p0, unsigned int p1, unsigned int p2, unsigned int p3, unsigned int p4, unsigned int p5)
{
    unsigned char buf[16];
    unsigned int x3;
    unsigned int x4;
    unsigned int x5;

    p1 = p1 << 27;
    p0 = p0 << 16;
    p1 = p1 | p0;
    p2 = p2 << 14;
    p1 = p1 | p2;
    x3 = p3 << 13;
    x4 = p4 << 10;
    p1 = p1 | x3;
    x4 = x4 | 0x1000;
    x5 = p5 << 6;
    p1 = p1 | x4;
    p1 = p1 | x5;
    func_087530(buf, p1 | 5, D_0006C768, 56, 0, -1, D_0006C600);
    func_087708(buf);
}
