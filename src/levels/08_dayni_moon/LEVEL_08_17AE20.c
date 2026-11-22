/* LEVEL_08:0x17AE20 -- placement copy of LEVEL_04_16FA78.c: steers a homing pickup: moves it along its direction at the current speed, re-aims the direction at the target with a smoothing factor, and fires the arrival callback when it is within range. */
extern float sqrtf(float x);

typedef struct Target {
    char pad0[0x30];
    float pos[4];
} Target;

typedef struct Homing {
    float dir[3];
    float speed;
    char pad10[4];
    Target *target;
    void (*arrive)(Target *t, int arg);
    int arg;
} Homing;

typedef struct Obj {
    char pad0[0x30];
    float pos[4];
    char pad40[0x58 - 0x40];
    Homing *h;
} Obj;

typedef struct Desc {
    char pad0[0x14];
    float f14;
    float f18;
    float f1C;
    float f20;
} Desc;

extern Desc *D_00250888;

extern void func_088940(Obj *o, Desc *desc, int a2, float a, float b, float c, int a3, float d, int t0, int t1, int t2, int t3);
extern void func_0845F8(Obj *o, int flag);

static __inline__ void Copy3(float *dst, float *src)
{
    dst[0] = src[0];
    dst[1] = src[1];
    dst[2] = src[2];
}

static __inline__ void MulAdd3(float *out, float *a, float *b, float s)
{
    out[0] = a[0] + b[0] * s;
    out[1] = a[1] + b[1] * s;
    out[2] = a[2] + b[2] * s;
}

static __inline__ void Sub3(float *out, float *a, float *b)
{
    out[0] = a[0] - b[0];
    out[1] = a[1] - b[1];
    out[2] = a[2] - b[2];
}

void func_17AE20(Obj *o)
{
    float d[4];
    float e[4];
    float lim[4];
    float *pick;
    float *spd;
    float len2;
    float inv;
    Homing *h;
    Target *t;

    h = o->h;
    t = h->target;
    Copy3(d, t->pos);
    d[1] = d[1] + 0.1f;
    Sub3(d, d, o->pos);
    if (d[0] * d[0] + d[1] * d[1] + d[2] * d[2] < 0.5625f) {
        if (D_00250888 != 0) {
            func_088940(o, D_00250888, 0, D_00250888->f14, D_00250888->f18, D_00250888->f1C, 0, D_00250888->f20, 0, 0, 0, 1);
        }
        h->arrive(t, h->arg);
        func_0845F8(o, 1);
    } else {
        spd = &h->speed;
        MulAdd3(o->pos, o->pos, h->dir, h->speed);
        h->speed = h->speed + 0.060000002f;
        lim[0] = 0.33333334f;
        pick = lim;
        if (h->speed < 0.33333334f)
            pick = spd;
        h->speed = *pick;
        Copy3(e, t->pos);
        e[1] = e[1] + 0.1f;
        Sub3(e, e, o->pos);
        len2 = e[0] * e[0] + e[1] * e[1] + e[2] * e[2];
        if (!(len2 < 2.3841858e-07f)) {
            inv = 1.0f / sqrtf(len2);
            e[0] = e[0] * inv;
            e[1] = e[1] * inv;
            e[2] = e[2] * inv;
        }
        if (h->speed < 0.33333334f) {
            h->dir[0] = (e[0] - h->dir[0]) * 0.16f + h->dir[0];
            h->dir[1] = (e[1] - h->dir[1]) * 0.16f + h->dir[1];
            h->dir[2] = (e[2] - h->dir[2]) * 0.16f + h->dir[2];
        } else if (h->dir[1] > 0.0f) {
            h->dir[0] = (e[0] - h->dir[0]) * 0.40000004f + h->dir[0];
            h->dir[1] = (e[1] - h->dir[1]) * 0.40000004f + h->dir[1];
            h->dir[2] = (e[2] - h->dir[2]) * 0.40000004f + h->dir[2];
        } else {
            h->dir[0] = e[0];
            h->dir[1] = e[1];
            h->dir[2] = e[2];
        }
    }
}
