/* LEVEL_01:0x0649F8 -- horizontal distance from the node point to the
   sub-record vector at 0x59C + 0x30, then the record is copied back. */
typedef struct {
    float x, y, z, w;
} VEC4;

typedef struct {
    char pad_00[0x30];
    VEC4 v;
} Sub;

typedef struct {
    char pad_00[0x59C];
    Sub *p_59C;
} Obj;

extern float sqrtf(float);

void func_0649F8(Obj *o, VEC4 *p, float *out)
{
    VEC4 *v = &o->p_59C->v;
    VEC4 d;
    VEC4 *w;

    d.x = v->x - p->x;
    d.y = v->y - p->y;
    d.z = v->z - p->z;
    d.y = 0.0f;
    *out = sqrtf(d.x * d.x + d.y + d.z * d.z);

    w = &o->p_59C->v;
    p->x = w->x;
    p->y = w->y;
    p->z = w->z;
    p->w = w->w;
}
