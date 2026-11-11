/* LEVEL_09:0x1827E0 -- rebases four stored offsets of the object's record on a global base pointer; the last is kept only when a word in the target is set. */
struct Rec {
    char pad00[8];
    unsigned int f08;
    unsigned int f0C;
    unsigned int f10;
    unsigned int f14;
};

struct Obj {
    char pad00[0x54];
    struct Rec *rec;
};

extern unsigned char *D_001F0894;

void func_1827E0(struct Obj *o)
{
    struct Rec *r;
    unsigned char *p;

    r = o->rec;
    if (r->f0C != 0) {
        r->f0C = (unsigned int)D_001F0894 + r->f0C;
    }
    if (r->f14 != 0) {
        r->f14 = (unsigned int)D_001F0894 + r->f14;
    }
    if (r->f08 != 0) {
        r->f08 = (unsigned int)D_001F0894 + r->f08;
    }
    if (r->f10 != 0) {
        p = D_001F0894 + r->f10;
        if (*(unsigned int *)(p + 0x40) == 0) {
            r->f10 = 0;
        } else {
            r->f10 = (unsigned int)p;
        }
    }
}
