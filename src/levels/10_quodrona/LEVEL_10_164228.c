/* LEVEL_10:0x164228 -- relocates two offset fields of the object's linked record on the global base (the second kept only when its target is valid), running the record helper in between. */
extern int D_0020F9F4;

struct Rec {
    char pad00[0x2C];
    int f2C;
    int f30;
};

struct Obj {
    char pad00[0x54];
    struct Rec *f54;
};

extern void func_02F7F0(struct Rec *r);

void func_164228(struct Obj *o)
{
    struct Rec *r = o->f54;
    int t;

    if (r->f2C != 0) {
        r->f2C = D_0020F9F4 + r->f2C;
    }
    func_02F7F0(r);
    if (r->f30 != 0) {
        t = D_0020F9F4 + r->f30;
        if (*(int *)(t + 0x40) == 0) {
            r->f30 = 0;
        } else {
            r->f30 = t;
        }
    }
}
