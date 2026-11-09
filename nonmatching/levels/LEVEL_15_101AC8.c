/* LEVEL_15.REL:0x101AC8: reviewed 108-byte candidate, held for ABI review.
 * Runs a setup helper on a global pool, then calls a per-element helper over
 * the live elements of the pool.
 * pinned C with gnu-ee-trial links 108/108 bytes and is byte-exact at this and
 * 5 other USA placements, but the prototypes disagree.
 * It declares func_11D5B0 returning void with (pointer), but the accepted
 * LEVEL_15_02C060.c defines it returning void with no arguments.
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
struct Elem {
    unsigned char pad0[0x118];
};

struct Pool {
    unsigned char pad0[0xC8];
    struct Elem *begin;
    int count;
};

extern unsigned char D_002ED088[];

void func_0804B0(unsigned char *p);
void func_11D5B0(struct Elem *e);

void func_101AC8(void)
{
    struct Pool *p;
    struct Elem *cur;
    struct Elem *end;

    func_0804B0(D_002ED088);
    p = (struct Pool *)(D_002ED088 + 0x1C);
    cur = p->begin;
    end = cur + p->count;
    while (cur != end) {
        func_11D5B0(cur);
        cur++;
    }
}
