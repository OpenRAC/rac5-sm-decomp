/* LEVEL_15:0x13BB20 -- applies the source's scaled velocity to the object: runs the helper on the pair, forwards the source's direction vector and adds the scaled velocity to the object's position. */
typedef struct Vec3 {
    float x;
    float y;
    float z;
} Vec3;

typedef struct Obj {
    char pad00[0x24];
    Vec3 pos;
} Obj;

typedef struct Src {
    char pad00[0x10];
    Vec3 dir;
    char pad1C[4];
    Vec3 vel;
} Src;

extern void func_0E8910(Obj *o, Src *s);
extern void func_0ECE10(int flag, Obj *o, float m0, float m1, float m2);

static __inline__ void ScaleVec(float *d, float *v, float s)
{
    d[0] = v[0] * s;
    d[1] = v[1] * s;
    d[2] = v[2] * s;
}

void func_13BB20(Obj *o, Src *s)
{
    Vec3 delta;
    Vec3 *dir;

    ScaleVec(&delta.x, &s->vel.x, 0.00124359130859375f);
    func_0E8910(o, s);
    dir = &s->dir;
    func_0ECE10(0, o, dir->x, dir->y, dir->z);
    o->pos.x = o->pos.x + delta.x;
    o->pos.y = o->pos.y + delta.y;
    o->pos.z = o->pos.z + delta.z;
}
