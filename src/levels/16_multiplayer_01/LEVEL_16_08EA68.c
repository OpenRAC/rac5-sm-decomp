/* LEVEL_16:0x08EA68 -- placement copy of LEVEL_01_09F780.c: resets a fixed-size node pool and rebuilds its free list. */
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
extern Pool D_00254198;
extern void func_08EE28(void *n);

void func_08EA68(void)
{
    Node *p;
    Node *last;
    Node *end;
    Node *next;
    Node *q;
    Node *end2;
    while (D_00254198.head.next != &D_00254198.head)
        func_08EE28(D_00254198.head.next);
    p = D_00254198.nodes;
    end = D_00254198.nodes + D_00254198.count;
    last = end - 1;
    while (p != last) {
        next = p + 1;
        p->next = next;
        p = next;
    }
    p->next = 0;
    D_00254198.free = D_00254198.nodes;
    q = D_00254198.nodes;
    end2 = D_00254198.nodes + D_00254198.count;
    while (q != end2) {
        q->field10 = 0;
        q++;
    }
}
