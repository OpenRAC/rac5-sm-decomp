/* LEVEL_03:0x1AE6C0 -- placement copy of LEVEL_01_19B5F0.c: steers a homing pickup: drops it when the target slot is blocked, hands over on arrival, retires it when too far, otherwise moves it along its direction and re-aims the direction at the target with a smoothing factor. */
extern float sqrtf(float x);

typedef struct Item {
    char pad0[0x38];
    int w38;
} Item;

typedef struct Rec {
    char pad0[0x10];
    Item *slot[11];
    int idx;
    int w40;
} Rec;

typedef struct Target {
    char pad0[0x30];
    float pos[4];
    char pad40[0xF8 - 0x40];
    int wF8;
} Target;

typedef struct State {
    Target *target;
} State;

typedef struct Homing {
    float dir[3];
    float speed;
    char pad10[8];
    unsigned char kind;
} Homing;

typedef struct Obj {
    char pad0[0x30];
    float pos[4];
    char pad40[0x54 - 0x40];
    Homing *h;
    State *st;
} Obj;

extern int func_0244F8(int x, int y);
extern int func_03A600(char *object);
extern void func_1AED10(Obj *o, int mode);
extern void func_1AF008(char *object, void *unused, char *state);
extern void func_07C468(Obj *o, int mode);

static __inline__ void Copy3(float *dst, float *src)
{
    dst[0] = src[0];
    dst[1] = src[1];
    dst[2] = src[2];
}

static __inline__ void Sub3(float *out, float *a, float *b)
{
    out[0] = a[0] - b[0];
    out[1] = a[1] - b[1];
    out[2] = a[2] - b[2];
}

static __inline__ void MulAdd3(float *out, float *a, float *b, float s)
{
    out[0] = a[0] + b[0] * s;
    out[1] = a[1] + b[1] * s;
    out[2] = a[2] + b[2] * s;
}

void func_1AE6C0(Obj *o)
{
    State *st;
    Target *t;
    Homing *h;
    Rec *r;
    float d[4];
    float e[4];
    float lim[4];
    float *pick;
    float *spd;
    float d2;
    float len2;
    float inv;

    st = o->st;
    t = st->target;
    h = o->h;
    if (t != 0) {
        Copy3(d, t->pos);
        d[1] = d[1] + 0.6f;
        Sub3(d, d, o->pos);
        d2 = d[0] * d[0] + d[1] * d[1] + d[2] * d[2];
        r = (Rec *)func_0244F8(h->kind, st->target->wF8);
        if (r->w40 == r->slot[r->idx]->w38 || func_03A600((char *)t) != 0) {
            func_1AED10(o, 0);
        } else if (d2 < 0.5625f) {
            func_1AF008((char *)o, st->target, (char *)r);
        } else if (1024.0f < d2) {
            func_07C468(o, 1);
        } else {
            spd = &h->speed;
            MulAdd3(o->pos, o->pos, h->dir, h->speed);
            h->speed = h->speed + 0.060000002f;
            lim[0] = 0.33333334f;
            pick = lim;
            if (h->speed < 0.33333334f)
                pick = spd;
            h->speed = *pick;
            Copy3(e, t->pos);
            e[1] = e[1] + 0.6f;
            Sub3(e, e, o->pos);
            len2 = e[0] * e[0] + e[1] * e[1] + e[2] * e[2];
            if (!(len2 < 2.3841858e-07f)) {
                inv = 1.0f / sqrtf(len2);
                e[0] = e[0] * inv;
                e[1] = e[1] * inv;
                e[2] = e[2] * inv;
            }
            if (h->speed < 0.33333334f) {
                h->dir[0] = (e[0] - h->dir[0]) * 0.08f + h->dir[0];
                h->dir[1] = (e[1] - h->dir[1]) * 0.08f + h->dir[1];
                h->dir[2] = (e[2] - h->dir[2]) * 0.08f + h->dir[2];
            } else if (h->dir[1] > 0.0f) {
                h->dir[0] = (e[0] - h->dir[0]) * 0.2f + h->dir[0];
                h->dir[1] = (e[1] - h->dir[1]) * 0.2f + h->dir[1];
                h->dir[2] = (e[2] - h->dir[2]) * 0.2f + h->dir[2];
            } else {
                h->dir[0] = e[0];
                h->dir[1] = e[1];
                h->dir[2] = e[2];
            }
        }
    }
}
