/* LEVEL_04:0x0A4998 -- placement copy of LEVEL_01_09F780.c: resets a fixed-size node pool and rebuilds its free list. */
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
extern Pool D_002B6E50;
extern void func_0A4D88(void *n);

void func_0A4998(void)
{
    Node *p;
    Node *last;
    Node *end;
    Node *next;
    Node *q;
    Node *end2;
    while (D_002B6E50.head.next != &D_002B6E50.head)
        func_0A4D88(D_002B6E50.head.next);
    p = D_002B6E50.nodes;
    end = D_002B6E50.nodes + D_002B6E50.count;
    last = end - 1;
    while (p != last) {
        next = p + 1;
        p->next = next;
        p = next;
    }
    p->next = 0;
    D_002B6E50.free = D_002B6E50.nodes;
    q = D_002B6E50.nodes;
    end2 = D_002B6E50.nodes + D_002B6E50.count;
    while (q != end2) {
        q->field10 = 0;
        q++;
    }
}
