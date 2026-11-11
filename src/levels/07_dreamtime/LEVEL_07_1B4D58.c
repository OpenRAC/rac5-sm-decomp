/* LEVEL_07:0x1B4D58 -- placement copy of LEVEL_01_1A2BB0.c: blends two pairs of sampled points by the actor's weight and updates the camera aim. */
typedef struct V3 {
    float x, y, z;
} V3;

typedef struct Aux {
    char pad0[0x78];
    char sub[0x30];
    V3 pos;
} Aux;

typedef struct Ctl {
    char pad0[0x10];
    void *link;
} Ctl;

typedef struct Obj {
    char pad0[0x54];
    Ctl *ctl;
    Aux *aux;
    char pad5c[0x14];
    float t;
} Obj;

extern float D_0021D6CC;
extern char D_0024AA40[];

extern void func_128E80(float *out, void *link, void *v);
extern void func_1B1D70(void *sub, float *a, float *b);
extern float func_001200(void);
extern void func_001210(float a, float b);
extern void func_03C698(void *p, int v);

void func_1B4D58(Obj *o, void *i0, void *i1, void *i2, void *i3, float speed)
{
    float a[4], b[4], c[4], d[4], e[4], f[4];
    Ctl *ctl;
    Aux *aux;
    float u, t, w;
    float *p;
    char *g = D_0024AA40;

    ctl = o->ctl;
    aux = o->aux;
    func_128E80(a, ctl->link, i0);
    func_128E80(b, ctl->link, i1);
    u = 1.0f - o->t;
    c[0] = a[0] * u + b[0] * o->t;
    c[1] = a[1] * u + b[1] * o->t + D_0021D6CC;
    c[2] = a[2] * u + b[2] * o->t;
    func_128E80(d, ctl->link, i2);
    func_128E80(e, ctl->link, i3);
    w = 1.0f - o->t;
    f[0] = d[0] * w + e[0] * o->t;
    f[1] = d[1] * w + e[1] * o->t + D_0021D6CC;
    f[2] = d[2] * w + e[2] * o->t;
    func_1B1D70(aux->sub, c, f);
    p = (float *)&aux->pos;
    p[0] = c[0];
    p[1] = c[1];
    p[2] = c[2];
    if (speed > 0.0f)
        func_001210(speed, func_001200());
    func_03C698(g, 0);
}
