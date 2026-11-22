/* LEVEL_01:0x0500B0 -- computes a target point for the object: its position lifted 1.55 units, moved half a unit along one of its axes (reversed when the flag is set) and 0.6 of another axis, written to the output vector. */

typedef struct {
    char pad_00[0x30];
    float pos[3];
    char pad_3C[0xBA0];
    float axis_BDC[3];
    char pad_BE8[0x14];
    float axis_BFC[3];
} Obj;

static __inline__ void Copy3(float *dst, float *src)
{
    dst[0] = src[0];
    dst[1] = src[1];
    dst[2] = src[2];
}

static __inline__ void Scale3(float *dst, float *src, float k)
{
    dst[0] = k * src[0];
    dst[1] = k * src[1];
    dst[2] = k * src[2];
}

static __inline__ void Add3(float *dst, float *a, float *b)
{
    dst[0] = a[0] + b[0];
    dst[1] = a[1] + b[1];
    dst[2] = a[2] + b[2];
}

void func_0500B0(Obj *o, int flag, float *out)
{
    float start[3];
    float d[3];
    float e[3];
    float k;

    Copy3(start, o->pos);
    start[1] = start[1] + 1.5499999523162842f;
    k = 0.5f;
    if (flag != 0) {
        k = -k;
    }
    Scale3(d, o->axis_BFC, k);
    Add3(start, start, d);
    Scale3(e, o->axis_BDC, 0.6000000238418579f);
    Add3(out, start, e);
}
