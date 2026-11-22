/* LEVEL_07:0x169A90 -- glides a camera between two anchor points: picks a goal 12 units to one side of the target (side flips each cycle), advances the blend time at a rate set by the quality level, eases x and z with a smoothstep and restarts the cycle at the end. */
typedef struct {
    char pad00[0x30];
    float pos[3];
} Cam;

typedef struct {
    char pad00[0x10];
    Cam *tgt;
} Holder;

typedef struct {
    char padAC_[0xAC];
    float from[3];
    float t;
    char padBC[8];
    Holder *holder;
    char padC8[0x49];
    unsigned char flag;
} State;

extern float D_0022CB98[3];
extern int D_0021B9D8;

extern void *memset(void *p, int c, unsigned int n);

static __inline__ void Copy3(float *d, float *s)
{
    d[0] = s[0];
    d[1] = s[1];
    d[2] = s[2];
}

static __inline__ void Mad3(float *d, float *a, float *b, float k)
{
    d[0] = a[0] + b[0] * k;
    d[1] = a[1] + b[1] * k;
    d[2] = a[2] + b[2] * k;
}

void func_169A90(Cam *c, State *s)
{
    float p[4];
    float dir[3];
    Holder *h;
    float rate;
    float nt;
    float x;
    float t;

    h = s->holder;
    memset(p, 0, 16);
    Copy3(dir, D_0022CB98);
    if (s->flag != 0) {
        Mad3(p, h->tgt->pos, D_0022CB98, 12.0f);
    } else {
        Mad3(p, h->tgt->pos, D_0022CB98, -12.0f);
        dir[2] = -1.0f;
    }
    rate = 0.008333334f;
    if (D_0021B9D8 >= 6) {
        rate = 0.0050000004f;
    } else if (D_0021B9D8 >= 3) {
        rate = 0.0062500006f;
    }
    nt = s->t + rate;
    s->t = nt;
    if (1.0f < nt) {
        s->t = 1.0f;
    }
    t = s->t;
    if (t <= 0.0001f) {
        x = s->from[0];
    } else if (t >= 0.999f) {
        x = p[0];
    } else {
        x = (p[0] - s->from[0]) * (t * t * -2.0f * t + t * t * 3.0f) + s->from[0];
    }
    c->pos[0] = x;
    t = s->t;
    if (t <= 0.0001f) {
        x = s->from[2];
    } else if (t >= 0.999f) {
        x = p[2];
    } else {
        x = (p[2] - s->from[2]) * (t * t * -2.0f * t + t * t * 3.0f) + s->from[2];
    }
    c->pos[2] = x;
    if (s->t == 1.0f) {
        Copy3(s->from, c->pos);
        s->t = 0.0f;
        s->flag = (s->flag == 0);
    }
}
