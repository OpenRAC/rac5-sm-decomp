/* LEVEL_15:0x10FA28 -- places an object: asks the helper for the target point of its linked record, takes the offset from the object position, scales it to 200 units (straight up when the offset is degenerate), moves the object by it, clears its mode word, copies the record height, starts the record's state and clears a flag. */
typedef struct Rec {
    char pad00[0x3C];
    float f3C;
} Rec;

typedef struct Obj {
    char pad00[0x18];
    int w18;
    float f1C;
    float pos20[3];
    char pad2C[0x34];
    float pos60[3];
    char pad6C[0x1D8];
    char sub244[0x90];
    Rec *f2D4;
    char pad2D8[0xE0];
    int w3B8;
} Obj;

extern float sqrtf(float x);
extern char D_002F3D68[];

extern void func_0EABF0(float *a0, char *a1, float *a2);
extern void func_0FE8D8(char *object, int *state, int enabled);

static __inline__ void Sub3(float *out, float *a, float *b)
{
    out[0] = a[0] - b[0];
    out[1] = a[1] - b[1];
    out[2] = a[2] - b[2];
}

static __inline__ void Add3(float *out, float *a, float *b)
{
    out[0] = a[0] + b[0];
    out[1] = a[1] + b[1];
    out[2] = a[2] + b[2];
}

static __inline__ unsigned char Scaled(float *out, float *d, float scale)
{
    float len2 = d[0] * d[0] + d[1] * d[1] + d[2] * d[2];
    float k;

    if (len2 < 2.3841858e-7f) {
        return 0;
    }
    k = scale / sqrtf(len2);
    out[0] = k * d[0];
    out[1] = k * d[1];
    out[2] = k * d[2];
    return 1;
}

void func_10FA28(Obj *o)
{
    float v[3];
    float d[3];
    float w[3];
    Rec *r = o->f2D4;

    func_0EABF0(v, D_002F3D68, (float *)((char *)r + 0x40));
    Sub3(d, v, o->pos60);
    if (!Scaled(w, d, 200.0f)) {
        w[0] = 0.0f;
        w[1] = 200.0f;
        w[2] = 0.0f;
    }
    Add3(o->pos20, o->pos60, w);
    o->w18 = 0;
    o->f1C = r->f3C;
    func_0FE8D8(o->sub244, (int *)((char *)o->f2D4 + 0x58), 1);
    o->w3B8 = 0;
}
