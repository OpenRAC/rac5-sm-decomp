/* LEVEL_08:0x1F09E0 -- placement copy of LEVEL_04_1C7860.c: rebases two stored offsets of the item's record on a global base pointer, keeping each only when a word in the target is set. */
struct Rec {
    unsigned int f0;
    unsigned int f4;
};

struct Item {
    unsigned char pad0[0x54];
    struct Rec *rec;
};

extern unsigned char *D_0024FC54;

void func_1F09E0(struct Item *item)
{
    struct Rec *o;
    unsigned char *p;

    o = item->rec;
    if (o->f0 != 0) {
        p = D_0024FC54 + o->f0;
        if (*(unsigned int *)(p + 0x40) == 0) {
            o->f0 = 0;
        } else {
            o->f0 = (unsigned int)p;
        }
    }
    if (o->f4 != 0) {
        p = D_0024FC54 + o->f4;
        if (*(unsigned int *)(p + 0x40) == 0) {
            o->f4 = 0;
        } else {
            o->f4 = (unsigned int)p;
        }
    }
}
