/* USA LEVEL_01:192560, 216-byte candidate; measured 26 November 2026.
 * Profile pinned, assembler gnu-ee-trial; options: default.
 * Compiled 216 bytes: 13 differing words; first difference +0x4. No matching credit.
 * Remaining issue: from 18 words: computing n = &r->node before the linked test gives the retail
 * beqz with the node address in its delay slot; left: global-alloc order (retail node v1 / prev
 * a1 / object t1, mine prev v1 / node a1 / object v1: prev priority 3/4 beats node 8/12)
 * Reopen with new caller/type evidence or a source hypothesis that resolves the recorded
 * difference without changing accepted callers.
 */

/* LEVEL_01:0x192560 -- when the record is linked, unlinks its node; otherwise, if the object is idle and its target has a handler in its class, calls it with the global scale (halved in mode 2). */
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
    Node *n;

    r = o->rec;
    n = &r->node;
    if (r->w24 != 0) {
        unlinkNode(n);
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
