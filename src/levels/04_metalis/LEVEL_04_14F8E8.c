/* LEVEL_04:0x14F8E8 -- looks up the record's category, validates two offset fields against the global base and moves the object's state byte into its sub-record. */
extern int D_002201B4;
extern unsigned int func_014810(int *p, unsigned int n);

struct Rec {
    char pad00[0x1C];
    unsigned int f1C;
    int f20;
    int f24;
};

struct Sub {
    char pad00[0x10];
    unsigned char b10;
};

struct Obj {
    char pad00[0x45];
    unsigned char state;
    char pad46[0x54 - 0x46];
    struct Rec *rec;
    struct Sub *sub;
};

void func_14F8E8(struct Obj *o)
{
    struct Rec *r = o->rec;
    struct Sub *s = o->sub;
    int t;

    r->f1C = func_014810((int *)r, 7);
    if (r->f20 != 0) {
        t = D_002201B4 + r->f20;
        if (*(int *)(t + 0x40) == 0) {
            r->f20 = 0;
        } else {
            r->f20 = t;
        }
    }
    if (r->f24 != 0) {
        t = D_002201B4 + r->f24;
        if (*(int *)(t + 0x40) == 0) {
            r->f24 = 0;
        } else {
            r->f24 = t;
        }
    }
    s->b10 = o->state;
    o->state = 0;
}
