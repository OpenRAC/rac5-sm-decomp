/* LEVEL_07:0x16CF90 -- relocates the offset fields of the object's linked record on the global base (the first two kept only when their target is valid) and, for a kind-7 object with the pending byte set, marks the record and the global ready; always reports 1. */
extern int D_0021B094;
extern unsigned char D_0021BB9C;
extern unsigned char D_0021BB9D;

struct Rec {
    int f00;
    int f04;
    int f08;
    int f0C;
    int f10;
    char pad14[0x1F - 0x14];
    unsigned char f1F;
};

struct Obj {
    char pad00[0x45];
    unsigned char kind;
    char pad46[0x54 - 0x46];
    struct Rec *rec;
};

int func_16CF90(struct Obj *o)
{
    struct Rec *r = o->rec;
    int t;

    if (r->f10 != 0) {
        t = D_0021B094 + r->f10;
        if (*(int *)(t + 0x40) == 0) {
            r->f10 = 0;
        } else {
            r->f10 = t;
        }
    }
    if (r->f00 != 0) {
        t = D_0021B094 + r->f00;
        if (*(int *)(t + 0x40) == 0) {
            r->f00 = 0;
        } else {
            r->f00 = t;
        }
    }
    if (r->f04 != 0) {
        r->f04 = D_0021B094 + r->f04;
    }
    if (r->f0C != 0) {
        r->f0C = D_0021B094 + r->f0C;
    }
    if (r->f08 != 0) {
        r->f08 = D_0021B094 + r->f08;
    }
    if (o->kind == 7) {
        if (D_0021BB9D != 0) {
            r->f1F = 1;
            D_0021BB9C = 1;
        }
    }
    return 1;
}
