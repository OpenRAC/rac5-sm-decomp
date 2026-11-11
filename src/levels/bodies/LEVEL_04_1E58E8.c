/* LEVEL_04:0x1E58E8 -- steps a timed three-state animation controller. */
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

extern Eff *D_003B3ECC;
extern const float D_00244A54;
extern float D_00244A60[];
extern char D_00244A48[];

extern void func_0326E0(float *in, Obj *o, unsigned char *cur, float *scale, int tab);
extern int func_07FF30(Obj *a, int n);
extern float func_07FED8(Obj *a);
extern void func_083E30(Obj *a, Eff *e, int a1, int a2, int a3, int a4, int a5, int a6,
                        float f0, float f1, float f2, float f3);
extern void func_080188(Obj *a, int n, int z, int one, float f0, float f1);

void func_1E58E8(Ctl *c, Obj *a, int go, Pair p)
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
                func_0326E0(&c->in, a, &c->state, D_00244A60, (int)D_00244A48);
            }
        } else if (c->timer == 0) {
            if (func_07FF30(a, 1) != 0)
                c->rate = -0.5f / (func_07FED8(a) * 30.0f);
        }
    } else if (c->timer == 0 && go != 0) {
        c->flag = 0;
        e = D_003B3ECC;
        if (e != 0)
            func_083E30(a, e, 0, 0, 0, 0, 0, 1, e->f[0], e->f[1], e->f[2], e->f[3]);
        c->state = 3;
        c->timer = p.a;
        func_080188(a, 3, 0, 1, D_00244A54, 0.0f);
        c->rate = 0.5f / (func_07FED8(a) * 30.0f);
        a->anim->f8 = 0.0f;
    } else {
        func_0326E0(&c->in, a, &c->state, D_00244A60, (int)D_00244A48);
    }
}
