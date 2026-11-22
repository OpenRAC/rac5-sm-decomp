/* USA LEVEL_01.REL:0x192560, 216-byte candidate (21 November 2026).
 * Measured pinned: 18 differing words; first difference at 0x4.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct Class {
    char pad_00[0x20];
    void (*fn)(float scale, void *target, int a, int b, int c, int d);
} Class;

typedef struct Target {
    char pad_00[0x40];
    Class *cls;
} Target;

typedef struct Node {
    struct Node *next;
    char pad04[0x10];
    struct Node *prev;
} Node;

typedef struct Rec {
    int w00;
    Node node;
    char pad1C[0x24 - 0x1C];
    int w24;
    Target *target;
} Rec;

typedef struct Obj {
    char pad00[0x45];
    unsigned char b45;
    char pad46[0x12];
    Rec *rec;
} Obj;

typedef struct Sub {
    int mode;
    float scale;
    int b;
    int c;
} Sub;

typedef struct Cfg {
    char pad_00[0xFA0];
    Sub sub;
} Cfg;

extern Cfg D_00218D58;

static __inline__ int GetMode(Cfg *c)
{
    return c->sub.mode;
}

static __inline__ void unlinkNode(Node *n)
{
    if (n->prev != 0) {
        n->prev->next = n->next;
        if (n->next != 0) {
            n->next->prev = n->prev;
        }
        n->prev = 0;
    }
}

void func_192560(Obj *o)
{
    Rec *r;
    Target *t;
    Class *cls;
    Cfg *c;
    Sub *s;
    float f;

    r = o->rec;
    if (r->w24 != 0) {
        unlinkNode(&r->node);
        return;
    }
    t = r->target;
    if (t == 0) {
        return;
    }
    if (o->b45 != 0) {
        return;
    }
    cls = t->cls;
    if (cls->fn == 0) {
        return;
    }
    c = &D_00218D58;
    s = &c->sub;
    if (GetMode(c) >= 0 && GetMode(c) >= 2 && GetMode(c) == 2) {
        f = s->scale * 0.5f;
    } else {
        f = s->scale;
    }
    cls->fn(f, t, s->b, s->c, 0, 0);
}
