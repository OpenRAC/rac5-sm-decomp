/* LEVEL_16:0x157330 -- runs the record helper, relocates one offset field of the object's linked record on the global base and validates the first through its target word. */
extern int D_001B48A4;

struct Rec {
    int f0;
    int f4;
    char pad08[0x28];
    int f30;
};

struct Obj {
    char pad00[0x54];
    struct Rec *f54;
};

extern void func_02D780(int *p);

void func_157330(struct Obj *o)
{
    struct Rec *r = o->f54;
    int t;

    func_02D780(&r->f4);
    if (r->f30 != 0) {
        r->f30 = D_001B48A4 + r->f30;
    }
    if (r->f0 != 0) {
        t = D_001B48A4 + r->f0;
        if (*(int *)(t + 0x40) == 0) {
            r->f0 = 0;
        } else {
            r->f0 = t;
        }
    }
}
