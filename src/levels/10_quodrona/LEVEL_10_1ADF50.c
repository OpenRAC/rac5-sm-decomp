/* LEVEL_10:0x1ADF50 -- placement copy of LEVEL_01_1A3DA8.c: switches the actor into its triggered state: spends one use of the owner's entry, applies a scaled direction, starts the effect and sound and clamps the global gauge byte. */

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

extern float D_0022FFB0[];
extern int D_00223780;
extern Gauge D_0023A330;

extern Entry *func_023F90(int a, int b);
extern int func_024808(int a, int b);
extern void func_012220(float *v);
extern void func_0DD560(int a, int b, unsigned int c, int d, int e, int f, unsigned int g, float f0, float f1, float f2);
extern void func_07D358(Actor *a, int b, int c, int d, float f0, float f1);

static __inline__ void Scale3(float *out, float *in, float k)
{
    out[0] = k * in[0];
    out[1] = k * in[1];
    out[2] = k * in[2];
}

void func_1ADF50(Actor *a)
{
    Extra *x;
    Owner *o;
    Entry *e;
    int idx;
    float v[3];
    float s;

    x = a->extra;
    o = x->owner;
    e = func_023F90(0xF, o->link);
    idx = func_024808(0xF, o->link);
    a->timer = 24.0f;
    s = D_0022FFB0[idx];
    Scale3(v, &o->dir.x, s);
    func_012220(v);
    if (idx != 0) {
        func_0DD560(0, 0, 0xFFFFFFFFu, 0, 7, 0, 0xFFFFFFFFu, 5.0f, 0.0f, 0.75f);
    }
    x->state = 3;
    func_07D358(a, 3, 0, 1, 0.10000000149011612f, 0.0f);
    a->mode = 8;
    e->uses = e->uses - 1;
    if (e->uses != 0) {
        x->flag = 1;
    }
    if (D_00223780 == 7) {
        if ((unsigned int)(D_0023A330.gauge - 1) < 0x3F) {
            D_0023A330.gauge = 0x80;
        }
    }
}
