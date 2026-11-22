/* USA LEVEL_04.REL:0x16FF90, 492-byte candidate (22 November 2026).
 * Measured gnu-ee-trial-divpad -fno-gcse --as: 27 differing words; first
 * difference at 0x78.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct {
    float v[3];
    float len;
    int i10;
    int i14;
    int i18;
} Heading;

typedef struct {
    char pad0[0x30];
    float pos[3];
    char pad3C[0x9];
    char b45;
    char pad46[0x12];
    Heading *h;
} Obj;

extern float D_00231808[3];
extern float D_002396F0;
extern int rand(void);
extern float sqrtf(float);

void func_16FF90(Obj *a, Obj *b, int c)
{
    Heading *h = a->h;
    float d[3];
    float cr[3];
    float *bp = b->pos;
    float *dv = D_00231808;
    float *ap = a->pos;
    float len2;
    float jitter;
    float inv;
    float len;
    float base;
    float range;

    a->b45 = 3;
    h->i18 = c;
    h->i14 = (int)b;
    h->v[0] = 0.10000001f * dv[0];
    range = 0.0f;
    h->v[1] = 0.10000001f * dv[1];
    base = D_002396F0;
    h->v[2] = dv[2] * 0.10000001f;
    d[0] = bp[0] - ap[0];
    d[1] = bp[1] - ap[1];
    d[2] = bp[2] - ap[2];
    cr[2] = dv[0] * d[1] - dv[1] * d[0];
    cr[0] = dv[1] * d[2] - dv[2] * d[1];
    cr[1] = d[0] * dv[2] - d[2] * dv[0];
    jitter = (float)rand() * 0x1p-31f * range + base;
    h->v[0] = h->v[0] + cr[0] * jitter;
    h->v[1] = h->v[1] + cr[1] * jitter;
    h->v[2] = h->v[2] + cr[2] * jitter;
    len2 = h->v[0] * h->v[0] + h->v[1] * h->v[1] + h->v[2] * h->v[2];
    if (len2 < 0x1p-22f) {
        len = 0.0f;
    } else {
        float s = sqrtf(len2);

        inv = 1.0f / s;
        len = s;
        h->v[0] = h->v[0] * inv;
        h->v[1] = h->v[1] * inv;
        h->v[2] = h->v[2] * inv;
    }
    h->len = len;
}
