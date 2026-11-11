/* LEVEL_03:0x09F508 -- placement copy of LEVEL_01_09F780.c: resets a fixed-size node pool and rebuilds its free list. */
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
extern Pool D_002B74D0;
extern void func_09F8F8(void *n);

void func_09F508(void)
{
    Node *p;
    Node *last;
    Node *end;
    Node *next;
    Node *q;
    Node *end2;
    while (D_002B74D0.head.next != &D_002B74D0.head)
        func_09F8F8(D_002B74D0.head.next);
    p = D_002B74D0.nodes;
    end = D_002B74D0.nodes + D_002B74D0.count;
    last = end - 1;
    while (p != last) {
        next = p + 1;
        p->next = next;
        p = next;
    }
    p->next = 0;
    D_002B74D0.free = D_002B74D0.nodes;
    q = D_002B74D0.nodes;
    end2 = D_002B74D0.nodes + D_002B74D0.count;
    while (q != end2) {
        q->field10 = 0;
        q++;
    }
}
