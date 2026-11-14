/* LEVEL_04:0x0550D8 -- placement copy of LEVEL_01_053718.c: when the object has its marker block, copies the block's vector into the object's second vector slot (setting the scale to 1.0 when the block's weight is set) and stores the scale and 0.04 times it; then copies three global floats into the object and runs func_04A0C0. */
typedef struct {
    float x;
    float y;
    float z;
    float w;
} Vec4;

typedef struct {
    Vec4 v;
    float weight;
} Block;

typedef struct {
    char padC0[0xC0];
    Block block;
    char padD4[0x210 - 0xD4];
    Vec4 slot;
    char pad220[0x230 - 0x220];
    float f230;
    float f234;
    float f238;
    char pad23C[4];
    float f240;
    char pad244[0x26C - 0x244];
    float f26C;
} Obj;

static __inline__ void Copy4(Vec4 *d, Vec4 *s)
{
    d->x = s->x;
    d->y = s->y;
    d->z = s->z;
    d->w = s->w;
}

extern float D_0020DC94[1];
extern float D_0020DC98[1];
extern float D_0020DC9C[1];
extern void func_04A0C0(Obj *o);

void func_0550D8(Obj *o)
{
    Block *b = &o->block;
    Vec4 t;
    float s;

    if (b != 0) {
        s = b->weight;
        t = b->v;
        if (s != 0.0f) {
            Copy4(&o->slot, &t);
            s = 1.0f;
        }
        o->f26C = s;
        o->f240 = s * 0.03999999910593033f;
    }
    o->f230 = D_0020DC94[0];
    o->f234 = D_0020DC98[0];
    o->f238 = D_0020DC9C[0];
    func_04A0C0(o);
}
