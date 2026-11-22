/* USA LEVEL_16.REL:0x043AA0, 592-byte candidate (22 November 2026).
 * Measured gnu-ee-trial-divpad: 7 differing words; first difference at 0xCC.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct {
    float x, y, z, w;
} Vec4;

typedef struct {
    Vec4 dir;
    float speed;
} Sub;

typedef struct {
    char pad00[0xC0];
    Sub sub;
    char padD4[0x2C];
    short mode;
    char pad102[0x10E];
    float ndir[3];
    char pad21C[0x24];
    float scale;
    char pad244[0x28];
    float speed;
    char pad270[0x6F0];
    unsigned long long flags;
} Obj;

typedef struct {
    float f0;
    char pad04[0x10];
    float f14;
    char pad18[4];
} Ent;

extern Ent D_001A2170[];
extern float D_001A21E4;
extern float D_001A221C;

extern float sqrtf(float x);

extern void func_044178(Obj *o);

static __inline__ void Scale3(float *d, Vec4 *v, float k)
{
    d[0] = k * v->x;
    d[2] = k * v->z;
    d[1] = k * v->y;
}

void func_043AA0(Obj *o)
{
    Sub *s;
    Vec4 v;
    float speed;
    float l2;
    float inv;
    float *nd;
    int idx;

    s = &o->sub;
    if (s != 0) {
        speed = s->speed;
        v = s->dir;
        if (speed != 0.0f) {
            nd = o->ndir;
            v.y = 0.0f;
            l2 = v.x * v.x + v.y * v.y + v.z * v.z;
            if (!(l2 < 2.3841858e-07f)) {
                inv = 1.0f / sqrtf(l2);
                Scale3(nd, &v, inv);
            }
        }
        o->speed = speed;
        if (o->mode == 0xF) {
            o->scale = 0.060000002f;
        } else if (o->mode == 0x3B) {
            idx = 2;
            if (speed == 0.0f) {
                idx = 0;
            }
            o->scale = D_001A2170[idx].f0 * 1.2f * 0.5f;
        } else if (speed == 0.0f) {
            o->scale = 0.0f;
        } else if ((o->flags & 0x10000000000LL) != 0) {
            o->scale = D_001A21E4 * 1.2f;
        } else if (o->mode == 0x34) {
            o->scale = D_001A221C * 2.75f;
        } else if (o->mode == 0x49) {
            o->scale = 0.120000005f;
        } else {
            idx = 2;
            if (speed < D_001A2170[1].f14) {
                idx = 1;
            }
            o->scale = D_001A2170[idx].f0 * 1.2f;
        }
    }
    func_044178(o);
}
