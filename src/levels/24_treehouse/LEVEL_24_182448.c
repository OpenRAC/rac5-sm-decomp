/* LEVEL_24:0x182448 -- placement copy of LEVEL_01_1A3DA8.c: switches the actor into its triggered state: spends one use of the owner's entry, applies a scaled direction, starts the effect and sound and clamps the global gauge byte. */

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

extern float D_001F3538[];
extern int D_001EB570;
extern Gauge D_001FCE30;

extern Entry *func_022400(int a, int b);
extern int func_022C78(int a, int b);
extern void func_0120E0(float *v);
extern void func_0D5A88(int a, int b, unsigned int c, int d, int e, int f, unsigned int g, float f0, float f1, float f2);
extern void func_077408(Actor *a, int b, int c, int d, float f0, float f1);

static __inline__ void Scale3(float *out, float *in, float k)
{
    out[0] = k * in[0];
    out[1] = k * in[1];
    out[2] = k * in[2];
}

void func_182448(Actor *a)
{
    Extra *x;
    Owner *o;
    Entry *e;
    int idx;
    float v[3];
    float s;

    x = a->extra;
    o = x->owner;
    e = func_022400(0xF, o->link);
    idx = func_022C78(0xF, o->link);
    a->timer = 24.0f;
    s = D_001F3538[idx];
    Scale3(v, &o->dir.x, s);
    func_0120E0(v);
    if (idx != 0) {
        func_0D5A88(0, 0, 0xFFFFFFFFu, 0, 7, 0, 0xFFFFFFFFu, 5.0f, 0.0f, 0.75f);
    }
    x->state = 3;
    func_077408(a, 3, 0, 1, 0.10000000149011612f, 0.0f);
    a->mode = 8;
    e->uses = e->uses - 1;
    if (e->uses != 0) {
        x->flag = 1;
    }
    if (D_001EB570 == 7) {
        if ((unsigned int)(D_001FCE30.gauge - 1) < 0x3F) {
            D_001FCE30.gauge = 0x80;
        }
    }
}
