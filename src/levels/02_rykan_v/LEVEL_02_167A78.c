/* LEVEL_02:0x167A78 -- releases the element's claim on its slot: decrements the slot counters, clears the slot index and the claim flag. */
struct Slot {
    unsigned char pad00[0xC];
    unsigned char count;
    unsigned char pad0D[3];
};

struct Owner {
    unsigned char pad00[0x54];
    struct Slot *slots;
};

struct Elem {
    unsigned char pad00[0x14];
    unsigned char flags;
    unsigned char pad15;
    unsigned char slot;
    unsigned char pad17;
};

struct Base {
    struct Elem elems[8];
    unsigned char pad_c0[0xC0 - 8 * 0x18];
    struct Owner *owner;
    unsigned char pad_c4[8];
    unsigned char counts[8];
};

struct Obj {
    unsigned char pad00[0x54];
    struct Base *base;
};

void func_167A78(struct Obj *o, unsigned char idx)
{
    struct Base *base = o->base;
    struct Elem *e = &base->elems[idx];
    struct Slot *s;

    if (e->flags & 2) {
        if (e->slot < 7) {
            base->counts[e->slot]--;
        }
        s = &base->owner->slots[e->slot];
        if (s->count != 0)
            s->count--;
        e->slot = 0xFF;
        e->flags = e->flags & 0xFD;
    }
}
