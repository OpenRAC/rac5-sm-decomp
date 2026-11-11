/* LEVEL_05:0x16A900 -- relocates six offset fields of the object's linked record on the global base (four kept only when their target is valid) and clears two flag bits of the object. */
extern int D_001F5E14;

struct Rec {
    char pad00[0x10];
    int f10;
    int f14;
    int f18;
    char pad1C[0x10];
    int f2C;
    int f30;
    int f34;
};

struct Obj {
    char pad00[0x54];
    struct Rec *f54;
    char pad58[0xC];
    int w64;
};

void func_16A900(struct Obj *o)
{
    struct Rec *r = o->f54;
    int t;

    if (r->f2C != 0) {
        t = D_001F5E14 + r->f2C;
        if (*(int *)(t + 0x40) == 0) {
            r->f2C = 0;
        } else {
            r->f2C = t;
        }
    }
    if (r->f10 != 0) {
        r->f10 = D_001F5E14 + r->f10;
    }
    if (r->f14 != 0) {
        r->f14 = D_001F5E14 + r->f14;
    }
    if (r->f18 != 0) {
        t = D_001F5E14 + r->f18;
        if (*(int *)(t + 0x40) == 0) {
            r->f18 = 0;
        } else {
            r->f18 = t;
        }
    }
    if (r->f34 != 0) {
        t = D_001F5E14 + r->f34;
        if (*(int *)(t + 0x40) == 0) {
            r->f34 = 0;
        } else {
            r->f34 = t;
        }
    }
    if (r->f30 != 0) {
        t = D_001F5E14 + r->f30;
        if (*(int *)(t + 0x40) == 0) {
            r->f30 = 0;
        } else {
            r->f30 = t;
        }
    }
    o->w64 &= ~0x20;
    o->w64 &= ~0x10;
}
