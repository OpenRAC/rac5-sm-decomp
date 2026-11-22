/* USA LEVEL_04.REL:0x1C6E30, 312-byte candidate (21 November 2026).
 * Measured gnu-ee-trial: 3 differing words; first difference at 0xE4.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct B12 {
    float x;
    float y;
    float z;
} B12;

typedef struct Ext {
    char pad_00[0x18];
    float amount;
} Ext;

typedef struct Obj {
    char pad_00[0x10];
    float dir[3];
    char pad_1C[0x14];
    float pos[3];
    char pad_3C[0x1C];
    Ext *ext;
} Obj;

extern unsigned int D_002225EC;

extern int func_029E98(unsigned int bit);
extern void func_0A0978(B12 *pos, unsigned int flags, int a, int b, float p0, float p1,
                        float s0, float s1, float s2, float s3);

static __inline__ float *Clamp(float *v, float *lo, float *hi)
{
    if (*v < *lo) {
        return lo;
    }
    if (*hi < *v) {
        return hi;
    }
    return v;
}

static __inline__ void Mad3(float *out, float *a, float *b, float k)
{
    out[0] = a[0] + b[0] * k;
    out[1] = a[1] + b[1] * k;
    out[2] = a[2] + b[2] * k;
}

void func_1C6E30(Obj *o)
{
    B12 p;
    float lo;
    float hi;
    float a;
    float b;
    float t;

    lo = 0.0f;
    hi = 9.0f;
    a = *Clamp(&o->ext->amount, &lo, &hi) * 0.10000000149011612f;
    b = a + 0.10000000149011612f;
    if (func_029E98(4)) {
        t = a;
        a = b;
        b = t;
    }
    Mad3(&p.x, o->pos, o->dir, -0.75f);
    func_0A0978(&p, D_002225EC, 0xFF40FF00, 0, 0.5f, 0.5f, a, b, 0.0f, 1.0f);
}
