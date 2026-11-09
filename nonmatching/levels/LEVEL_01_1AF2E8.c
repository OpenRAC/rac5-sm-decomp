/* LEVEL_01.REL:0x1AF2E8: reviewed 112-byte candidate, held for ABI review.
 * Packs six bit fields into one flag word and passes it with a local buffer to
 * two helpers.
 * pinned C with gnu-ee-trial links 112/112 bytes and is byte-exact at this and
 * 12 other USA placements, but the prototypes disagree.
 * It declares func_096948 returning void with (pointer, int, pointer, int,
 * int, int, int), but the accepted LEVEL_01_096948.c defines it returning void
 * with (pointer, int, int, int, int, int, int).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
void func_096948(void *buf, unsigned int flags, unsigned char *tbl, int n, int a, int b, int c);
void func_096B20(void *buf);
extern unsigned char D_001AE788[];

void func_1AF2E8(unsigned int p0, unsigned int p1, unsigned int p2, unsigned int p3, unsigned int p4, unsigned int p5)
{
    unsigned char buf[16];
    unsigned int flags;
    unsigned int t;

    flags = p0 << 27;
    flags |= p1 << 16;
    flags |= p2 << 15;
    flags |= p3 << 14;
    t = (p4 << 10) | 0x3000;
    flags |= t;
    flags |= p5 << 6;
    func_096948(buf, flags | 0x21, D_001AE788, 20, 0, -1, 0);
    func_096B20(buf);
}
