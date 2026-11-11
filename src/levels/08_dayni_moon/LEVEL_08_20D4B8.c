/* LEVEL_08:0x20D4B8 -- placement copy of LEVEL_04_1E58E8.c: steps a timed three-state animation controller. */
typedef struct { unsigned short a; unsigned short b; } Pair;
typedef struct {
    char pad0[8];
    float f8;
} Anim;
typedef struct {
    float in;
    char pad0[0x14];
    float rate;
    char pad1[0x3C - 0x1C];
    unsigned short timer;
    unsigned char state;
    unsigned char flag;
} Ctl;
typedef struct {
    char pad0[0x48];
    Anim *anim;
} Obj;
typedef struct {
    char pad0[0x14];
    float f[4];
} Eff;

extern Eff *D_003EB424;
extern const float D_0027915C;
extern float D_00279168[];
extern char D_00279150[];

extern void func_035958(float *in, Obj *o, unsigned char *cur, float *scale, int tab);
extern int func_084A40(Obj *a, int n);
extern float func_0849E8(Obj *a);
extern void func_088940(Obj *a, Eff *e, int a1, int a2, int a3, int a4, int a5, int a6,
                        float f0, float f1, float f2, float f3);
extern void func_084C98(Obj *a, int n, int z, int one, float f0, float f1);

void func_20D4B8(Ctl *c, Obj *a, int go, Pair p)
{
    Eff *e;

    if (c->timer != 0)
        c->timer = c->timer - 1;
    if (c->state == 3) {
        if (c->rate > 0.0f) {
            a->anim->f8 = a->anim->f8 + c->rate;
            if (a->anim->f8 >= 1.0f) {
                c->rate = 0.0f;
                a->anim->f8 = 1.0f;
            }
        } else if (c->rate < 0.0f) {
            a->anim->f8 = a->anim->f8 + c->rate;
            if (a->anim->f8 <= 0.0f) {
                c->timer = p.b;
                c->rate = 0.0f;
                func_035958(&c->in, a, &c->state, D_00279168, (int)D_00279150);
            }
        } else if (c->timer == 0) {
            if (func_084A40(a, 1) != 0)
                c->rate = -0.5f / (func_0849E8(a) * 30.0f);
        }
    } else if (c->timer == 0 && go != 0) {
        c->flag = 0;
        e = D_003EB424;
        if (e != 0)
            func_088940(a, e, 0, 0, 0, 0, 0, 1, e->f[0], e->f[1], e->f[2], e->f[3]);
        c->state = 3;
        c->timer = p.a;
        func_084C98(a, 3, 0, 1, D_0027915C, 0.0f);
        c->rate = 0.5f / (func_0849E8(a) * 30.0f);
        a->anim->f8 = 0.0f;
    } else {
        func_035958(&c->in, a, &c->state, D_00279168, (int)D_00279150);
    }
}
