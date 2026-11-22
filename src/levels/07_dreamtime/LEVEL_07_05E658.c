/* LEVEL_07:0x05E658 -- placement copy of LEVEL_01_05D9F8.c: per-frame camera and listener sync: copies the object's transform into the two camera records (nudging the second back along its forward vector), runs the first camera's update hook and pushes fov, aspect and render flags to the renderer. */
typedef struct Mat {
    float a[4];
    float b[4];
    float c[4];
    float p[4];
} Mat;

typedef struct Hook {
    char pad_00[0x1C];
    void (*update)(void *cam, float dt);
} Hook;

typedef struct Cam {
    Mat m;
    Hook *hook;
} Cam;

typedef struct Glob {
    char pad_00[0x130];
    float aspect;
    char pad_134[0x38];
    Cam *cam_16C;
    Cam *cam_170;
    char pad_174[0x24];
    float f_198;
} Glob;

typedef struct Obj {
    char pad_00[0x30];
    float pos[3];
    char pad_3C[0x234];
    float f_270;
    char pad_274[0x328];
    Mat *mat_59C;
} Obj;

extern Glob D_0024E878;
extern void func_0608E0(Obj *o);
extern void func_0B35E0(float *p);
extern void func_0B35B0(float a, float b);
extern void func_0B35D0(float a);
extern void func_0B3570(int a, int b);
extern void func_0B90F8(int a);
extern void func_0B9238(int a);
extern void func_0B9378(int a);

static __inline__ void Nudge(float *p, float *d, float k)
{
    p[0] += d[0] * k;
    p[1] += d[1] * k;
    p[2] += d[2] * k;
}

static __inline__ void CopyMat(Mat *d, Mat *s)
{
    d->c[0] = s->c[0];
    d->c[1] = s->c[1];
    d->c[2] = s->c[2];
    d->c[3] = s->c[3];
    d->a[0] = s->a[0];
    d->a[1] = s->a[1];
    d->a[2] = s->a[2];
    d->a[3] = s->a[3];
    d->b[0] = s->b[0];
    d->b[1] = s->b[1];
    d->b[2] = s->b[2];
    d->b[3] = s->b[3];
    d->p[0] = s->p[0];
    d->p[1] = s->p[1];
    d->p[2] = s->p[2];
    d->p[3] = s->p[3];
}

void func_05E658(Obj *o)
{
    Cam *c;

    func_0608E0(o);
    if (D_0024E878.cam_16C != 0) {
        CopyMat(&D_0024E878.cam_16C->m, o->mat_59C);
    }
    if (D_0024E878.cam_170 != 0) {
        CopyMat(&D_0024E878.cam_170->m, o->mat_59C);
        Nudge(D_0024E878.cam_170->m.p, D_0024E878.cam_170->m.b, -0.10000000149011612f);
    }
    c = D_0024E878.cam_16C;
    if (c != 0 && c->hook != 0 && c->hook->update != 0) {
        c->hook->update(c, 0.016666667535901070f);
    }
    func_0B35E0(o->pos);
    func_0B35B0(300.0f, D_0024E878.aspect * 0.5f);
    func_0B35D0(o->f_270 * 60.0f * 0.5f);
    func_0B3570(D_0024E878.f_198 > 0.0f, 0x5A);
    func_0B90F8(1);
    func_0B9238(1);
    func_0B9378(1);
}
