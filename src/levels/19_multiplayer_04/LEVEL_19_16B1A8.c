/* LEVEL_19:0x16B1A8 -- placement copy of LEVEL_01_19B058.c: casts a probe from an offset point of an actor along its aim, clips it against the world and writes the resulting point. */
extern float sqrtf(float x);

typedef struct Obj Obj;

typedef struct Vt {
    void (*fn)(int ctx, Obj *obj, int what);
} Vt;

typedef struct Xf {
    char pad_00[0x20];
    float dir[4];
    float pos[4];
} Xf;

typedef struct Part {
    Xf *xf;
    char pad_04[8];
    int ctx;
} Part;

struct Obj {
    char pad_00[0x58];
    Part *part;
};

typedef struct Arg {
    char pad_00[8];
    float lift;
    float t;
} Arg;

extern Vt *func_16B3F8(int ctx);
extern int func_01E550(float len, float *dist, char *buf, float *from, float *dir, int a, int b, int c);

static __inline__ void Copy3(float *dst, float *src)
{
    dst[0] = src[0];
    dst[1] = src[1];
    dst[2] = src[2];
}

static __inline__ void Sub3(float *out, float *a, float *b)
{
    out[0] = a[0] - b[0];
    out[1] = a[1] - b[1];
    out[2] = a[2] - b[2];
}

static __inline__ void MulAdd3(float *out, float *a, float *b, float t)
{
    out[0] = a[0] + b[0] * t;
    out[1] = a[1] + b[1] * t;
    out[2] = a[2] + b[2] * t;
}

void func_16B1A8(Obj *obj, float *out, Arg *arg)
{
    float pos[4];
    float from[4];
    float d[4];
    char buf[32];
    float dist;
    Part *part;
    Xf *xf;
    Vt *vt;
    int ctx;
    float len2;
    float len;
    float inv;
    float root;

    part = obj->part;
    ctx = part->ctx;
    xf = part->xf;
    vt = func_16B3F8(ctx);
    MulAdd3(pos, xf->pos, xf->dir, arg->t);
    pos[1] = pos[1] + arg->lift;
    Copy3(from, xf->pos);
    from[1] = from[1] + 0.75f;
    Sub3(d, pos, from);
    dist = 1000.0f;
    len2 = d[0] * d[0] + d[1] * d[1] + d[2] * d[2];
    if (len2 < 2.3841858e-07f) {
        len = 0.0f;
    } else {
        root = sqrtf(len2);
        inv = 1.0f / root;
        len = root;
        d[0] = d[0] * inv;
        d[1] = d[1] * inv;
        d[2] = d[2] * inv;
    }
    vt->fn(ctx, obj, 3);
    if (func_01E550(len, &dist, buf, from, d, 0x68, 0, 0) != 0) {
        MulAdd3(pos, from, d, dist);
    }
    Copy3(out, pos);
    vt->fn(ctx, obj, 4);
}
