/* LEVEL_02:0x1406B8 -- placement copy of LEVEL_01_13A340.c: checks a two-level lookup against two tags and otherwise returns five when a flag word is set, or the result of a helper when it is clear. */

struct R {
    unsigned char pad0[0x24];
    int f24;
};

struct Q {
    unsigned char pad0[0x40];
    struct R *f40;
};

struct P {
    unsigned char pad0[0x6C];
    int f6C;
    unsigned char pad1[0x74 - 0x70];
    struct Q *f74;
};

struct Obj {
    unsigned char pad0[0x58];
    struct P *p58;
};

int func_140720(struct Obj *o);

int func_1406B8(struct Obj *o)
{
    struct P *p;
    int k;
    int v;

    p = o->p58;
    if (p->f74 == 0) {
        v = p->f6C;
    } else {
        k = p->f74->f40->f24;
        if (k == 0x7B5C3A21 || k == 0x6C498048) {
            return 0;
        }
        v = p->f6C;
    }
    if (v != 0) {
        return 5;
    }
    return func_140720(o);
}
