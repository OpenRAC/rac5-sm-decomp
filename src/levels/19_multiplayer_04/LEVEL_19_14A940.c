/* LEVEL_19:0x14A940 -- rebases three stored offsets of the item's record on a global base pointer; the first and third are kept only when a word in the target is set. */
struct Rec {
    unsigned int f0;
    unsigned int f4;
    unsigned int f8;
};

struct Item {
    unsigned char pad0[0x54];
    struct Rec *rec;
};

extern unsigned char *D_001B5A24;

void func_14A940(struct Item *item)
{
    struct Rec *o;
    unsigned char *p;

    o = item->rec;
    if (o->f0 != 0) {
        p = D_001B5A24 + o->f0;
        if (*(unsigned int *)(p + 0x40) == 0) {
            o->f0 = 0;
        } else {
            o->f0 = (unsigned int)p;
        }
    }
    if (o->f8 != 0) {
        o->f8 = (unsigned int)D_001B5A24 + o->f8;
    }
    if (o->f4 != 0) {
        p = D_001B5A24 + o->f4;
        if (*(unsigned int *)(p + 0x40) == 0) {
            o->f4 = 0;
        } else {
            o->f4 = (unsigned int)p;
        }
    }
}
