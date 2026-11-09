/* LEVEL_01.REL:0x1A3DA8: reviewed 376-byte candidate, held for ABI review.
 * Switches the actor into its triggered state: spends one use of the owner's
 * entry, applies a scaled direction, starts the effect and sound and clamps
 * the global gauge byte.
 * pinned C with gnu-ee-trial links 376/376 bytes and is byte-exact at this and
 * 11 other USA placements, but the prototypes disagree.
 * It declares func_024628 returning pointer with (int, int), but the accepted
 * LEVEL_01_024628.c defines it returning int with (int, int).
 * It declares func_024EA0 returning int with (int, int), but the accepted
 * LEVEL_01_024EA0.c defines it returning int with no arguments.
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
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

extern float D_002260B8[];
extern int D_0021A7F0;
extern Gauge D_00230F30;

extern Entry *func_024628(int a, int b);
extern int func_024EA0(int a, int b);
extern void func_012478(float *v);
extern void func_0DC120(int a, int b, unsigned int c, int d, int e, int f, unsigned int g, float f0, float f1, float f2);
extern void func_07CD28(Actor *a, int b, int c, int d, float f0, float f1);

static __inline__ void Scale3(float *out, float *in, float k)
{
    out[0] = k * in[0];
    out[1] = k * in[1];
    out[2] = k * in[2];
}

void func_1A3DA8(Actor *a)
{
    Extra *x;
    Owner *o;
    Entry *e;
    int idx;
    float v[3];
    float s;

    x = a->extra;
    o = x->owner;
    e = func_024628(0xF, o->link);
    idx = func_024EA0(0xF, o->link);
    a->timer = 24.0f;
    s = D_002260B8[idx];
    Scale3(v, &o->dir.x, s);
    func_012478(v);
    if (idx != 0) {
        func_0DC120(0, 0, 0xFFFFFFFFu, 0, 7, 0, 0xFFFFFFFFu, 5.0f, 0.0f, 0.75f);
    }
    x->state = 3;
    func_07CD28(a, 3, 0, 1, 0.10000000149011612f, 0.0f);
    a->mode = 8;
    e->uses = e->uses - 1;
    if (e->uses != 0) {
        x->flag = 1;
    }
    if (D_0021A7F0 == 7) {
        if ((unsigned int)(D_00230F30.gauge - 1) < 0x3F) {
            D_00230F30.gauge = 0x80;
        }
    }
}
