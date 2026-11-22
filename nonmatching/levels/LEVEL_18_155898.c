/* USA LEVEL_18.REL:0x155898 (22 November 2026): exact linked bytes under gnu-
 * ee-trial, held.
 * Its form stays out of the accepted set because a placement declares
 * func_111BB8 unlike its accepted definition.
 * Reconcile the prototypes (EE ABI rules in AGENTS.md) before promotion. No
 * matching credit.
 */
typedef struct {
    char pad0[0x20];
    unsigned int id;
    char pad24[0x34 - 0x24];
} Rec;

typedef struct {
    char pad0[4];
    Rec *recs;
} Type;

typedef struct {
    char *a;
    int b;
} Info;

typedef struct {
    char pad0[8];
    float rate;
    float phase;
    char pad10[4];
    char *slot;
} State;

typedef struct {
    char pad0[0x14];
    float f14;
    float f18;
    float f1C;
    float f20;
} Fx;

typedef struct Obj Obj;
struct Obj {
    char pad0[0x40];
    Type *type;
    unsigned char idx;
    char pad45[2];
    unsigned char dir;
    char pad48[0x54 - 0x48];
    Info *info;
    State *st;
};

extern Fx *D_001BF0C8;
extern Fx *D_001BF0CC;

extern int func_111BB8(Obj *o);
extern int func_158008(char *a);
extern unsigned char func_157FF8(char *a);
extern void func_072D30(char *slot);
extern void func_072BC8(Obj *o, Fx *fx, char **slot, int a, int b, int c, int d, int e, float f0, float f1, float f2, float f3);

void func_155898(Obj *o, float dt)
{
    Info *in;
    State *st;
    Type *t;
    int idx;
    int off;
    float f;

    in = o->info;
    st = o->st;
    off = 0;
    if (func_111BB8(o) != 0 || func_158008(in->a) == 0 || in->b != func_157FF8(in->a)) {
        off = 1;
    }
    if (off != 0) {
        o->dir = 0;
        if (st->slot != 0) {
            func_072D30(st->slot);
            st->slot = 0;
        }
        return;
    }
    if (st->slot == 0) {
        t = o->type;
        idx = o->idx;
        if (t->recs[idx].id == 0x3B82E9BA && D_001BF0C8 != 0) {
            func_072BC8(o, D_001BF0C8, &st->slot, 0, 0, 0, 0, 1, D_001BF0C8->f14, D_001BF0C8->f18, D_001BF0C8->f1C, D_001BF0C8->f20);
        } else if (o->type->recs[o->idx].id == 0x97990472 && D_001BF0CC != 0) {
            func_072BC8(o, D_001BF0CC, &st->slot, 0, 0, 0, 0, 1, D_001BF0CC->f14, D_001BF0CC->f18, D_001BF0CC->f1C, D_001BF0CC->f20);
        }
    }
    if (func_157FF8(in->a) == 0) {
        o->dir = 2;
        st->phase = st->phase + st->rate * dt;
        if (1.0f < st->phase) {
            st->phase = st->phase - 1.0f;
        }
    } else {
        o->dir = 1;
        st->phase = st->phase - st->rate * dt;
        if (st->phase < -1.0f) {
            st->phase = st->phase + 1.0f;
        }
    }
}
