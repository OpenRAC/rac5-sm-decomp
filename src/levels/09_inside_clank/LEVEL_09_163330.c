/* LEVEL_09:0x163330 -- placement copy of LEVEL_01_16FA30.c: clears the object's 0x68-byte record, then relocates four offset fields of its linked record on the global base (three kept only when their target is valid). */
extern int D_001F0894;
extern void *memset(void *, int, unsigned int);

struct Rec {
    int f00;
    int f04;
    int f08;
    char pad0C[8];
    int f14;
};

struct Obj {
    char pad00[0x54];
    struct Rec *f54;
    void *f58;
};

void func_163330(struct Obj *o)
{
    struct Rec *r;
    int t;

    memset(o->f58, 0, 0x68);
    r = o->f54;
    if (r->f04 != 0) {
        r->f04 = D_001F0894 + r->f04;
    }
    if (r->f08 != 0) {
        t = D_001F0894 + r->f08;
        if (*(int *)(t + 0x40) == 0) {
            r->f08 = 0;
        } else {
            r->f08 = t;
        }
    }
    if (r->f00 != 0) {
        t = D_001F0894 + r->f00;
        if (*(int *)(t + 0x40) == 0) {
            r->f00 = 0;
        } else {
            r->f00 = t;
        }
    }
    if (r->f14 != 0) {
        t = D_001F0894 + r->f14;
        if (*(int *)(t + 0x40) == 0) {
            r->f14 = 0;
        } else {
            r->f14 = t;
        }
    }
}
