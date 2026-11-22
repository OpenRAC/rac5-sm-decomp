/* LEVEL_02:0x1B5B20 -- releases the owner's slot: clears its entry, frees its pool record, unlinks its node and notifies. */
typedef struct Elem {
    char pad0[0x18];
    unsigned char flags;
    char pad1[0x1C - 0x19];
} Elem;

typedef struct Pool {
    char pad0[0x58];
    Elem *elems;
} Pool;

typedef struct PRec {
    void *owner;
    int f4;
    char pad0[0x14 - 8];
    unsigned char f14;
    char pad1;
    unsigned char f16;
    char pad2[0x18 - 0x17];
} PRec;

typedef struct Group {
    char pad0[0x54];
    PRec *recs;
} Group;

typedef struct Rec {
    char pad0[0x4C];
    Pool *pool;
    char pad1[0x64 - 0x50];
    Group *group;
    char pad2[0x68 - 0x68];
    unsigned char idx;
} Rec;

typedef struct Node {
    struct Node *next;
    char pad[0x14 - 4];
    struct Node *prev;
} Node;

typedef struct Obj {
    char pad0[0x54];
    Rec *rec;
    Node *node;
} Obj;

extern void *memset(void *p, int c, unsigned int n);
extern void func_167A78(Group *g, unsigned char i);
extern void func_019FB8(Obj *o);

void func_1B5B20(Obj *o)
{
    Rec *r;
    Elem *e;
    PRec *p;
    Group *g;
    Node *n;
    unsigned int i;

    r = o->rec;
    e = &r->pool->elems[r->idx];
    if (e->flags & 1) {
        *((unsigned char *)r->pool->elems + 0x158) = *((unsigned char *)r->pool->elems + 0x158) - 1;
    }
    memset(e, 0, 0x1C);
    g = r->group;
    p = g->recs;
    i = 0;
    do {
        if (p->owner == o) {
            func_167A78(g, i);
            p->f4 = 0;
            p->owner = 0;
            p->f14 = 0;
            p->f16 = 0xFF;
            break;
        }
        i++;
        p++;
    } while (i < 8);
    n = o->node;
    if (n->prev != 0) {
        n->prev->next = n->next;
        if (n->next != 0) {
            n->next->prev = n->prev;
        }
        n->prev = 0;
    }
    func_019FB8(o);
}
