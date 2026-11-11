/* LEVEL_22:0x10F3D0 -- collects up to two of four candidate targets that pass both checks, then blends a weight pair from the resulting measure. */

typedef struct Vec3 {
    float x, y, z;
} Vec3;

typedef struct Rec {
    Vec3 pts[2];
    char pad_18[0x3C];
    Vec3 ref;
    float inv;
    float t;
    char pad_68[0x1C];
    unsigned char flags[2];
} Rec;

typedef struct Src {
    char pad_00[0x10];
    int *cand[4];
    float f20;
    float f24;
} Src;

typedef struct Obj {
    char pad_00[0x54];
    Src *src;
    Rec *rec;
} Obj;

extern float fabsf(float x);
extern int func_0133B0(void *buf, int *c, void *p, int z, float *f, float *x, float *y);
extern int func_10F910(void *b, int *c, float *x, float *y, int z, float f);
extern float func_0FAA60(float *out, Vec3 *p0, Vec3 *p1, Vec3 *ref);

int func_10F3D0(Obj *self)
{
    float out[4];
    Vec3 pts[2];
    float tmp;
    float o1;
    float o2;
    unsigned char n;
    unsigned char j;
    Src *src;
    Rec *rec;
    int **cand;
    int **slot;
    float a;
    float t;

    n = 0;
    j = 0;
    src = self->src;
    rec = self->rec;
    cand = src->cand;
    do {
        if (n >= 2) {
            j = 4;
        } else {
            slot = &cand[j];
            if (*slot != 0) {
                tmp = src->f24;
                if (func_0133B0(&pts[n], *slot, &rec->ref, 0, &tmp, &o1, &o2)) {
                    if (func_10F910(&rec->pts[n], *slot, &o1, &o2, 0, src->f20)) {
                        rec->flags[n] = 1;
                        n++;
                    }
                }
            }
        }
        j++;
    } while (j < 4);
    if (n == 2) {
        a = func_0FAA60(out, &pts[0], &pts[1], &rec->ref);
        a = fabsf(a) + a;
        t = ((a + 2.0f) - fabsf(2.0f - a)) * 0.25f;
        rec->t = t;
        rec->inv = 1.0f - t;
        return 1;
    }
    return 0;
}
