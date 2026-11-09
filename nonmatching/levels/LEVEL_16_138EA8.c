/* LEVEL_16.REL:0x138EA8: reviewed 540-byte candidate, held for ABI review.
 * Looks for a target in range, otherwise ticks the idle state machine.
 * gnu-ee-trial-divpad C with gnu-ee-trial links 540/540 bytes and is byte-
 * exact at this USA placement, but the prototypes disagree.
 * It declares func_13A010 returning void with (int, pointer), but the accepted
 * LEVEL_16_13A010.c defines it returning void with (pointer, pointer).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
typedef struct Ent {
    char pad[0x59C];
    int owner;
} Ent;

typedef struct B {
    char pad0[0x2C];
    int w2C;
    int w30;
    int w34;
} B;

typedef struct S {
    char pad0[0x50];
    int timer;
    char pad1[0x5C - 0x54];
    int target;
    char pad2[0x70 - 0x60];
    unsigned char b70;
} S;

typedef struct Obj {
    char pad0[0x30];
    float pos[3];
    char pad1[0x45 - 0x3C];
    unsigned char b45;
    char pad2[0x54 - 0x46];
    B *b;
    S *s;
} Obj;

extern Ent *func_112CE8(int i);
extern void func_13A010(int owner, float *out);
extern int func_0763F8(int a, float *p);
extern void func_1394D0(Obj *o, int a, int b);
extern int func_06FDC0(Obj *o);
extern int func_06FB50(Obj *o, int a);
extern void func_06FCA8(Obj *o, int a, int b, int c, float f, float g);
extern int func_139FE0(void);
extern int func_14AA00(int a, int b);
extern int rand(void);

static inline void vsub(float *o, float *a, float *b)
{
    o[0] = a[0] - b[0];
    o[1] = a[1] - b[1];
    o[2] = a[2] - b[2];
}

static inline unsigned char search(Obj *o, B *b, S *s)
{
    float buf[3];
    float d[3];
    Ent *e;
    unsigned int i;

    if (b->w2C != 0) {
        for (i = 0; i < 2; i++) {
            e = func_112CE8(i);
            if (e == 0)
                continue;
            if (e->owner == 0)
                continue;
            func_13A010(e->owner, buf);
            if (func_0763F8(b->w2C, buf) == 0)
                continue;
            if (b->w34 != 0 && func_0763F8(b->w34, buf) != 0)
                continue;
            vsub(d, buf, o->pos);
            if (d[0] * d[0] + d[1] * d[1] + d[2] * d[2] <= 625.0f) {
                s->target = e->owner;
                return 1;
            }
        }
    }
    return 0;
}

void func_138EA8(Obj *o)
{
    B *b = o->b;
    S *s = o->s;

    if (search(o, b, s)) {
        func_1394D0(o, o->b45, 5);
        return;
    }
    s->timer = s->timer - 1;
    if (func_06FDC0(o) == 7) {
        if (func_06FB50(o, 0)) {
            func_06FCA8(o, 6, 0, 1, 0.0f, 0.0f);
            s->timer = func_139FE0();
            return;
        }
    }
    if (s->timer > 0)
        return;
    if (b->w30 == 0 || func_14AA00(b->w30, s->b70) == 0)
        rand();
    func_06FCA8(o, 7, 0, 1, 0.15000000596046448f, 0.0f);
    s->timer = 0x7FFFFFFF;
}
