/* LEVEL_15:0x1053D8 -- for each of two entries, builds a scaled direction vector and calls the update helper, falling back to the reset helper when it returns zero. */

struct Ent {
    int w_00;
    char pad_04[0xC];
    int w_10;
};

struct Pair {
    float f_00;
    float f_04;
};

struct Obj {
    char pad_00[0x9C];
    char b_9C[0x18];
    float v_B4[3];
    char pad_C0[0x260 - 0xC0];
    float f_260;
    char pad_264[0x3F8 - 0x264];
    struct Pair t_3F8[2];
    struct Ent e_408[2];
};

struct Rec {
    char pad_00[4];
    char b_04[0xC];
    char b_10[0xC];
};

extern struct Rec D_0016FCE8[];

static __inline__ void ScaleVec3(float *d, float *s, float k)
{
    d[0] = k * s[0];
    d[1] = k * s[1];
    d[2] = k * s[2];
}

extern int func_104CA8(struct Ent *e, int a, float *v, char *p, char *q, char *r, int t);
extern void func_105398(struct Obj *o, int i);

void func_1053D8(struct Obj *o)
{
    float v[3];
    float inv;
    int i;
    struct Rec *r;
    struct Ent *e;
    struct Pair *t;

    r = D_0016FCE8;
    for (i = 0; i < 2; i++) {
        e = &o->e_408[i];
        t = &o->t_3F8[i];
        if (e->w_00 != 0) {
            if (!(t->f_00 > 0.01f)) {
                inv = 1.0f / o->f_260;
                ScaleVec3(v, o->v_B4, inv);
                if (func_104CA8(e, e->w_00, v, r[i].b_04, r[i].b_10, o->b_9C, e->w_10) == 0) {
                    func_105398(o, i);
                }
            }
        }
    }
}
