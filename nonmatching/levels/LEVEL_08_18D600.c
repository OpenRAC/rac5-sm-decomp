/* USA LEVEL_08.REL:0x18D600, 608-byte candidate (22 November 2026).
 * Measured gnu-ee-trial-divpad: 8 differing words; first difference at 0xA4.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
extern float sqrtf(float x);
extern float cosf(float x);
extern int rand(void);

typedef struct Cam {
    char pad_00[0x30];
    float pos[3];
} Cam;

typedef struct Obj {
    char pad_00[0x30];
    float pos[3];
    char pad_3C[0x18];
    float *out;
} Obj;

extern Cam D_002843D0;
extern float D_00261B08[3];

static __inline__ float RandRange(float lo, float hi)
{
    float range = hi - lo;

    return lo + range * ((float)rand() * (1.0f / 2147483648.0f));
}

static __inline__ void Sub3(float *out, float *a, float *b)
{
    out[0] = a[0] - b[0];
    out[1] = a[1] - b[1];
    out[2] = a[2] - b[2];
}

static __inline__ void Cross3(float *out, float *a, float *b)
{
    out[0] = a[1] * b[2] - a[2] * b[1];
    out[1] = a[2] * b[0] - a[0] * b[2];
    out[2] = a[0] * b[1] - a[1] * b[0];
}

void func_18D600(float a, float b, float c, Obj *o)
{
    float d[4];
    float side[4];
    float *out;
    Cam *cam;
    float len;
    float root;
    float inv;
    float ang;
    float r;
    float cs;
    float sn;

    cam = &D_002843D0;
    out = o->out;
    Sub3(d, o->pos, cam->pos);
    d[1] = 0.0f;
    len = d[0] * d[0] + d[2] * d[2];
    if (!(len < 2.3841858e-07f)) {
        root = sqrtf(len);
        inv = 1.0f / root;
        d[2] = inv * d[2];
        d[0] = inv * d[0];
    }
    Cross3(side, d, D_00261B08);
    ang = RandRange(-c, c);
    r = RandRange(a, b);
    cs = cosf(ang);
    sn = sqrtf(1.0f - cs * cs);
    if (ang < 0.0f) {
        sn = -sn;
    }
    out[0] = o->pos[0] + d[0] * (cs * r);
    out[1] = o->pos[2] + d[2] * (cs * r);
    out[0] = out[0] + side[0] * (sn * r);
    out[1] = out[1] + side[2] * (sn * r);
}
