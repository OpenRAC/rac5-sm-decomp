/* USA LEVEL_15.REL:0x0FE440 (22 November 2026): exact linked bytes under gnu-
 * ee-trial, held.
 * Its form stays out of the accepted set because a placement declares
 * func_0E8A78 unlike its accepted definition; and declares func_0EB490 unlike
 * its accepted definition.
 * Reconcile the prototypes (EE ABI rules in AGENTS.md) before promotion. No
 * matching credit.
 */
struct Rec;

typedef struct V3 {
    float x, y, z;
} V3;

typedef struct Mat {
    V3 r[4];
} Mat;

typedef struct Piece {
    Mat m[12];
    float q[4];
} Piece;

typedef struct Def {
    int w0;
    int w4;
    int w8;
    int wC;
    float f10;
    float f14;
    float f18;
    int w1C;
    float f20;
    float f24;
    float f28;
    int w2C;
    char pad30[0xCC - 0x30];
} Def;

typedef struct Aux {
    int w0;
    int w4;
} Aux;

typedef struct Scene {
    char pad0[0xB4];
    Aux *aux;
    void *pB8;
    int wBC;
} Scene;

typedef struct Cfg {
    char pad0[0x2C];
    float f2C;
} Cfg;

extern void *D_0014AEF4;
extern int D_00183860;
extern char D_001838B0[];
extern char D_001858B0[];

extern void func_13B688(int *base);
extern void func_13BAF0(float a, float b, int c, int *scope, int d);
extern void func_0702B8(void);
extern void func_06D880(Scene *s);
extern void func_0E98E8(void *a0);
extern void func_13BBD8(Mat *m, int a, void *b, int c);
extern void func_0ECB58(struct Rec *v, float a, float b, float c, int d);
extern void func_0EB490(float *out, float *m, int d);
extern void func_0EC3A0(float *out, float *a, float *b);
extern void func_0EB120(float x, float y, float z, float *m, float *b, float *c);
extern void func_0EB5F8(float *out, float *in, int flag);
extern void func_0E8A78(float *a, float *b);
extern void func_070308(void);
extern void func_13B690(int *value);

static __inline__ void V3Zero(V3 *v)
{
    v->x = 0.0f;
    v->y = 0.0f;
    v->z = 0.0f;
}

static __inline__ void V3Neg(V3 *v)
{
    v->x = -v->x;
    v->y = -v->y;
    v->z = -v->z;
}

void func_0FE440(Piece *recs, Def *defs, int n, Cfg *cfg, int p5, int p6, V3 *off)
{
    int scope;
    float ox;
    float oy;
    float oz;
    Scene *scene;
    int auxw;
    float step;
    int i;
    Piece *r;
    Def *d;
    Mat *m1;
    Mat *m2;
    Mat *m3;
    Mat *m4;
    Mat *m6;
    Mat *m8;
    Mat *m9;
    Mat *m10;
    Mat *m11;

    func_13B688(&scope);
    func_13BAF0(0.0f, 1.0f, p5, &scope, p6);
    scene = (Scene *)scope;
    D_0014AEF4 = scene->pB8;
    func_0702B8();
    func_06D880(scene);
    step = cfg->f2C;
    auxw = scene->aux->w4;
    for (i = 0; i < n; i++) {
        r = recs + i;
        d = defs + i;
        m1 = &r->m[1];
        m2 = &r->m[2];
        m3 = &r->m[3];
        func_0E98E8(r);
        func_0E98E8(m1);
        func_0E98E8(m2);
        func_0E98E8(m3);
        if (d->w4 != -1) {
            func_13BBD8(&r->m[0], auxw, D_001858B0, d->w4);
            func_0ECB58((struct Rec *)r, step, step, step, 0);
            ox = off->x;
            oy = off->y;
            oz = off->z;
            r->m[0].r[3].x += ox;
            r->m[0].r[3].y += oy;
            r->m[0].r[3].z += oz;
            func_0EB490((float *)m1, (float *)r, 0);
        }
        if (d->w8 != -1) {
            func_13BBD8(m2, auxw, D_001858B0, d->w8);
            func_0ECB58((struct Rec *)m2, step, step, step, 0);
            ox = off->x;
            oy = off->y;
            oz = off->z;
            m2->r[3].x += ox;
            m2->r[3].y += oy;
            m2->r[3].z += oz;
            func_0EB490((float *)m3, (float *)m2, 0);
        }
        m4 = &r->m[4];
        func_0EC3A0((float *)m4, (float *)r, (float *)m3);
        m8 = &r->m[8];
        func_0EB120(d->f10, d->f14, d->f18, (float *)m8, (float *)&m8->r[1], (float *)&m8->r[2]);
        V3Zero(&m8->r[3]);
        if (d->w1C != -1)
            V3Neg(&r->m[8].r[d->w1C]);
        m9 = &r->m[9];
        func_0EB5F8((float *)m9, (float *)m8, 0);
        m6 = &r->m[6];
        func_0EC3A0((float *)&r->m[5], (float *)m1, (float *)m9);
        m10 = &r->m[10];
        func_0EC3A0((float *)m6, (float *)m8, (float *)m4);
        func_0EB120(d->f20, d->f24, d->f28, (float *)m10, (float *)&m10->r[1], (float *)&m10->r[2]);
        V3Zero(&m10->r[3]);
        if (d->w2C != -1)
            V3Neg(&r->m[10].r[d->w2C]);
        m11 = &r->m[11];
        func_0EB5F8((float *)m11, (float *)m10, 0);
        func_0E8A78((float *)&r->m[12], (float *)m10);
        func_0EC3A0((float *)&r->m[7], (float *)m6, (float *)m11);
    }
    func_070308();
    scene->wBC = D_00183860;
    D_0014AEF4 = D_001838B0;
    func_13B690(&scope);
}
