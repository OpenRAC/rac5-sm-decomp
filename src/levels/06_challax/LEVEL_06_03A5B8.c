/* LEVEL_06:0x03A5B8 -- placement copy of LEVEL_01_03DE90.c: runs the object's two action callbacks while the controlled flag is set, resets or advances the action state from their results. */
typedef struct Obj Obj;

struct Obj {
    char pad00[0x100];
    short s100;
    short s102;
    char pad104[0x16C];
    float f270;
    char pad274[0x330];
    void *p5A4;
    char pad5A8[0x3B8];
    unsigned long long flags960;
    char pad968[0x30];
    int (*fn998)(Obj *, void *, unsigned short *);
    int (*fn99C)(Obj *, void *);
    int w9A0;
    char pad9A4[0x29];
    unsigned char b9CD;
    char pad9CE[2];
    int w9D0;
    int w9D4;
};

extern int func_0220D8(Obj *o);

static __inline__ long long IsLive(Obj *o)
{
    long long r;
    int t;

    r = 0;
    if (o->b9CD != 0) {
        t = o->w9A0 != 1;
        r = t;
    }
    return r;
}

void func_03A5B8(Obj *o)
{
    unsigned short out;
    int r;
    int cur;

    if (o->p5A4 == 0) {
        return;
    }
    if (o->fn998 == 0) {
        return;
    }
    if (o->fn99C == 0) {
        return;
    }
    if ((o->flags960 & 0x2000000000ull) == 0) {
        return;
    }
    if ((IsLive(o) & 0xFF) == 0) {
        return;
    }
    r = o->fn998(o, o->p5A4, &out);
    if (r == 2) {
        if (o->s100 == 0x3E) {
            o->s102 = 0;
        }
        return;
    }
    if (r != 1 && r != 3) {
        return;
    }
    cur = o->fn99C(o, o->p5A4);
    if (cur == 0) {
        return;
    }
    if (o->w9D0 != cur) {
        o->w9D4 = o->w9D0;
        o->w9D0 = cur;
    }
    if (r == 3) {
        o->s102 = out;
        return;
    }
    if (func_0220D8(o) == 3 && o->f270 < 0.009999999776482582f) {
        o->s102 = cur == 2 ? 0x3E : 0x38;
    }
}
