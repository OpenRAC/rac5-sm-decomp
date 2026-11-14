/* LEVEL_05:0x1A0488 -- placement copy of LEVEL_01_1A5E88.c: marks the object, relocates the first offset of its linked record on the global base (kept only when its target is valid) and clears the two words after a 16-byte clear of its other record; returns 1. */
extern int D_001F5E14;
extern void *memset(void *, int, unsigned int);

struct Link {
    int w0;
};

struct Rec {
    int w00;
    int w04;
    int w08;
    int w0C;
    int w10;
    int w14;
};

struct Obj {
    char pad00[0x54];
    struct Link *f54;
    struct Rec *f58;
    char pad5C[8];
    unsigned int w64;
};

int func_1A0488(struct Obj *o)
{
    struct Link *l;
    struct Rec *r;
    int t;

    o->w64 = o->w64 | 0x20;
    l = o->f54;
    r = o->f58;
    if (l->w0 != 0) {
        t = D_001F5E14 + l->w0;
        if (*(int *)(t + 0x40) == 0) {
            l->w0 = 0;
        } else {
            l->w0 = t;
        }
    }
    memset(r, 0, 16);
    r->w14 = 0;
    r->w10 = 0;
    return 1;
}
