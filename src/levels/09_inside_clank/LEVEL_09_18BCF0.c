/* LEVEL_09:0x18BCF0 -- relocates four offset fields of the object's linked record on the global base (the first two kept only when their target is valid), then runs the record helper. */
extern int D_001F0894;

struct Rec {
    char pad00[0x2C];
    int f2C;
    char pad30[0x1C];
    int f4C;
    int f50;
    int f54;
};

struct Obj {
    char pad00[0x54];
    struct Rec *f54;
};

extern void func_02E730(struct Rec *r);

void func_18BCF0(struct Obj *o)
{
    struct Rec *r = o->f54;
    int t;

    if (r->f2C != 0) {
        t = D_001F0894 + r->f2C;
        if (*(int *)(t + 0x40) == 0) {
            r->f2C = 0;
        } else {
            r->f2C = t;
        }
    }
    if (r->f4C != 0) {
        t = D_001F0894 + r->f4C;
        if (*(int *)(t + 0x40) == 0) {
            r->f4C = 0;
        } else {
            r->f4C = t;
        }
    }
    if (r->f50 != 0) {
        r->f50 = D_001F0894 + r->f50;
    }
    if (r->f54 != 0) {
        r->f54 = D_001F0894 + r->f54;
    }
    func_02E730(r);
}
