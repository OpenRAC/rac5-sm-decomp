/* LEVEL_15:0x137910 -- clears the object's link words, flags the tracker and, when the actor is within range of the tracked point, starts the sound voice. */
extern void func_022118(void);
extern void *func_12B2C0(int a, void *b, void *c, void *d, float f0, float f1, float f2, float f3);

typedef struct {
    float x, y, z;
} Vec3_t;

typedef struct {
    char pad0[0x30];
    Vec3_t pos;
} Actor_t;

typedef struct {
    char pad0[0x10];
    float range;
} Cfg_t;

typedef struct {
    char pad0[8];
    float f08;
    float f0C;
    float f10;
    char pad1[0x28 - 0x14];
    float f28;
} Params_t;


typedef struct {
    char pad0[4];
    int w4;
    int w8;
    int wC;
} Obj_t;

extern char D_002F4FB8;
extern Vec3_t D_002ECBA8;
extern Actor_t D_00177D78;
extern Cfg_t D_002F2FE0;
extern Params_t D_0015D5C8;

void func_137910(Obj_t *o)
{
    Actor_t *g;
    Cfg_t *cfg;
    Params_t *pr;
    Vec3_t *a, *b;
    float dx, dy, dz, d;
    char *base;

    D_002F4FB8 = 1;
    o->w4 = 0;
    o->w8 = 0;
    o->wC = 0;
    func_022118();
    g = &D_00177D78;
    a = &g->pos;
    b = &D_002ECBA8;
    dx = g->pos.x - D_002ECBA8.x;
    dy = a->y - b->y;
    dz = a->z - b->z;
    d = dx * dx + dy * dy + dz * dz;
    base = (char *)&D_002F2FE0;
    cfg = (Cfg_t *)(base + 0x3C);
    if (cfg->range < d)
        return;
    base = (char *)&D_0015D5C8;
    pr = (Params_t *)(base + 0x84);
    func_12B2C0(3, cfg, b, 0, pr->f0C, pr->f10, pr->f28, pr->f08);
}
