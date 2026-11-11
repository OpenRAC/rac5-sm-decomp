/* LEVEL_15:0x110C28 -- aims the object's projectile record: a random jittered direction through the basis for the two scatter modes, otherwise the normalised direction to the target point, handed to the aiming routine. */
typedef struct {
    float x, y, z;
} Vec3;

typedef struct {
    char pad_00[8];
    int w08;
} Ctl;

typedef struct {
    char pad_00[0xDC];
    float m[12];
    char pad_10C[0x254 - 0x10C];
    Ctl *w254;
} Obj;

extern float D_001702E0[];
extern int rand(void);
extern float sqrtf(float x);
extern float fabsf(float x);
extern void func_0EABF0(float *a0, float *a1, float *a2);
extern void func_0E6738(float *out, float a, float b, float c, float d);
extern void func_0EA938(Vec3 *out, float *m, Vec3 *v);
extern void func_0FDEA0(int a, Vec3 *p, Vec3 *dir);

static __inline__ unsigned char NormTo(Vec3 *out, Vec3 *in)
{
    float d2 = in->x * in->x + in->y * in->y + in->z * in->z;
    float inv;
    if (d2 < 2.3841858e-7f)
        return 0;
    inv = 1.0f / sqrtf(d2);
    out->x = inv * in->x;
    out->y = inv * in->y;
    out->z = inv * in->z;
    return 1;
}

static __inline__ void NormRaw(Vec3 *v)
{
    float inv = 1.0f / sqrtf(v->x * v->x + v->y * v->y + v->z * v->z);
    v->x = inv * v->x;
    v->y = inv * v->y;
    v->z = inv * v->z;
}

static __inline__ void Scatter(float *m, Vec3 *dir, Vec3 *tmp)
{
    float f;
    float q;

    f = (float)rand();
    q = (float)(int)(f * 7.826379e-6f);
    func_0E6738((float *)tmp, 0.17f, 0.71f, f, fabsf((f - q * 127773.0f) * 16807.0f - q * 2836.0f));
    func_0EA938(dir, m, tmp);
}

void func_110C28(Obj *o, float *target)
{
    Vec3 p;
    Vec3 dir;
    Vec3 tmp;
    Ctl *c;
    int mode;

    c = o->w254;
    func_0EABF0((float *)&p, o->m, D_001702E0);
    mode = c->w08;
    if ((unsigned int)(mode - 4) < 2) {
        Scatter(o->m, &dir, &tmp);
        NormRaw(&dir);
    } else {
        tmp.x = target[0] - p.x;
        tmp.y = target[1] - p.y;
        tmp.z = target[2] - p.z;
        if (!NormTo(&dir, &tmp))
            return;
    }
    func_0FDEA0(mode, &p, &dir);
}
