/* LEVEL_23:0x144420 -- placement copy of LEVEL_22_11B0C8.c: switches an object between states, spawning or releasing its effects. */
typedef struct {
    char pad0[0x14];
    float p[4];
} Eff;
typedef struct {
    char pad0[0x108];
    Eff *e108;
    Eff *e10C;
    Eff *e110;
} Glob;
typedef struct {
    char pad0[0xC];
    float spd;
    float v10;
    float v14;
} Cfg;
typedef struct {
    char pad0[0x24];
    float pos[3];
    char pad30[0x24];
    unsigned char fl;
} Fx;
typedef struct {
    char pad0[0x94];
    Fx *fx;
} St;
typedef struct {
    char pad0[0x20];
    float vel[3];
    float padv;
    float pos[3];
    char pad3C[0x18];
    Cfg *cfg;
    St *st;
} Self;

extern Glob D_00363960;
extern void func_077DD0(Self *s, Eff *e, void *out, int a, int b, int c, int d, int e2, float f0, float f1, float f2, float f3);
extern void func_077F38(Fx *fx);

void func_144420(Self *self, unsigned char prev, unsigned char state)
{
    Cfg *cfg;
    St *st;
    Eff *e;
    float k;
    float *va;
    float *pb;
    float *dst;
    Fx **slot;

    cfg = self->cfg;
    st = self->st;
    switch (state) {
    case 0:
        break;
    case 1:
    case 2:
        if (prev == 3) {
            e = D_00363960.e110;
            if (e)
                func_077DD0(self, e, 0, 0, 0, 0, 0, 1, e->p[0], e->p[1], e->p[2], e->p[3]);
        }
        slot = &st->fx;
        e = D_00363960.e108;
        if (e)
            func_077DD0(self, e, slot, 0, 0, 0, 0, 1, e->p[0], e->p[1], e->p[2], e->p[3]);
        if (st->fx) {
            st->fx->fl |= 1;
            va = self->vel;
            pb = self->pos;
            k = cfg->spd * 0.3499999940395355f;
            dst = st->fx->pos;
            dst[0] = pb[0] + va[0] * k;
            dst[1] = pb[1] + va[1] * k;
            dst[2] = pb[2] + va[2] * k;
        }
        *(float *)((char *)self + 0x70) = cfg->v10;
        break;
    case 3:
        if ((unsigned char)(prev - 1) < 2) {
            e = D_00363960.e10C;
            if (e)
                func_077DD0(self, e, 0, 0, 0, 0, 0, 1, e->p[0], e->p[1], e->p[2], e->p[3]);
        }
        if (st->fx)
            func_077F38(st->fx);
        st->fx = 0;
        *(float *)((char *)self + 0x70) = cfg->v14;
        break;
    default:
        break;
    }
    *((unsigned char *)self + 0x45) = state;
}
