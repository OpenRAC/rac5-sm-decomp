/* LEVEL_09:0x09CA38 -- placement copy of LEVEL_01_09F780.c: resets a fixed-size node pool and rebuilds its free list. */
typedef struct Node { struct Node *next; int pad0[3]; int field10; int pad1[2]; } Node;
typedef struct Link { struct Link *prev; struct Link *next; } Link;
typedef struct Pool {
    int pad0;
    Node *free;
    Node *nodes;
    int count;
    int pad1[3];
    Link head;
} Pool;
extern Pool D_00283DD0;
extern void func_09CE28(void *n);

void func_09CA38(void)
{
    Node *p;
    Node *last;
    Node *end;
    Node *next;
    Node *q;
    Node *end2;
    while (D_00283DD0.head.next != &D_00283DD0.head)
        func_09CE28(D_00283DD0.head.next);
    p = D_00283DD0.nodes;
    end = D_00283DD0.nodes + D_00283DD0.count;
    last = end - 1;
    while (p != last) {
        next = p + 1;
        p->next = next;
        p = next;
    }
    p->next = 0;
    D_00283DD0.free = D_00283DD0.nodes;
    q = D_00283DD0.nodes;
    end2 = D_00283DD0.nodes + D_00283DD0.count;
    while (q != end2) {
        q->field10 = 0;
        q++;
    }
}
