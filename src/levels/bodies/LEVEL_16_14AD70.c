/* LEVEL_16:0x14AD70 -- clears the pending bit of one record and updates the owner counter. */

struct Rec {
    unsigned char pad00[24];
    unsigned char flags;
    unsigned char pad19[3];
};

struct Tab {
    unsigned char pad00[0x408];
    unsigned char count;
};

struct Obj {
    unsigned char pad00[88];
    struct Tab *tab;
};

void func_14AD70(struct Obj *o, int idx)
{
    struct Tab *t;
    struct Rec *r;

    t = o->tab;
    r = (struct Rec *)((unsigned char *)t + idx * 28);
    if (((r->flags ^ 1) & 1) != 0) {
        return;
    }
    r->flags = r->flags & 0xFE;
    t->count = t->count - 1;
    if (r->flags & 2) {
        r->flags = r->flags & 0xFD;
    }
}
