/* LEVEL_01:0x1C10A0 -- relocates four offset fields of the object's linked record on the global base (the third kept only when its target is valid), then runs the record helper. */
extern int D_00206D94;

struct Rec {
    char pad00[0x2C];
    int f2C;
    int f30;
    char pad34[4];
    int f38;
    int f3C;
};

struct Obj {
    char pad00[0x54];
    struct Rec *f54;
};

extern void func_02F8D0(struct Rec *r);

void func_1C10A0(struct Obj *o)
{
    struct Rec *r = o->f54;
    int t;

    if (r->f2C != 0) {
        r->f2C = D_00206D94 + r->f2C;
    }
    if (r->f3C != 0) {
        r->f3C = D_00206D94 + r->f3C;
    }
    if (r->f30 != 0) {
        t = D_00206D94 + r->f30;
        if (*(int *)(t + 0x40) == 0) {
            r->f30 = 0;
        } else {
            r->f30 = t;
        }
    }
    if (r->f38 != 0) {
        r->f38 = D_00206D94 + r->f38;
    }
    func_02F8D0(r);
}
