/* USA LEVEL_01.REL:0x0595A8, 492-byte candidate (22 November 2026).
 * Measured gnu-ee-trial-divpad: 30 differing words; first difference at 0x40.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
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

extern int func_015990(float step, Track *t);
extern float func_0570C8(Track *t, int index);
extern int func_015598(float time, Vec3 *out, Track *t, float *start, int *index, float *key, int flag);
extern float sqrtf(float x);

int func_0595A8(float dt, Vec3 *out, Walker *w, Track *t)
{
    float len;
    float k;
    Vec3 d;
    Vec3 *dir;
    Vec3 *base;
    int i;

    w->time = w->time + dt;
    if (func_015990(0.0625f, t) != 0) {
        if (w->time >= t->length) {
            w->index = 0;
            w->start = 0.0f;
            w->key = w->time = w->time - t->length;
        } else if (w->time < 0.0f) {
            w->time = w->time + t->length;
            w->index = t->count - 2;
            w->start = func_0570C8(t, t->count - 2);
            w->key = w->time - w->start;
        }
    } else if (w->time >= t->length) {
        i = t->count - 2;
        w->index = i;
        w->key = t->keys[i];
        w->start = w->time = t->length;
        dir = &w->dir;
        len = sqrtf(dir->x * dir->x + dir->y * dir->y + dir->z * dir->z);
        base = &w->base;
        k = 2.0f / len;
        d.x = k * dir->x;
        out->x = base->x + d.x;
        d.y = k * dir->y;
        d.z = k * dir->z;
        out->y = base->y + d.y;
        out->z = base->z + d.z;
        return 3;
    }
    return func_015598(w->time, out, t, &w->start, &w->index, &w->key, 0);
}
