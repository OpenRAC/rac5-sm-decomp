/* LEVEL_03:0x18EC80 -- copies a position into the latest slot and its linked partner, then offsets the partner height. */
typedef struct Slot {
    char pad0[0x30];
    float p[3];
    char pad3C[0x61 - 0x3C];
    unsigned char f61;
    char pad62[2];
    int f64;
} Slot;
typedef struct Src {
    char pad0[4];
    float *pos;
} Src;
typedef struct Grp {
    char pad0[0xC];
    Src *fC;
    char pad10[4];
    int f14;
    char pad18[0x80 - 0x18];
    Slot *slots[1];
} Grp;
typedef struct Obj {
    char pad0[0x46];
    unsigned char f46;
    char pad47[0x54 - 0x47];
    Grp *f54;
} Obj;
extern float D_002212D8[];
extern Slot **func_18EBB0(Obj *o);

void func_18EC80(Obj *o)
{
    Grp *g = o->f54;
    Slot *s = g->slots[g->f14 - 1];
    float *d = s->p;
    float *src;
    float *e;
    Slot *q;

    s->f61 |= 1;
    src = g->fC->pos;
    s->p[0] = src[0];
    d[1] = src[1];
    d[2] = src[2];
    q = func_18EBB0(o)[g->f14 - 1];
    if (q != 0) {
        e = q->p;
        q->p[0] = s->p[0];
        e[1] = d[1];
        e[2] = d[2];
        q->p[1] = q->p[1] + D_002212D8[o->f46 & 1];
        q->f64 &= ~0x20;
        q->f64 &= ~8;
    }
}
