/* LEVEL_21:0x0800F0 -- placement copy of LEVEL_01_09F780.c: resets a fixed-size node pool and rebuilds its free list. */
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
extern Pool D_001B4690;
extern void func_0804B0(void *n);

void func_0800F0(void)
{
    Node *p;
    Node *last;
    Node *end;
    Node *next;
    Node *q;
    Node *end2;
    while (D_001B4690.head.next != &D_001B4690.head)
        func_0804B0(D_001B4690.head.next);
    p = D_001B4690.nodes;
    end = D_001B4690.nodes + D_001B4690.count;
    last = end - 1;
    while (p != last) {
        next = p + 1;
        p->next = next;
        p = next;
    }
    p->next = 0;
    D_001B4690.free = D_001B4690.nodes;
    q = D_001B4690.nodes;
    end2 = D_001B4690.nodes + D_001B4690.count;
    while (q != end2) {
        q->field10 = 0;
        q++;
    }
}
