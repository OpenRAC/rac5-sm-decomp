/* LEVEL_18:0x1450D0 -- looks up a record through a helper and copies one word from it into the owner's sub-record when it is non-zero. */

struct Rec {
    unsigned char pad0[0x30];
    int f30;
};

struct Owner {
    unsigned char pad0[0x54];
    struct Rec *p54;
    struct Rec *p58;
};

struct Ret {
    unsigned char pad0[0x59C];
    int f59C;
};

struct Ret *func_111738(unsigned char *a, int b, int c);

int func_1450D0(struct Owner *o)
{
    struct Rec *s;
    struct Ret *r;
    int v;

    s = o->p58;
    r = func_111738((unsigned char *)o + 0x30, o->p54->f30, 0);
    if (r == 0) {
        return 0;
    }
    v = r->f59C;
    if (v == 0) {
        return 0;
    }
    s->f30 = v;
    return 1;
}
