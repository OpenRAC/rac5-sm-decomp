/* LEVEL_15:0x13B1A8 -- placement copy of LEVEL_08_20F788.c: initializes an object's two slots, linking each slot's node into a circular list. */
typedef struct List {
    struct Node *next;
    struct Node *prev;
} List;
typedef struct Node {
    struct Node *next;
    struct Node *prev;
    char *buf;
    void *owner;
    List *head;
    int w14;
} Node;
typedef struct {
    int *q;
    char pad4[0xC];
    Node *link;
    char pad14[0x10];
    unsigned char b24;
    char pad25[3];
} Slot;
typedef struct {
    int *w0;
    char pad4[0x58];
    Slot slot[2];
    int q[2];
    int src;
    int wB8;
    int wBC;
    int wC0;
    int wC4;
    int wC8;
    int wCC;
    char padD0[0xC];
    Node node[2];
    List head;
    int w114;
    char pad118[8];
    char buf[2][0xE00];
} Obj;
typedef struct {
    int w0;
    int w4;
} Src;
extern int func_06E290(Obj *a, Slot *s);

void func_13B1A8(Obj *o, Src *s)
{
    unsigned int i;
    Slot *p;
    int *q;
    Node *r;
    char *buf;
    List *head;
    List *hh;
    int v;
    Node *n;
    Node *last;

    o->w0 = (int *)((char *)o + 0x1D20);
    o->src = (int)s;
    o->wBC = 0;
    o->wC0 = 0;
    o->wC4 = 0;
    o->wC8 = 0;
    o->wCC = 0;
    o->w114 = 0;
    hh = &o->head;
    hh->prev = (Node *)hh;
    o->head.next = (Node *)hh;
    p = o->slot;
    r = o->node;
    q = o->q;
    buf = o->buf[0];
    v = s->w4;
    for (i = 0; i < 2; i++) {
        head = &o->head;
        p->q = q;
        *q = v;
        p->link = r;
        r->owner = p;
        q++;
        r++;
        p->link->head = head;
        p->link->buf = buf;
        p->b24 = 0;
        buf += 0xE00;
        n = p->link;
        last = head->prev;
        n->next = (Node *)head;
        n->prev = last;
        last->next = n;
        head->prev = n;
        func_06E290(0, p);
        p++;
    }
}
