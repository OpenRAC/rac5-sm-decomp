/* LEVEL_01:0x16CC50 -- clears bit 0 of an entry flag byte, decrements a byte counter, then clears bit 1. */

struct Entry28 {
    unsigned char pad0[24];
    unsigned char flags;
    unsigned char pad1[3];
};

struct Table {
    unsigned char pad0[0x158];
    unsigned char count;
};

struct Owner {
    unsigned char pad0[0x58];
    struct Table *tab;
};

void func_16CC50(struct Owner *o, int idx)
{
    struct Table *t;
    struct Entry28 *e;
    int skip;

    t = o->tab;
    e = (struct Entry28 *)t + idx;
    skip = !(e->flags & 1);
    if (skip) {
        return;
    }
    e->flags = e->flags & 0xFE;
    t->count = t->count - 1;
    if (e->flags & 2) {
        e->flags = e->flags & 0xFD;
    }
}
