/* LEVEL_08:0x1B3E30 -- relocates seven offset fields of the object's linked record on the global base (all but the second kept only when their target is valid). */
extern int D_0024FC54;

struct Rec {
    int f00;
    int f04;
    int f08;
    int f0C;
    int f10;
    int f14;
    int f18;
};

struct Obj {
    char pad00[0x54];
    struct Rec *f54;
};

void func_1B3E30(struct Obj *o)
{
    struct Rec *r = o->f54;
    int t;

    if (r->f00 != 0) {
        t = D_0024FC54 + r->f00;
        if (*(int *)(t + 0x40) == 0) {
            r->f00 = 0;
        } else {
            r->f00 = t;
        }
    }
    if (r->f04 != 0) {
        r->f04 = D_0024FC54 + r->f04;
    }
    if (r->f08 != 0) {
        t = D_0024FC54 + r->f08;
        if (*(int *)(t + 0x40) == 0) {
            r->f08 = 0;
        } else {
            r->f08 = t;
        }
    }
    if (r->f0C != 0) {
        t = D_0024FC54 + r->f0C;
        if (*(int *)(t + 0x40) == 0) {
            r->f0C = 0;
        } else {
            r->f0C = t;
        }
    }
    if (r->f10 != 0) {
        t = D_0024FC54 + r->f10;
        if (*(int *)(t + 0x40) == 0) {
            r->f10 = 0;
        } else {
            r->f10 = t;
        }
    }
    if (r->f14 != 0) {
        t = D_0024FC54 + r->f14;
        if (*(int *)(t + 0x40) == 0) {
            r->f14 = 0;
        } else {
            r->f14 = t;
        }
    }
    if (r->f18 != 0) {
        t = D_0024FC54 + r->f18;
        if (*(int *)(t + 0x40) == 0) {
            r->f18 = 0;
        } else {
            r->f18 = t;
        }
    }
}
