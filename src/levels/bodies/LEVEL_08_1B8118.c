/* LEVEL_08:0x1B8118 -- picks the visible candidate lying most along the player's facing and acts on it. */
typedef struct V3 {
    float x, y, z;
} V3;

typedef struct Actor {
    char pad0[0x20];
    V3 dir;
    char pad1[0x4];
    V3 pos;
} Actor;

typedef struct Obj {
    char pad[0x54];
    Actor **list;
} Obj;

extern Actor *func_0011D8(void);
extern int func_173C70(Actor *a);
extern int func_173C98(Actor *a, int b, int c, int d);
extern float sqrtf(float x);
extern char D_00261A40[];

int func_1B8118(Obj *o, int b)
{
    Actor *best = 0;
    float bestdot = 0.0f;
    Actor **p = o->list;
    Actor *pl;
    V3 *pp;
    V3 *pd;
    V3 *cp;
    float d[3];
    float len;
    float inv;
    float dot;
    int i;

    if (func_0011D8() != 0)
        pl = func_0011D8();
    else
        pl = (Actor *)D_00261A40;
    pp = &pl->pos;
    pd = &pl->dir;
    for (i = 3; i >= 0; i--, p++) {
        if (*p == 0)
            continue;
        if (func_173C70(*p) == 0)
            continue;
        cp = &(*p)->pos;
        d[0] = cp->x - pl->pos.x;
        d[1] = cp->y - pp->y;
        d[2] = cp->z - pp->z;
        if (!(d[0] * d[0] + d[1] * d[1] + d[2] * d[2] < 2.384185791015625e-07f)) {
            len = sqrtf(d[0] * d[0] + d[1] * d[1] + d[2] * d[2]);
            inv = 1.0f / len;
            d[0] *= inv;
            d[1] *= inv;
            d[2] *= inv;
        }
        dot = d[0] * pl->dir.x + d[1] * pd->y + d[2] * pd->z;
        if (best == 0 || bestdot < dot) {
            best = *p;
            bestdot = dot;
        }
    }
    if (best != 0)
        return func_173C98(best, b, 0, 0);
    return 0;
}
