/* USA LEVEL_10.REL:0x1772D8, 404-byte candidate (22 November 2026).
 * Measured gnu-ee-trial --flag=-fno-gcse: 19 differing words; first difference
 * at 0xC0.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
struct Obj;

typedef struct Cls {
    char pad00[0x20];
    void (*hit)(struct Obj *t, int a, int b, float *v, float *p, struct Obj *src, float amount);
} Cls;

typedef struct Vt {
    char pad00[0x20];
    int unused;
} Vt;

typedef struct Target {
    char pad00[0x40];
    Cls *cls;
    char pad44[0x59C - 0x44];
    int w59C;
} Target;

typedef struct Hit {
    char pad00[0x10];
    Target *t;
    int kind;
    float v[3];
} Hit;

typedef struct Mat {
    char pad00[0x10];
    float a10[4];
    float a20[4];
} Mat;

typedef struct State {
    int w0;
    char pad04[0x10];
    int w14;
    float at18[3];
} State;

typedef struct Obj {
    char pad00[0x20];
    float at20[3];
    char pad2C[4];
    float pos[3];
    char pad3C[0x58 - 0x3C];
    State *state;
    char pad5C[0x70 - 0x5C];
    float f70;
} Obj;

extern void func_177560(Obj *o);
extern int func_177788(Obj *o, Hit *h, float *p, int a, float f);
extern void func_0EF270(int a, float *p);
extern void func_07CCA0(Obj *o, int a);
extern Mat *func_000F68(void);
extern void func_124EF8(float *a, float *b, float *c, float *d, float *e);
extern int func_0F0290(int a, float *b, float *c, float *d);

void func_1772D8(Obj *o)
{
    Hit h;
    float v[4];
    float a[9];
    State *s;
    Target *t;
    Mat *m;
    float *p;
    float *q;
    float f;
    int arg;

    f = o->f70 - 1.0f;
    o->f70 = f;
    if (f <= 0.0f) {
        func_07CCA0(o, 1);
        return;
    }
    func_177560(o);
    s = o->state;
    if (s->w0 != 0) {
        arg = ((Target *)s->w0)->w59C;
    } else {
        arg = 0;
    }
    p = o->at20;
    if (func_177788(o, &h, p, arg, 0.5f) != 0) {
        if (h.kind == 2) {
            v[0] = h.v[0];
            v[1] = h.v[1];
            v[2] = h.v[2];
            v[3] = 1.0f;
            t = h.t;
            if (t->cls->hit != 0) {
                t->cls->hit((struct Obj *)t, 1, 1, v, p, o, 1.0f);
            }
        }
        func_0EF270(0x18, o->pos);
        func_07CCA0(o, 1);
        return;
    }
    q = o->pos;
    m = func_000F68();
    func_124EF8(a, &a[3], p, m->a20, m->a10);
    a[6] = o->at20[0];
    a[7] = o->at20[1];
    a[8] = o->at20[2];
    s->w14 = func_0F0290(3, s->w14 != 0 ? s->at18 : q, q, a);
    s->at18[0] = o->pos[0];
    s->at18[1] = q[1];
    s->at18[2] = q[2];
}
