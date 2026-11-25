/* LEVEL_08:0x1EFFB0 -- placement copy of LEVEL_04_1C6E30.c: emits one particle behind the object, sized by the clamped extension value, swapping its two scales when a global bit is set. */
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

extern unsigned int D_00252674;

extern int func_02A968(unsigned int bit);
extern void func_0A5910(B12 *pos, unsigned int flags, int a, int b, float p0, float p1, float s0, float s1, float s2, float s3);

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

void func_1EFFB0(Obj *o)
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
    if (func_02A968(4)) {
        t = a;
        a = b;
        b = t;
    }
    Mad3(&p.x, o->pos, o->dir, -0.75f);
    ((void (*)(B12 *, float, float, unsigned int, int, int, float, float, float, float))func_0A5910)(&p, 0.5f, 0.5f, D_00252674, 0xFF40FF00, 0, a, b, 0.0f, 1.0f);
}
