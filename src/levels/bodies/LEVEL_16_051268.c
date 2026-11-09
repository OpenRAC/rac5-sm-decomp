/* LEVEL_16:0x051268 -- resets motion fields from a clamped scaled value and advances a segment when a query succeeds. */
typedef struct Vec3 { float x, y, z; } Vec3;

typedef struct Seg {
    int i;
    float f;
} Seg;

typedef struct Obj {
    char pad0[0x30];
    float pos[3];
    char pad1[0xC88 - 0x3C];
    int wC88;
    float fC8C;
    float fC90;
    float fC94;
    Vec3 vC98;
    char pad2[0xCB8 - 0xCA4];
    float fCB8;
    float fCBC;
    char pad3[0xCC4 - 0xCC0];
    int wCC4;
    char pad4[0xCD4 - 0xCC8];
    float fCD4;
} Obj;

extern int func_014910(void *, void *, float *, int *, float *, int, int);
extern float func_04FB80(void *, int, float);

void func_051268(Obj *obj, void *arg, float t)
{
    float buf[4];
    Seg seg;
    float a, b;
    float r;
    Vec3 *pv = &obj->vC98;

    t = t * 0.6f;
    a = 0.266666681f - t;
    t = t + 0.266666681f;
    t = t + __builtin_fabsf(a);
    b = 1.06666672f - t;
    t = t + 1.06666672f;
    t = t - __builtin_fabsf(b);
    t = t * 0.25f;
    obj->fCD4 = t;
    obj->wCC4 = 7;
    obj->fCB8 = 0.13333334f;
    obj->fCBC = 0.0222222246f;
    obj->vC98.x = 0.0f;
    pv->y = 0.0f;
    pv->z = 0.0f;
    seg.f = obj->fC8C;
    seg.i = obj->wC88;
    if (func_014910(buf, arg, obj->pos, &seg.i, &seg.f, 0, 0) != 0) {
        r = func_04FB80(arg, seg.i, 0.0f);
        obj->fC8C = seg.f;
        obj->wC88 = seg.i;
        obj->fC90 = r;
        obj->fC94 = r + seg.f;
    }
}
