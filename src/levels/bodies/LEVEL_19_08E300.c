/* LEVEL_19:0x08E300 -- placement copy of LEVEL_01_09F780.c: resets a fixed-size node pool and rebuilds its free list. */
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
extern Pool D_00254318;
extern void func_08E6C0(void *n);

void func_08E300(void)
{
    Node *p;
    Node *last;
    Node *end;
    Node *next;
    Node *q;
    Node *end2;
    while (D_00254318.head.next != &D_00254318.head)
        func_08E6C0(D_00254318.head.next);
    p = D_00254318.nodes;
    end = D_00254318.nodes + D_00254318.count;
    last = end - 1;
    while (p != last) {
        next = p + 1;
        p->next = next;
        p = next;
    }
    p->next = 0;
    D_00254318.free = D_00254318.nodes;
    q = D_00254318.nodes;
    end2 = D_00254318.nodes + D_00254318.count;
    while (q != end2) {
        q->field10 = 0;
        q++;
    }
}
