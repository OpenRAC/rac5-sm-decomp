/* LEVEL_01:0x1CD998 -- computes a point offset half a vector backwards from a base point, stores it and a copy, and returns 1. */
typedef struct {
    float x;
    float y;
    float z;
} Vec3;

typedef struct {
    char pad00[0x10];
    float v[3];
    char pad1C[0x14];
    float p[3];
} Obj;

static __inline__ void Madd3(float *d, float *p, float *v, float s)
{
    d[0] = p[0] + v[0] * s;
    d[1] = p[1] + v[1] * s;
    d[2] = p[2] + v[2] * s;
}

int func_1CD998(Vec3 *d, Vec3 *d2, Obj *o)
{
    Madd3((float *)d, o->p, o->v, -0.5f);
    *d2 = *d;
    return 1;
}
