/* LEVEL_08:0x20F918 -- counts down a field and, at zero, unlinks the record and pushes a node onto a global list. */
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
