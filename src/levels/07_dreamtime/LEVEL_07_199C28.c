/* LEVEL_07:0x199C28 -- for a non-null record, clears one flag bit, sets another, copies a float from the owner and calls a handler through a function pointer. */

struct R {
    unsigned char pad0[0x28];
    void (*f28)(void *p);
};

struct Q {
    unsigned char pad0[0x10];
    struct R *f10;
};

struct P {
    unsigned char pad0[0x34];
    float f34;
    unsigned char pad1[0x40 - 0x38];
    struct Q *f40;
    unsigned char pad2[0x64 - 0x44];
    int f64;
    unsigned int f68;
};

struct Obj {
    unsigned char pad0[0x34];
    float f34;
};

void func_199C28(struct Obj *o, struct P *p)
{
    struct Q *q;
    int v;
    float f;
    void (*fn)(void *p);

    if (p == 0) {
        return;
    }
    q = p->f40;
    v = p->f64 & -33;
    p->f64 = v;
    f = o->f34;
    p->f68 = 0xFFFFFFFF;
    p->f34 = f;
    p->f64 = v | 0x40;
    fn = q->f10->f28;
    if (fn != 0) {
        fn(p);
    }
}
