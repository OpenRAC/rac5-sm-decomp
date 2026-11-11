/* LEVEL_02:0x16BE48 -- updates a slot's state byte from flags and positional drift, returning it. */
typedef struct Pos {
    char pad0[0x30];
    float f30;
    char pad1[4];
    float f38;
} Pos;

typedef struct Ref {
    char pad0[8];
    float f8;
    float fC;
} Ref;

typedef struct Slot {
    Pos *p0;
    Ref *p4;
    char pad0[0x18 - 8];
    unsigned char b18;
    char pad1;
    unsigned char b1A;
    char pad2[0x1C - 0x1B];
} Slot;

typedef struct Obj {
    char pad0[0x54];
    Slot *p54;
} Obj;

extern void func_16BF48(Obj *, unsigned char, float *);

int func_16BE48(Obj *obj, unsigned char idx)
{
    Slot *s = &obj->p54[idx];
    Ref *r;
    Pos *p;
    float thr;

    if (s->b18 & 1) {
        if (!(s->b18 & 8)) {
            r = s->p4;
            p = s->p0;
            func_16BF48(obj, idx, &r->f8);
            thr = 0.3f;
            if ((unsigned char)(s->b1A - 2) < 2)
                thr = 0.45f;
            if (__builtin_fabsf(p->f30 - r->f8) > thr || __builtin_fabsf(p->f38 - r->fC) > thr) {
                s->b1A = 1;
            } else if (s->b18 & 2) {
                s->b1A = 2;
            } else {
                s->b1A = 3;
            }
        } else {
            s->b1A = 3;
        }
    } else {
        s->b1A = 0;
    }
    return s->b1A;
}
