/* LEVEL_05:0x1BD1F0 -- placement copy of LEVEL_01_1CE068.c: steps a spring-damped bobbing object and resolves its movement. */
typedef struct { float f0, f1, f2; float pad[3]; float f18; } Cfg;
typedef struct {
    char pad0[0x24];
    char f24[0x10];
    float pos;
    float vel;
    float vy;
    int state;
} Obj;

extern float D_001DE61C;
extern void func_121648(float *, Obj *, void *);
extern int func_1BD510(Obj *, float *, float *, float *, int, Cfg *, int);
extern int func_1BD778(Obj *, int, int, Cfg *, int, float *, float *);
extern int func_1BDFD8(Obj *, int, float *, Cfg *);
extern int func_1BE7D8(Obj *, int, float *, Cfg *, int);

static inline void spring(float *pos, float *vel, float target, float k, float damp, float limit, int steps)
{
    int i;

    i = steps;
    if (i > 0) do {
        float v = (target - *pos) * k - *vel * damp;

        *vel = v;
        if (limit < v)
            *vel = limit;
        else if (v < -limit)
            *vel = -limit;
        *pos = *pos + *vel;
    } while (--i);
}

int func_1BD1F0(Obj *o, int p1, int p2, Cfg *cfg, int p4)
{
    float dir[4];
    float va[4];
    float vb[4];
    int lim;
    int n;
    int *cnt;
    int res;
    int hit;
    int r;

    res = 0;
    if (o->state == 3)
        o->state = 2;
    else if (o->state == 6)
        o->state = 0;
    else if (o->state == 5)
        o->state = 1;
    if (o->state != 4) {
        lim = 2;
        n = (int)(D_001DE61C * 59.998802185058594f);
        cnt = lim <= n ? &lim : &n;
        spring(&o->pos, &o->vel, cfg->f18, cfg->f0, cfg->f1, cfg->f2, *cnt);
    }
    func_121648(dir, o, o->f24);
    dir[0] = dir[0] * o->pos;
    dir[1] = dir[1] * o->pos;
    dir[2] = dir[2] * o->pos;
    if (o->state == 2 || o->state == 4) {
        dir[1] = dir[1] + o->vy;
        o->vy = o->vy - 0.01111111231148243f;
    }
    hit = func_1BD510(o, dir, va, vb, p1, cfg, 0);
    if (o->state != 4) {
        if (func_1BD778(o, p1, p2, cfg, hit, va, vb)) {
            if (o->state == 0) {
                r = func_1BDFD8(o, p1, dir, cfg);
                res = r == 0 ? 2 : 0;
            } else {
                res = 2;
            }
        }
    }
    r = func_1BE7D8(o, p1, dir, cfg, p4);
    return r ? res : 1;
}
