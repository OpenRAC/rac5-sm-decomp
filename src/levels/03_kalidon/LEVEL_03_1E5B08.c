/* LEVEL_03:0x1E5B08 -- placement copy of LEVEL_01_1D3B08.c: derives reciprocal scale factors from a size record. */
typedef struct {
    float x, y, z;
    char pad0[4];
    float w;
    char pad1[4];
    int i18, i1C;
    char pad2[0x38];
    float a, b;
    char pad3[4];
    float f64, f68;
    char pad4[0x30];
    float f9C, fA0, fA4, fA8, fAC, fB0, fB4;
} Obj;
extern void func_1E3FB8(Obj *o);
extern float fabsf(float);

void func_1E5B08(Obj *o)
{
    float a, b, dd, ratio, iy;

    a = o->a;
    b = o->b;
    dd = b - a;
    iy = 1.0f / o->y;
    ratio = 1.0f / (o->y / o->x);
    o->fA4 = o->w * iy;
    o->fA8 = o->y / (((a + b) - fabsf(dd)) * 0.5f);
    o->f9C = ratio;
    o->fB0 = (float)o->i18 * ratio;
    o->fAC = o->z * iy;
    o->f64 = a * iy;
    o->fA0 = iy;
    o->f68 = dd * iy;
    o->fB4 = (float)o->i1C * ratio;
    func_1E3FB8(o);
}
