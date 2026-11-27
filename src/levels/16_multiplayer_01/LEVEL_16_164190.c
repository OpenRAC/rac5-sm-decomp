/* LEVEL_16:0x164190 -- stores a two-float input and an extra word into the object's record and the object, scales the second float by one half, offsets the object's position from a base point along a global direction by that amount and runs a helper. */
typedef struct { float x; float y; float z; } Vec3;
typedef struct { float x; float y; } Vec2;
typedef struct { float x; float y; char pad08[4]; int w0C; } Rec;
typedef struct {
    float x;
    char pad04[0x10];
    float f14;
    char pad18[0x10];
    float f28;
    char pad2C[4];
    Vec3 pos;
    char pad3C[0x1C];
    Rec *rec;
} Obj;

extern Vec3 D_001CCD48;
extern void func_118538(Obj *o, int value);

static __inline__ void AddScaled(float *out, float *a, float *d, float k)
{
    out[0] = a[0] + d[0] * k;
    out[1] = a[1] + d[1] * k;
    out[2] = a[2] + d[2] * k;
}

void func_164190(Obj *o, Vec3 *base, Vec2 *in, int arg, int word)
{
    Rec *rec = o->rec;
    float ix = in->x;
    float half;

    rec->x = ix;
    rec->y = in->y;
    rec->w0C = word;
    o->x = ix;
    o->f28 = rec->x;
    o->f14 = in->y * 0.5f;
    half = rec->y * 0.5f;
    AddScaled(&o->pos.x, &base->x, &D_001CCD48.x, half);
    func_118538(o, arg);
}
