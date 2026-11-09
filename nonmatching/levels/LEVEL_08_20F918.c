/* LEVEL_08.REL:0x20F918: reviewed 88-byte candidate, held for ABI review.
 * Counts down a field and, at zero, unlinks the record and pushes a node onto
 * a global list.
 * pinned C with gnu-ee-trial links 88/88 bytes and is byte-exact at this and 2
 * other USA placements, but the prototypes disagree.
 * It declares func_20F890 returning void with (pointer), but the accepted
 * FRONTEND_001E08.c defines it returning void with no arguments.
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
struct L20F918 {
    struct L20F918 *f00;
    struct L20F918 *f04;
};

struct P20F918 {
    char pad0[0xC4];
    int fC4;
    char padC8[0x0C];
    struct L20F918 *fD4;
    struct L20F918 *fD8;
};

extern struct L20F918 *D_003EB468;
extern void func_20F890(struct P20F918 *p);

void func_20F918(struct P20F918 *p)
{
    struct L20F918 *n;
    struct L20F918 *a;
    struct L20F918 *b;

    p->fC4 = p->fC4 - 1;
    if (p->fC4 == 0) {
        b = p->fD4;
        a = p->fD8;
        a->f00 = b;
        b->f04 = a;
        func_20F890(p);
        n = (struct L20F918 *)((char *)p - 0x10);
        n->f00 = D_003EB468;
        D_003EB468 = n;
    }
}
