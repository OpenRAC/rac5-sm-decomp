/* LEVEL_05:0x187E68 -- handles a message with code 1: for flag 1 or 2 it runs the object-position effect with the matching global parameter block; for flag 4 it first asks the helper for a target point, pulls it half-way towards the object position, passes it on and then runs the effect with the third block; returns whether a flag matched. */
struct Cfg {
    float f00;
    float f04;
    float f08;
    float f0C;
    float f10;
    float f14;
};

struct Obj {
    char pad00[0x30];
    float pos[3];
};

struct Msg {
    char pad00[0xC];
    int w0C;
    unsigned int w10;
};

extern struct Cfg D_001F7768;
extern struct Cfg D_001F7780;
extern struct Cfg D_001F7798;

extern void func_186FB0(struct Obj *o, float *out, int a, int b);
extern void func_182938(struct Obj *o, float *pos, float *v);
extern void func_0127B0(float *pos, float a, float b, float c, float d, float e, float f);

static __inline__ void Sub3(float *out, float *a, float *b)
{
    out[0] = a[0] - b[0];
    out[1] = a[1] - b[1];
    out[2] = a[2] - b[2];
}

static __inline__ void Half3(float *v, float *d)
{
    v[0] = v[0] + d[0] * 0.5f;
    v[1] = v[1] + d[1] * 0.5f;
    v[2] = v[2] + d[2] * 0.5f;
}

int func_187E68(struct Obj *o, struct Msg *m)
{
    float v[3];
    float d[3];

    if (m->w0C == 1) {
        if (m->w10 & 1) {
            func_0127B0(o->pos, D_001F7768.f00, D_001F7768.f04, D_001F7768.f08, D_001F7768.f10, D_001F7768.f10, D_001F7768.f14);
            return 1;
        }
        if (m->w10 & 2) {
            func_0127B0(o->pos, D_001F7780.f00, D_001F7780.f04, D_001F7780.f08, D_001F7780.f10, D_001F7780.f10, D_001F7780.f14);
            return 1;
        }
        if (m->w10 & 4) {
            func_186FB0(o, v, 0, 0);
            Sub3(d, v, o->pos);
            Half3(v, d);
            func_182938(o, o->pos, v);
            func_0127B0(o->pos, D_001F7798.f00, D_001F7798.f04, D_001F7798.f08, D_001F7798.f10, D_001F7798.f10, D_001F7798.f14);
            return 1;
        }
    }
    return 0;
}
