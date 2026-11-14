/* LEVEL_02:0x17BD50 -- resolves the two offset words of the object's record into pointers (clearing a word whose target has a zero +0x40 word), clears a flag byte and returns 1. */
struct Rec {
    unsigned int f0;
    unsigned int f4;
};

struct Item {
    unsigned char pad0[0x46];
    unsigned char b46;
    unsigned char pad47[0x54 - 0x47];
    struct Rec *rec;
};

extern unsigned char *D_0021BD54;

int func_17BD50(struct Item *item)
{
    struct Rec *o;
    unsigned char *p;

    o = item->rec;
    if (o->f0 != 0) {
        p = D_0021BD54 + o->f0;
        if (*(unsigned int *)(p + 0x40) == 0) {
            o->f0 = 0;
        } else {
            o->f0 = (unsigned int)p;
        }
    }
    if (o->f4 != 0) {
        p = D_0021BD54 + o->f4;
        if (*(unsigned int *)(p + 0x40) == 0) {
            o->f4 = 0;
        } else {
            o->f4 = (unsigned int)p;
        }
    }
    item->b46 = 0;
    return 1;
}
