/* LEVEL_10:0x1C99E8 -- resolves path pointers, computes unit direction and length, and initializes state. */

typedef struct {
    float x;
    float y;
    float z;
} Vec3;

typedef struct {
    float x;
    float y;
    float z;
    float w;
} Vec4;

typedef struct {
    unsigned char pad0[0x4];
    Vec4 *pts;
    unsigned char pad8[0xC];
    unsigned short count;
} Path;

typedef struct {
    unsigned int p0;
    unsigned int p4;
} Sub54;

typedef struct {
    unsigned char pad0[0x28];
    unsigned char buf28[0x28];
    int w50;
    int w54;
    float len;
    unsigned char f5C[0x28];
    unsigned char f84[0x4];
} Sub58;

typedef struct {
    unsigned char pad0[0x20];
    Vec3 dir;
    unsigned char pad2C[0x28];
    Sub54 *p54;
    Sub58 *p58;
    unsigned char pad5C[0x14];
    float f70;
} Obj;

extern unsigned int D_0020F9F4;
extern unsigned char D_00211F00[];

extern float sqrtf(float x);
extern void *memset(void *s, int c, unsigned int n);
extern void func_1D6218(void *a0, void *a1, void *a2);

static __inline__ int FixPtr(unsigned int *slot)
{
    unsigned int off = *slot;
    if (off == 0) {
        return 0;
    }
    *slot = D_0020F9F4 + off;
    return 1;
}

static __inline__ void Sub3(float *d, float *a, float *b)
{
    d[0] = a[0] - b[0];
    d[1] = a[1] - b[1];
    d[2] = a[2] - b[2];
}

int func_1C99E8(Obj *o)
{
    Sub54 *s54 = o->p54;
    Sub58 *s58 = o->p58;
    Path *path;
    Vec4 *pts;
    float *dir;
    float l2;
    float len;
    float out;
    float inv;

    if (!FixPtr(&s54->p0)) {
        return 0;
    }
    if (!FixPtr(&s54->p4)) {
        return 0;
    }

    path = (Path *)s54->p0;
    if (path->count != 2) {
        return 0;
    }

    pts = path->pts;
    dir = &o->dir.x;
    Sub3(dir, &pts[1].x, &pts[0].x);
    l2 = dir[0] * dir[0] + dir[1] * dir[1] + dir[2] * dir[2];
    if (l2 < 2.384185791015625e-07f) {
        out = 0.0f;
    } else {
        len = sqrtf(l2);
        inv = 1.0f / len;
        dir[0] *= inv;
        dir[1] *= inv;
        dir[2] *= inv;
        out = len;
    }

    s58->len = out;
    memset(s58->buf28, 0, 0x28);
    s58->w50 = 0;
    s58->w54 = 0;
    o->f70 = 162.0f;
    func_1D6218(s58->f5C, s58->f84, D_00211F00);
    return 1;
}
