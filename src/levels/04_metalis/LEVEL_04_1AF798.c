/* LEVEL_04:0x1AF798 -- placement copy of LEVEL_01_1A3BE8.c: finds nearby objects, triggers their callbacks and plays an effect for each. */
typedef struct DamageInfo {
    int kind;
    float damage;
    int element;
    int hitClass;
} DamageInfo;

typedef struct DamageTable {
    char pad_00[0xEF0];
    DamageInfo entry239;
} DamageTable;

typedef struct Cb {
    char pad_00[0x20];
    int (*fn)(void *self, int a, float f, int b, int c, int d, void *e);
} Cb;

typedef struct Own {
    char pad_00[0x30];
    float pos[3];
    char pad_3C[0x1C];
    int *req;
} Own;

typedef struct Tgt {
    char pad_00[0x40];
    Cb *cb;
    char pad_44[0x20];
    unsigned flags;
} Tgt;

typedef struct Ent {
    char pad_00[0x14];
    float f_14;
    float f_18;
    float f_1C;
    float f_20;
} Ent;

/* The attack damage table: 259 entries of 16 bytes (kind, damage, element, hit class). */
extern DamageTable D_002326D8;

extern int func_01C068(Tgt **buf, int n, float *pos, int a, int b, int c, int d, float r);
extern Ent *func_023EB8(int a);
extern void func_083E30(Own *o, Ent *e, int a, int b, int c, int d, int e2, int f, float f0, float f1, float f2, float f3);
extern void func_083C10(Tgt *t, float *v, int a, int b);
extern void func_015C80(int a, int b, Tgt *t, int c);
extern void func_0F6E68(int a, float *v);

void func_1AF798(Own *o)
{
    Tgt *buf[16];
    float vec[4];
    unsigned i;
    unsigned n;
    Tgt *t;
    Cb *cb;
    DamageInfo *s;
    DamageTable *g;
    Ent *e;
    int res;
    float f;
    float h;

    n = func_01C068(buf, 16, o->pos, 0x129, 0x101, 2, 1, 15.0f);
    e = func_023EB8(5);
    if (e) {
        func_083E30(o, e, 0, 0, 0, 0, 0, 1, e->f_14, e->f_18, e->f_1C, e->f_20);
    }
    for (i = 0; i < n; i++) {
        h = 0.5f;
        t = buf[i];
        if (t->cb->fn != 0) {
            if (t->flags & 0x200) {
                func_083C10(t, vec, 0, 0);
                cb = t->cb;
                if (cb->fn == 0) {
                    res = -1;
                } else {
                    g = &D_002326D8;
                    s = &g->entry239;
                    if (s->kind < 0) {
                        f = s->damage;
                    } else if (s->kind < 2) {
                        f = s->damage;
                    } else if (s->kind == 2) {
                        f = s->damage * h;
                    } else {
                        f = s->damage;
                    }
                    res = cb->fn(t, s->element, f, s->hitClass, 0, 0, o);
                }
                func_015C80(*o->req, 0xF, t, res);
                func_0F6E68(0x23, vec);
            }
        }
    }
}
