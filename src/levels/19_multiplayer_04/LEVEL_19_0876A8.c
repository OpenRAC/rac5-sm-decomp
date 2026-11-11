/* LEVEL_19:0x0876A8 -- placement copy of LEVEL_01_096610.c: resets the list pool entries and rebuilds the free item chain. */
typedef struct Node { struct Node *n0; struct Node *n4; struct Node *n8; struct Node *nC; } Node;
typedef struct Ent { int pad[4]; Node head; int pad2[2]; } Ent;
typedef struct Pool { Ent e[256]; int count; } Pool;
typedef struct Item { int a; struct Item *next; int c; int d; } Item;
typedef struct Mgr { Item *f0; Item *f4; int f8; char fC[0x14]; char f20[1]; } Mgr;
extern Pool D_0024E88C;
extern Mgr D_0024E850;
extern void func_088FD8(void *p);
extern void func_089038(void *p);
void func_0876A8(void)
{
    Pool *pl = &D_0024E88C;
    Ent *e;
    Ent *end;
    Item *p;
    Item *last;
    e = pl->e;
    end = e + pl->count;
    for (; e != end; e++) {
        Node *n = e->head.nC;
        while (n != &e->head) {
            Node *next = n->nC;
            n->n8 = n;
            n->nC = n;
            n->n4 = n;
            n->n0 = n;
            n = next;
        }
        e->head.n8 = &e->head;
        e->head.nC = &e->head;
        e->head.n4 = &e->head;
        e->head.n0 = &e->head;
    }
    p = D_0024E850.f4;
    last = p + D_0024E850.f8 - 1;
    for (; p != last; p++)
        p->next = p + 1;
    p->next = 0;
    D_0024E850.f0 = D_0024E850.f4;
    func_088FD8(D_0024E850.fC);
    func_089038(D_0024E850.f20);
}
