/* LEVEL_15.REL:0x135D00: reviewed 228-byte candidate, held for ABI review.
 * Distance-based trigger between a tracked point and an actor.
 * pinned C with gnu-ee-trial links 228/228 bytes and is byte-exact at this and
 * 1 other USA placement, but the prototypes disagree.
 * It declares func_12B488 returning void with (pointer, int), but the accepted
 * LEVEL_15_12B488.c defines it returning void with (pointer).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
extern void func_12B488(void *a, int b);
extern void func_12B2C0(int a, void *b, void *c, void *d, float f0, float f1, float f2, float f3);

typedef struct {
    float x, y, z;
} Vec3_t;

typedef struct {
    char pad0[0x24];
    Vec3_t pos;
} Target_t;

typedef struct {
    Target_t *target;
    char pad0[0x8C - 4];
    Vec3_t pos;
} Track_t;

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

extern Track_t D_002F4FBC;
extern Actor_t D_00177D78;
extern Cfg_t D_002F2FE0;
extern Params_t D_0015D5C8;

void func_135D00(void)
{
    Track_t *t;
    Actor_t *g;
    Cfg_t *cfg;
    Target_t *tg;
    Vec3_t *a, *b;
    float dx, dy, dz, d;

    t = &D_002F4FBC;
    tg = t->target;
    b = &t->pos;
    cfg = &D_002F2FE0;
    g = &D_00177D78;
    a = &g->pos;
    dx = g->pos.x - t->pos.x;
    dy = a->y - b->y;
    dz = a->z - b->z;
    d = dx * dx + dy * dy + dz * dz;
    if (tg != 0) {
        tg->pos = *b;
        if (cfg->range <= d)
            func_12B488(t, 0);
    } else if (d < cfg->range) {
        func_12B2C0(0, cfg, b, t, D_0015D5C8.f0C, D_0015D5C8.f10, D_0015D5C8.f28, D_0015D5C8.f08);
    }
}
