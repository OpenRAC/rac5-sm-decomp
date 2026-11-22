/* LEVEL_17:0x17A330 -- placement copy of LEVEL_16_186CE8.c: per-frame update of a spring-driven object: remaps its mode word, steps the damped spring (at most two steps) towards the target, scales the direction vector, runs the movement helpers and returns 0, 1 or 2. */

typedef struct {
    float f_00;
    float f_04;
    float f_08;
    float f_0C;
    float f_10;
    float f_14;
    float f_18;
    float f_1C;
    float f_20;
} Mat;

typedef struct {
    float f_00;
    float f_04;
} Vec;

typedef struct {
    float f_00;
    float f_04;
    float f_08;
} Out;

typedef struct {
    char pad_00[0x24];
    Vec pos_24;
    char pad_2C[8];
    float x_34;
    float v_38;
    float w_3C;
    int state_40;
} Obj;

typedef struct {
    float k1_00;
    float k2_04;
    float lim_08;
    char pad_0C[0xC];
    float target_18;
} Cfg;

extern float D_0018E324;
extern float D_001D1930;

extern void func_1038B8(Out *a0, Mat *a1, Vec *a2);
extern int func_17A670(Obj *o, Out *v, char *b1, char *b2, void *p2, Cfg *cfg, int z);
extern int func_17A7F8(Obj *o, void *p2, void *p3, Cfg *cfg, int r, char *b1, char *b2);
extern int func_17B058(Obj *o, void *p2, Out *v, Cfg *cfg);
extern int func_17B858(Obj *o, void *p2, Out *v, Cfg *cfg, int p5);

static __inline__ int *MinA(int *a, int *b)
{
    return (*a < *b) ? a : b;
}

int func_17A330(Obj *o, void *p2, void *p3, Cfg *cfg, int p5)
{
    int r;
    int n;
    int two;
    int steps;
    int i;
    int t;
    float k1;
    float k2;
    float lim;
    float target;
    float f;
    float k;
    float *xp;
    float *vp;
    Out v;
    char b1[16];
    char b2[16];

    r = 0;
    if (o->state_40 == 3) {
        o->state_40 = 2;
    } else if (o->state_40 == 6) {
        o->state_40 = 0;
    } else if (o->state_40 == 5) {
        o->state_40 = 1;
    }
    if (o->state_40 != 4) {
        target = cfg->target_18;
        xp = &o->x_34;
        k1 = cfg->k1_00;
        k2 = cfg->k2_04;
        lim = cfg->lim_08;
        n = (int)(D_0018E324 * 59.998802f);
        two = 2;
        steps = *MinA(&n, &two);
        vp = &o->v_38;
        for (i = 0; i < steps; i++) {
            f = (target - *xp) * k1 - *vp * k2;
            *vp = f;
            if (lim < f) {
                *vp = lim;
            } else if (f < -lim) {
                *vp = -lim;
            }
            *xp = *xp + *vp;
        }
    }
    func_1038B8(&v, (Mat *)o, &o->pos_24);
    k = o->x_34 * D_001D1930;
    v.f_00 = v.f_00 * k;
    v.f_04 = v.f_04 * k;
    v.f_08 = v.f_08 * k;
    if (o->state_40 == 2 || o->state_40 == 4) {
        v.f_04 = v.f_04 + o->w_3C * D_001D1930;
        o->w_3C = o->w_3C - D_001D1930 * 0.011111112f;
    }
    t = func_17A670(o, &v, b1, b2, p2, cfg, 0);
    if (o->state_40 != 4 && func_17A7F8(o, p2, p3, cfg, t, b1, b2) != 0) {
        if (o->state_40 == 0) {
            r = func_17B058(o, p2, &v, cfg) == 0 ? 2 : 0;
        } else {
            r = 2;
        }
    }
    return func_17B858(o, p2, &v, cfg, p5) != 0 ? r : 1;
}
