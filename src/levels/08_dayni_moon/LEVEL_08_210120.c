/* LEVEL_08:0x210120 -- finds or creates an instance for a table entry and links it into a list. */
typedef struct Node {
    struct Node *next;
    struct Node *prev;
} Node;
typedef struct { char pad0[8]; float f; char pad0C[0x28 - 12]; } Arr;
typedef struct { Node *n; int x; } E8;
typedef struct { char pad0[0xC]; E8 *list; } Tab;
typedef struct { char pad0[4]; float f4; } Inner;
typedef struct { char pad0[4]; Inner *p4; int i8; char pad0C[0x20 - 12]; } Q;
typedef struct { Q *base; } H;
typedef struct Obj {
    char pad0[8];
    float f8;
    char pad0C[0x5C - 12];
    Arr arr[2];
    char padAC[0xC0 - 0xAC];
    int c0;
    int c4;
    Tab *tab;
    Q *q;
    float fd0;
    Node link;
} Obj;
extern int func_2100F8(H *h, Obj **pp, Q *q, float f, float g);
extern Obj *func_20FEF8(E8 *e, float a, float b, float c, float d);
extern Obj *func_20F970(Tab *t, float a, float b);
extern void func_20F918(Obj *o);
extern void func_090DD0(Obj *o, Arr *a, int i, int j, int k, int l, int m, float f, float g);

int func_210120(H *h, Obj **pp, Q *q, float f, float g)
{
    Obj *cur;
    Obj *n;
    Tab *tab;
    E8 *slot;
    Node *v;
    Node *a;
    Node *l;
    int i;
    float p;
    float t;
    float u;

    cur = *pp;
    if (cur == 0) {
        return func_2100F8(h, pp, q, f, g);
    }
    tab = cur->tab;
    u = g * q->p4->f4;
    p = cur->arr[cur->c0].f;
    t = cur->f8;
    i = q - h->base + 1;
    slot = &tab->list[i];
    n = func_20FEF8(slot, p, t, f, u);
    if (n == 0) {
        if (cur->c4 == 1) {
            func_20F918(cur);
            cur = 0;
        }
        n = func_20F970(tab, p, t);
        if (n == 0) {
            return 0;
        }
        v = slot->n;
        l = &n->link;
        a = v->prev;
        l->next = v;
        l->prev = a;
        a->next = l;
        v->prev = l;
        n->c0 = n->c0 ^ 1;
        func_090DD0(n, &n->arr[n->c0], q->i8, 0, 1, 0, 0, 0.15f, f);
        n->q = q;
        n->f8 = t;
        n->fd0 = u;
    }
    n->c4 = n->c4 + 1;
    *pp = n;
    if (cur != 0) {
        func_20F918(cur);
    }
    return 1;
}
