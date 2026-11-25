/* LEVEL_04:0x08F540 -- placement copy of LEVEL_01_08C270.c: scales the source record's velocity by a small factor, runs two helpers and then adds the scaled vector to the object's position. */
typedef struct {
    float x, y, z;
} V3;

typedef struct {
    char pad00[0x30];
    V3 pos;
} Obj;

typedef struct {
    char pad00[0x10];
    V3 a;
    char pad1C[4];
    V3 vel;
} Src;

extern void func_12EDA8(Obj *o, Src *s);
extern void func_1352C0(int a, Obj *o, float x, float y, float z);

static __inline__ void Scale(V3 *out, V3 *in, float k)
{
    out->x = in->x * k;
    out->y = in->y * k;
    out->z = in->z * k;
}

void func_08F540(Obj *o, Src *s)
{
    V3 d;
    V3 *a;

    Scale(&d, &s->vel, 0.0012499999720603228f);
    func_12EDA8(o, s);
    a = &s->a;
    func_1352C0(0, o, a->x, a->y, a->z);
    o->pos.x = o->pos.x + d.x;
    o->pos.y = o->pos.y + d.y;
    o->pos.z = o->pos.z + d.z;
}
