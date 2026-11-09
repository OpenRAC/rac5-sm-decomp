/* LEVEL_08:0x1B6900 -- spawns a pickup either at the source position or at a random point on a ring outside a keep-out radius. */
typedef struct Vec3 {
    float x;
    float y;
    float z;
} Vec3;

typedef struct Spawn {
    char pad0[0x30];
    Vec3 pos;
} Spawn;

typedef struct Source {
    char pad0[0x30];
    Vec3 pos;
    char pad1[0x331 - 0x3C];
    unsigned char active;
} Source;

extern float D_0026F564;
extern Vec3 D_0026F558;
extern Source D_002843D0;
extern int rand(void);
extern float cosf(float);
extern float sinf(float);
extern Spawn *func_1B6580(void *);

Spawn *func_1B6900(void *arg)
{
    float limit;
    float limit2;
    Vec3 cand;
    Vec3 *src;
    Source *g;
    int i;
    limit = D_0026F564 - 1.5f;
    limit2 = limit * limit;
    g = &D_002843D0;
    src = &g->pos;
    if ((float)rand() * 4.656613e-10f <= 0.1f && g->active) {
        Spawn *s = func_1B6580(arg);
        s->pos.x = g->pos.x;
        s->pos.z = src->z;
        return s;
    }
    cand.y = D_0026F558.y + 60.0f;
    for (i = 0; i < 20; i++) {
        float ang;
        float cs[2];
        float rad;
        float dx;
        float dz;
        ang = (float)rand() * 4.656613e-10f;
        ang = ang + ang;
        ang = ang * 3.1415927f;
        cs[0] = cosf(ang);
        cs[1] = sinf(ang);
        rad = (float)rand() * 4.656613e-10f * 10.0f;
        cand.x = src->x + cs[0] * rad;
        cand.z = src->z + cs[1] * rad;
        dx = D_0026F558.x - cand.x;
        dz = D_0026F558.z - cand.z;
        if (dx * dx + dz * dz <= limit2) {
            Spawn *s = func_1B6580(arg);
            Vec3 *p = &s->pos;
            p->x = cand.x;
            p->y = cand.y;
            p->z = cand.z;
            return s;
        }
    }
    return 0;
}
