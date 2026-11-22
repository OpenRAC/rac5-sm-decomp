/* USA LEVEL_08.REL:0x1BFAB0 (21 November 2026): exact linked bytes under
 * pinned, held.
 * Its form stays out of the accepted set because a placement declares
 * func_014850 unlike its accepted definition; and declares func_188C70 unlike
 * its accepted definition.
 * Reconcile the prototypes (EE ABI rules in AGENTS.md) before promotion. No
 * matching credit.
 */
typedef struct Obj Obj;

typedef struct {
    char pad0[0x58];
    char pad58[8];
    unsigned char b60;
} Child;

typedef struct {
    char pad0[0x58];
    Child *child;
} Proxy;

typedef struct {
    char pad0[0xDC];
    void (*cb)(Obj *o);
} Rec48;

typedef struct {
    char pad0[0x10];
    int w10;
    char pad14[0x15];
    unsigned char b29;
    char pad2A[0xA];
    Proxy *w34;
    char pad38[4];
    unsigned char b3C;
    char pad3D[7];
    int w44;
} State;

struct Obj {
    char pad0[0x30];
    float pos[3];
    char pad3C[9];
    unsigned char b45;
    char pad46[2];
    Rec48 *rec48;
    char pad4C[8];
    State *state;
    char pad58[0xC];
    unsigned int flags;
};

extern Proxy *D_0024FC54;
extern float D_00251E80[1];

extern void func_1C2798(Obj *o);
extern void func_1C0EC0(Obj *o);
extern float func_0274E8(void);
extern int func_030140(State *s, Obj *o);
extern int func_014850(float *pos, int a, int b, float f);
extern void func_1C2638(Obj *o);
extern void func_188C70(Proxy *p, Obj *o);

static __inline__ int Resolve(Proxy **slot)
{
    int n;
    Proxy *p;

    n = (int)*slot;
    if (n == 0) {
        return 0;
    }
    p = (Proxy *)((char *)D_0024FC54 + n);
    if (*(int *)((char *)p + 0x40) == 0) {
        *slot = 0;
        return 0;
    }
    *slot = p;
    return 1;
}

int func_1BFAB0(Obj *o)
{
    State *s;
    Proxy **slot;
    void (*cb)(Obj *);

    o->rec48->cb = func_1C2798;
    o->flags = o->flags | 0x1000;
    if (o->b45 == 2) {
        return 1;
    }
    D_00251E80[0] = func_0274E8() * 0.3333333432674408f;
    s = o->state;
    if (func_030140(s, o) != 1) {
        return 0;
    }
    if (s->b3C == 0) {
        if (func_014850(o->pos, 0, 1, 1.0f) == 0) {
            return 0;
        }
    } else {
        s->b29 = 3;
    }
    if (s->w44 == 0) {
        s->w44 = s->w10;
    }
    func_1C2638(o);
    slot = &s->w34;
    cb = func_1C0EC0;
    if (Resolve(slot)) {
        if ((*slot)->child->b60 < 12) {
            func_188C70(*slot, o);
        }
    } else if (cb != 0) {
        cb(o);
    }
    return 1;
}
