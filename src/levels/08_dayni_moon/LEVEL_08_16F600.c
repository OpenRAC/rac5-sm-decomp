/* LEVEL_08:0x16F600 -- copies the object's position to the output vector, adding the linked record's first float to its z. */
typedef struct {
    float x;
    float y;
    float z;
} Vec3;

typedef struct {
    float f00;
} Rec;

typedef struct {
    char pad00[0x30];
    Vec3 pos;
    char pad3C[0x1C];
    Rec *rec;
} Obj;

static __inline__ void Copy3(float *d, float *s)
{
    d[0] = s[0];
    d[1] = s[1];
    d[2] = s[2];
}

void func_16F600(Obj *o, Vec3 *out)
{
    Rec *r = o->rec;

    Copy3(&out->x, &o->pos.x);
    out->z = out->z + r->f00;
}
