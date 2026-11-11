/* LEVEL_08:0x1D6460 -- placement copy of LEVEL_01_1A3DA8.c: switches the actor into its triggered state: spends one use of the owner's entry, applies a scaled direction, starts the effect and sound and clamps the global gauge byte. */

typedef struct {
    float x;
    float y;
    float z;
} Vec3;

typedef struct {
    char pad_00[0x20];
    Vec3 dir;
    char pad_2C[0xCC];
    int link;
} Owner;

typedef struct {
    Owner *owner;
    int state;
    char pad_08[0x118];
    unsigned char flag;
} Extra;

typedef struct {
    char pad_00[0x45];
    unsigned char mode;
    char pad_46[0x12];
    Extra *extra;
    char pad_5C[0x14];
    float timer;
} Actor;

typedef struct {
    char pad_00[0x40];
    int uses;
} Entry;

typedef struct {
    char pad_00[0xD];
    unsigned char gauge;
} Gauge;

extern float D_00273C18[];
extern int D_00264470;
extern Gauge D_002801B0;

extern Entry *func_024EA8(int a, int b);
extern int func_025720(int a, int b);
extern void func_0124E0(float *v);
extern void func_0E70F0(int a, int b, unsigned int c, int d, int e, int f, unsigned int g, float f0, float f1, float f2);
extern void func_084C98(Actor *a, int b, int c, int d, float f0, float f1);

static __inline__ void Scale3(float *out, float *in, float k)
{
    out[0] = k * in[0];
    out[1] = k * in[1];
    out[2] = k * in[2];
}

void func_1D6460(Actor *a)
{
    Extra *x;
    Owner *o;
    Entry *e;
    int idx;
    float v[3];
    float s;

    x = a->extra;
    o = x->owner;
    e = func_024EA8(0xF, o->link);
    idx = func_025720(0xF, o->link);
    a->timer = 24.0f;
    s = D_00273C18[idx];
    Scale3(v, &o->dir.x, s);
    func_0124E0(v);
    if (idx != 0) {
        func_0E70F0(0, 0, 0xFFFFFFFFu, 0, 7, 0, 0xFFFFFFFFu, 5.0f, 0.0f, 0.75f);
    }
    x->state = 3;
    func_084C98(a, 3, 0, 1, 0.10000000149011612f, 0.0f);
    a->mode = 8;
    e->uses = e->uses - 1;
    if (e->uses != 0) {
        x->flag = 1;
    }
    if (D_00264470 == 7) {
        if ((unsigned int)(D_002801B0.gauge - 1) < 0x3F) {
            D_002801B0.gauge = 0x80;
        }
    }
}
