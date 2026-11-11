/* LEVEL_02:0x16BF78 -- clears the active bit of one record and, when it was set, decrements a byte counter chosen by the record. */

struct Elem {
    unsigned char pad00[0x18];
    unsigned char flags;
    unsigned char pad19[2];
    unsigned char b1B;
};

struct Obj {
    unsigned char pad00[0x54];
    struct Elem *p54;
};

void func_16BF78(struct Obj *o, unsigned char idx)
{
    struct Elem *base;
    struct Elem *e;
    unsigned char *cnts;
    unsigned char *c;
    unsigned char f;

    base = o->p54;
    e = base + idx;
    f = e->flags;
    if (((f ^ 1) & 1) != 0) {
        return;
    }
    cnts = (unsigned char *)base + 0x10A;
    c = cnts + e->b1B;
    e->flags = f & 0xFE;
    *c = *c - 1;
    if (e->flags & 2) {
        e->flags = e->flags & 0xFD;
    }
}
