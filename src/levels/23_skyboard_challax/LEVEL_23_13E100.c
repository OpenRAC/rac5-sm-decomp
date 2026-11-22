/* LEVEL_23:0x13E100 -- placement copy of LEVEL_22_116D48.c: rescales the three basis rows of an object's matrix to the length stored in its info record: the translation row is parked and replaced by a constant vector while the helper runs, then restored. */
extern float sqrtf(float x);

typedef struct V3 {
    float x;
    float y;
    float z;
} V3;

typedef struct Info {
    char pad00[0x8C];
    float len;
} Info;

typedef struct Obj {
    V3 r0;
    float w0C;
    V3 r1;
    float w1C;
    V3 r2;
    float w2C;
    V3 trans;
    char pad3C[0x58 - 0x3C];
    Info *info;
} Obj;

extern V3 D_001EAFD8;

extern void func_115DD8(Obj *a, Obj *b, Info *info);

static __inline__ void CopyV3(V3 *d, V3 *s)
{
    d->x = s->x;
    d->y = s->y;
    d->z = s->z;
}

static __inline__ void Norm(V3 *v, float len)
{
    float len2;
    float k;

    len2 = v->x * v->x + v->y * v->y + v->z * v->z;
    if (!(len2 < 2.3841858e-07f)) {
        k = len / sqrtf(len2);
        v->x = v->x * k;
        v->y = v->y * k;
        v->z = v->z * k;
    }
}

void func_13E100(Obj *o)
{
    V3 saved;
    Info *info;

    if (o != 0) {
        info = o->info;
        if (info != 0) {
            CopyV3(&saved, &o->trans);
            CopyV3(&o->trans, &D_001EAFD8);
            func_115DD8(o, o, info);
            Norm(&o->r0, info->len);
            Norm(&o->r1, info->len);
            Norm(&o->r2, info->len);
            CopyV3(&o->trans, &saved);
        }
    }
}
