/* LEVEL_22:0x08DE30 -- placement copy of LEVEL_01_09F780.c: resets a fixed-size node pool and rebuilds its free list. */
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
extern Pool D_001F2210;
extern void func_08E1F0(void *n);

void func_08DE30(void)
{
    Node *p;
    Node *last;
    Node *end;
    Node *next;
    Node *q;
    Node *end2;
    while (D_001F2210.head.next != &D_001F2210.head)
        func_08E1F0(D_001F2210.head.next);
    p = D_001F2210.nodes;
    end = D_001F2210.nodes + D_001F2210.count;
    last = end - 1;
    while (p != last) {
        next = p + 1;
        p->next = next;
        p = next;
    }
    p->next = 0;
    D_001F2210.free = D_001F2210.nodes;
    q = D_001F2210.nodes;
    end2 = D_001F2210.nodes + D_001F2210.count;
    while (q != end2) {
        q->field10 = 0;
        q++;
    }
}
