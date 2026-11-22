/* USA LEVEL_01.REL:0x03B210, 344-byte candidate (21 November 2026).
 * Measured gnu-ee-trial-divpad-blockmove: 8 differing words; first difference
 * at 0xDC.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
extern float sqrtf(float);

typedef struct {
    float x, y, z, w;
} Vec4;

typedef struct {
    char pad00[0x10];
    float axis[3];
    char pad1C[0x200 - 0x1C];
    Vec4 a;
    Vec4 b;
    Vec4 c;
} Obj;

extern Vec4 D_00217E78;

static __inline__ float Dot3(float *a, float *b)
{
    return a[0] * b[0] + a[1] * b[1] + a[2] * b[2];
}

static __inline__ void Reject(float *out, float *v, float *n)
{
    float t;

    t = Dot3(v, n);
    out[0] = v[0] - n[0] * t;
    out[1] = v[1] - n[1] * t;
    out[2] = v[2] - n[2] * t;
}

void func_03B210(Obj *o, float *v)
{
    float d[3];
    float len2;
    float scale;
    float *q;

    q = &o->a.x;
    Reject(d, v, o->axis);
    len2 = Dot3(d, d);
    if (!(len2 < 2.384185791015625e-07f)) {
        scale = 1.0f / sqrtf(len2);
        q[0] = scale * d[0];
        q[1] = scale * d[1];
        q[2] = scale * d[2];
    }
    o->b = o->a;
    o->c = D_00217E78;
}
