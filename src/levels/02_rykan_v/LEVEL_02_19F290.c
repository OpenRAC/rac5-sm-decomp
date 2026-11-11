/* LEVEL_02:0x19F290 -- picks a usable target for an actor from the controller's slots or the global list and starts its approach. */
typedef struct Tgt {
    char pad0[0x3F];
    unsigned char kind;
    struct Tgt *link40;
    char pad44;
    unsigned char state;
    char pad46[0x3A];
} Tgt;

typedef struct Slotp {
    Tgt *t;
    char pad[0x18];
} Slotp;

typedef struct Owner {
    char pad0[0x54];
    Slotp *slots;
} Owner;

typedef struct Ctl {
    char pad0[4];
    void *cur;
    char pad8[8];
    Owner *owner;
} Ctl;

typedef struct Actor {
    char pad0[0x45];
    unsigned char mode;
    char pad46[0xE];
    Ctl *ctl;
    char pad58[0x18];
    int f70;
} Actor;

typedef struct Fx {
    char pad0[0x14];
    float a, b, c, d;
} Fx;

typedef struct Node {
    char pad0[0x40];
    Tgt *link;
    char pad44[0x3C];
} Node;

typedef struct NodeSet {
    char pad0[0x44];
    Node *nodes;
    unsigned count;
} NodeSet;

extern Tgt *D_0024CBEC;
extern Fx *D_0021D5C4;
extern NodeSet *D_0021BD50;

extern int func_19F610(Actor *a, void *t);
extern void func_0872A0(Actor *a, Fx *fx, int a2, int a3, int a4, int a5, int a6, int a7, float f0, float f1, float f2, float f3);

void func_19F290(Actor *o)
{
    Ctl *c;
    Tgt *t;
    unsigned i;
    unsigned j;
    Node *n;

    c = o->ctl;
    if (c->owner) {
        t = D_0024CBEC;
        if (func_19F610(o, t)) {
            c->cur = t;
            o->mode = 1;
            o->f70 = 0;
            if (D_0021D5C4)
                func_0872A0(o, D_0021D5C4, 0, 0, 0, 0, 0, 1, D_0021D5C4->a, D_0021D5C4->b, D_0021D5C4->c, D_0021D5C4->d);
            return;
        }
        for (i = 0; i < 8; i++) {
            Slotp *sq = &c->owner->slots[(unsigned char)i];
            t = sq->t;
            if (t && t->state && t->state != 0x14) {
                if (func_19F610(o, t)) {
                    c->cur = t;
                    o->mode = 1;
                    o->f70 = 0;
                    if (D_0021D5C4)
                        func_0872A0(o, D_0021D5C4, 0, 0, 0, 0, 0, 1, D_0021D5C4->a, D_0021D5C4->b, D_0021D5C4->c, D_0021D5C4->d);
                    return;
                }
            }
        }
    } else {
        for (j = 0; j < D_0021BD50->count; j++) {
            n = &D_0021BD50->nodes[j];
            if (n->link && (n->link->kind == 2 || n->link->kind == 3)) {
                if (func_19F610(o, n)) {
                    c->cur = n;
                    o->mode = 1;
                    o->f70 = 0;
                    return;
                }
            }
        }
    }
}
