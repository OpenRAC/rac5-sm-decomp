/* LEVEL_01:0x138990 -- per-frame check of the object's two linked bodies: drops a stale link, and when both are in state 1 asks the link body's owner handler (virtual call with the shared table entry, its float halved in table mode 2) whether it is done, starting the follow-up with func_07C670 when it answers 3 or when a link is missing. */
struct Owner;

struct Body {
    char pad0[0x40];
    struct Owner *f40;
    char pad44[0x20];
    unsigned int f64;
};

struct Obj;

struct Owner {
    char pad0[0x20];
    int (*fn20)(struct Body *a0, int a1, int a2, float *a3, char *t0, struct Obj *t1, float f12);
};

struct DamageInfo {
    int kind;
    float damage;
    int element;
    int hitClass;
};

struct State {
    char pad0[4];
    struct Body *l4;
    struct Body *l8;
};

struct Obj {
    char pad0[0x30];
    float pos[3];
    char pad3C[0x1C];
    struct State *f58;
};

/* The attack damage table: 259 entries of 16 bytes (kind, damage, element, hit class). */
extern struct DamageInfo D_00218D58[];

static __inline__ struct DamageInfo *Pick(struct DamageInfo *base)
{
    return base + 19;
}
extern void func_07C670(struct Obj *o, int a1);

void func_138990(struct Obj *o)
{
    struct State *s = o->f58;
    struct Body *l;
    struct DamageInfo *e;
    float f;
    int r;

    if (s->l4 == 0)
        goto call;
    if ((s->l4->f64 & 0xF) != 1)
        s->l4 = 0;
    l = s->l4;
    if (l == 0 || s->l8 == 0 || (s->l8->f64 & 0xF) != 1) {
call:
        func_07C670(o, 1);
    } else {
        char *sub = (char *)s + 0xC;
        struct Owner *w = l->f40;
        float *pos = o->pos;

        if (w->fn20 == 0) {
            r = -1;
        } else {
            e = Pick(D_00218D58);
            switch (e->kind) {
            case 0:
            case 1:
                f = e->damage;
                break;
            case 2:
                f = e->damage * 0.5f;
                break;
            default:
                f = e->damage;
                break;
            }
            r = w->fn20(l, e->element, e->hitClass, pos, sub, o, f);
        }
        if (r == 3)
            func_07C670(o, 1);
    }
}
