/* LEVEL_09:0x055C98 -- placement copy of LEVEL_01_0595A8.c: advances a path timer over a keyframe track and places the point two units along the heading when the track ends. */
typedef struct { float x, y, z; } Vec3;

typedef struct {
    char pad00[8];
    float *keys;
    char padC[4];
    float length;
    unsigned short count;
} Track;

typedef struct {
    char pad000[0x200];
    Vec3 dir;
    char pad20C[0xC88 - 0x20C];
    int index;
    float key;
    float start;
    float time;
    char padC98[0x10];
    Vec3 base;
} Walker;

extern int func_015B50(Track *t, float step);
extern float func_0537B8(Track *t, int i, float sum);
extern int func_015758(float time, Vec3 *out, Track *t, float *start, int *index, float *key, int flag);
extern float sqrtf(float x);

static __inline__ void ScaleToLen(Vec3 *dst, Vec3 *src, float s)
{
    float k;

    k = s / sqrtf(src->x * src->x + src->y * src->y + src->z * src->z);
    dst->x = k * src->x;
    dst->y = k * src->y;
    dst->z = k * src->z;
}

static __inline__ void AddVec3(Vec3 *out, Vec3 *a, Vec3 *b)
{
    out->x = a->x + b->x;
    out->y = a->y + b->y;
    out->z = a->z + b->z;
}

int func_055C98(float dt, Vec3 *out, Walker *w, Track *t)
{
    Vec3 d;
    int i;
    float r;

    w->time = w->time + dt;
    if (func_015B50(t, 0.0625f) != 0) {
        if (w->time >= t->length) {
            r = w->time - t->length;
            w->index = 0;
            w->start = 0.0f;
            w->key = w->time = r;
        } else if (w->time < 0.0f) {
            w->time = w->time + t->length;
            w->index = t->count - 2;
            w->start = func_0537B8(t, t->count - 2, 0.0f);
            w->key = w->time - w->start;
        }
    } else if (w->time >= t->length) {
        i = t->count - 2;
        w->index = i;
        w->key = t->keys[i];
        w->start = w->time = t->length;
        ScaleToLen(&d, &w->dir, 2.0f);
        AddVec3(out, &w->base, &d);
        return 3;
    }
    return func_015758(w->time, out, t, &w->start, &w->index, &w->key, 0);
}
