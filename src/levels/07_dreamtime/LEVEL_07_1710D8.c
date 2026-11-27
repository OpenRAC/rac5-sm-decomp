/* LEVEL_07:0x1710D8 -- placement copy of LEVEL_01_16C298.c: finds nearby objects inside an annular cylinder and applies damage or tracking effects. */
typedef struct {
    float x;
    float y;
    float z;
} Vec3;

typedef struct {
    char pad0[0x20];
    void *fn20;
} Cls;

typedef struct {
    char pad0[0x10];
    Vec3 up10;
    float pad1C;
    char pad20[0x30 - 0x20];
    Vec3 pos30;
    float pad3C;
    Cls *cls40;
} Obj;

extern char D_0024AA40[];

extern float sqrtf(float x);
extern int func_01CAA8(Obj **out, int max, Vec3 *pos, int a, int b, float r, int c, int d);
extern long long func_076340(Obj *o);
extern void func_076558(Obj *o, int a1, int a2, int a3, float f12);
extern void func_077120(void *a, Obj *obj, int c, int d, float h);

static __inline__ void ScaleAdd3(Vec3 *dst, const Vec3 *a, const Vec3 *b, float s)
{
    dst->x = a->x + b->x * s;
    dst->y = a->y + b->y * s;
    dst->z = a->z + b->z * s;
}

static __inline__ void Sub3(Vec3 *dst, const Vec3 *a, const Vec3 *b)
{
    dst->x = a->x - b->x;
    dst->y = a->y - b->y;
    dst->z = a->z - b->z;
}

static __inline__ void Normalize3(Vec3 *v)
{
    float len2 = v->x * v->x + v->y * v->y + v->z * v->z;
    if (!(len2 < 2.384185791015625e-07f)) {
        float inv = 1.0f / sqrtf(len2);
        v->x *= inv;
        v->y *= inv;
        v->z *= inv;
    }
}

static __inline__ unsigned char InRing(const Vec3 *center, const Vec3 *pos, float rOuter, float rInner, float height)
{
    float dx = center->x - pos->x;
    float dz = center->z - pos->z;
    float d2 = dx * dx + dz * dz;
    if (d2 <= rOuter * rOuter && d2 >= rInner * rInner && pos->y - center->y < height) {
        return 1;
    }
    return 0;
}

void func_1710D8(Obj *a0, int mode, float rOuter, float rInner)
{
    Obj *objs[16];
    Vec3 center;
    float pad4C;
    Vec3 diff;
    unsigned int n;
    unsigned int i;

    n = func_01CAA8(objs, 0x10, &a0->pos30, 0x469, 1, rOuter, 0x36, 1);
    ScaleAdd3(&center, &a0->pos30, &a0->up10, -0.5f);

    for (i = 0; i < n; i++) {
        Obj *o = objs[i];
        if (o != 0 && o->cls40 != 0 && o->cls40->fn20 != 0) {
            if (InRing(&center, &o->pos30, rOuter, rInner, 1.0f)) {
                Sub3(&diff, &o->pos30, &a0->pos30);
                Normalize3(&diff);
                if (mode == 2 && ((int (*)(Obj *o))func_076340)(o) != 0) {
                    func_076558(o, 0xFF, 0, 0, 0.0f);
                } else if (mode == 3) {
                    func_077120(D_0024AA40, o, 0x100, 0, 180.0f);
                }
            }
        }
    }
}
