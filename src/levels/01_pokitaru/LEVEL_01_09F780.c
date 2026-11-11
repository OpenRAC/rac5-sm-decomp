/* LEVEL_01:0x09F780 -- resets a fixed-size node pool and rebuilds its free list. */
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
extern Pool D_0029C650;
extern void func_09FB70(void *n);

void func_09F780(void)
{
    Node *p;
    Node *last;
    Node *end;
    Node *next;
    Node *q;
    Node *end2;
    while (D_0029C650.head.next != &D_0029C650.head)
        func_09FB70(D_0029C650.head.next);
    p = D_0029C650.nodes;
    end = D_0029C650.nodes + D_0029C650.count;
    last = end - 1;
    while (p != last) {
        next = p + 1;
        p->next = next;
        p = next;
    }
    p->next = 0;
    D_0029C650.free = D_0029C650.nodes;
    q = D_0029C650.nodes;
    end2 = D_0029C650.nodes + D_0029C650.count;
    while (q != end2) {
        q->field10 = 0;
        q++;
    }
}
