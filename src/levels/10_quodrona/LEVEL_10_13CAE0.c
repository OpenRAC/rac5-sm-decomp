/* LEVEL_10:0x13CAE0 -- placement copy of LEVEL_01_13EC58.c: advances a thrown object one step: sweeps its path against the world, either settles it on the hit point or slides it along, and reports the contact. */
extern float fabsf(float x);

typedef struct Cam {
    char pad_00[0x14];
    float f14;
    float f18;
    float f1C;
    float f20;
} Cam;

typedef struct Obj {
    char pad_00[0x30];
    float pos[3];
    char pad_3C[0x1C];
    float *part;
} Obj;

extern Cam *D_0020FD8C;

extern int func_020CB8(float *from, float *t, char *buf);
extern int func_136DD0(float *q, char *buf, int *out);
extern float func_01F118(float *q, char *buf, float *from, float step, int a, int b, int c);
extern void func_1222F8(float spin, float *tmp, float *dir);
extern void func_1238E0(Obj *a, Obj *b, float *tmp);
extern void func_13D018(Obj *o, int r, char *buf);
extern void func_081000(void *obj, Cam *cam, float a, float b, float c, float d, int p6, int p7, int p8, int p9, int p10, int p11);

static __inline__ int feq(float a, float b)
{
    return fabsf(a - b) <= 1e-5f;
}

static __inline__ void Copy3(float *dst, float *src)
{
    dst[0] = src[0];
    dst[1] = src[1];
    dst[2] = src[2];
}

static __inline__ void Add3(float *out, float *a, float *b)
{
    out[0] = a[0] + b[0];
    out[1] = a[1] + b[1];
    out[2] = a[2] + b[2];
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

void func_13CAE0(Obj *o)
{
    float seg[9];
    char buf[32];
    float q[4];
    float tmp[12];
    float t;
    int r2;
    int r3;
    float *p;
    float f;

    p = o->part;
    Copy3(seg, o->pos);
    Add3(seg + 3, seg, p + 6);
    Sub3(seg + 6, seg + 3, seg);
    if (func_020CB8(seg, &t, buf) != 0) {
        MulAdd3(q, seg, seg + 6, t);
        *(int *)(p + 10) = func_136DD0(q, buf, &r2);
        if (D_0020FD8C != 0) {
            func_081000(o, D_0020FD8C, D_0020FD8C->f14, D_0020FD8C->f18, D_0020FD8C->f1C, D_0020FD8C->f20, 0, 0, 0, 0, 0, 1);
        }
        func_13D018(o, r2, buf);
    } else {
        f = func_01F118(q, buf, seg, 0.1f, 0x68, 0, 0);
        if (!(unsigned char)feq(f, 0.1f)) {
            *(int *)(p + 10) = func_136DD0(q, buf, &r3);
            if (D_0020FD8C != 0) {
                func_081000(o, D_0020FD8C, D_0020FD8C->f14, D_0020FD8C->f18, D_0020FD8C->f1C, D_0020FD8C->f20, 0, 0, 0, 0, 0, 1);
            }
            func_13D018(o, r3, buf);
        } else {
            func_1222F8(p[9], tmp, p + 3);
            func_1238E0(o, o, tmp);
            Add3(p + 6, p + 6, p);
            Copy3(o->pos, seg + 3);
        }
    }
}
