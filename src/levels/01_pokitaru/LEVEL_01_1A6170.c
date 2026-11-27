/* LEVEL_01:0x1A6170 -- orients a spawned object away from the camera in the horizontal plane, builds its basis, places it at a target and arms it. */
typedef struct Obj Obj;

typedef struct {
    char pad0[0x10];
    int f_10;
} Mgr;

struct Obj {
    float fwd[3];
    float pad0C;
    float up[3];
    float pad1C;
    float side[3];
    float pad2C;
    float pos[3];
    char pad3C[9];
    unsigned char f_45;
    unsigned char f_46;
    char pad47[0x11];
    Mgr *mgr;
    char pad5C[8];
    int flags;
};

typedef struct {
    char pad0[0x20];
    float f_20;
    char pad24[4];
    float f_28;
} Cam;

extern float D_00217E88[];
extern float sqrtf(float);

extern void func_03BE20(void *obj);
extern char *func_0011D8(void);
extern void func_07CB58(Obj *o, float t, unsigned idx);

static __inline__ void Vec3_Copy(float *dst, float *src)
{
    dst[0] = src[0];
    dst[1] = src[1];
    dst[2] = src[2];
}

static __inline__ void Vec3_Cross(float *r, float *a, float *b)
{
    r[0] = a[1] * b[2] - a[2] * b[1];
    r[1] = a[2] * b[0] - a[0] * b[2];
    r[2] = a[0] * b[1] - a[1] * b[0];
}

void func_1A6170(Obj *self, Obj *target, int val)
{
    Mgr *m;
    Cam *c;
    float len2;
    float r;
    float z;
    float *tp;

    m = self->mgr;
    tp = target->pos;
    func_03BE20(target);
    c = (Cam *)func_0011D8();
    self->flags &= ~0x20;
    Vec3_Copy(self->up, D_00217E88);
    self->fwd[0] = -c->f_20;
    z = c->f_28;
    self->fwd[1] = 0.0f;
    self->fwd[2] = -z;
    len2 = self->fwd[0] * self->fwd[0] + self->fwd[2] * self->fwd[2];
    if (!(len2 < 2.3841858e-07f)) {
        float one = 1.0f;
        r = sqrtf(len2);
        len2 = one / r;
        self->fwd[0] = len2 * self->fwd[0];
        self->fwd[2] = len2 * self->fwd[2];
    }
    Vec3_Cross(self->side, self->fwd, self->up);
    Vec3_Copy(self->pos, tp);
    func_07CB58(self, 0.0f, 0);
    self->f_46 = 0;
    self->f_45 = 1;
    m->f_10 = val;
}
