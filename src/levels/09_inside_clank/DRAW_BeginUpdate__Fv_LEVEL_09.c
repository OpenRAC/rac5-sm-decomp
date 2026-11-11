/* LEVEL_09:0x095540 -- placement copy of LEVEL_01_098C90.c: swaps the double buffer of each display list context and resets its node pool. */
typedef struct Node {
    struct Node *next;
    int a;
    int b;
} Node;

typedef struct Ctx {
    int *buf[2];
    int *cur;
    char pad0C[0x18];
    unsigned int toggle;
    int *end;
    int f2C;
    char pad30[0xC10];
    int fC40;
    Node nodes[32];
    Node *head;
    char table[0x100];
    char tail[0x844];
} Ctx;

extern Ctx D_00282678[];
extern int *D_00283D88[1];
extern int *D_00283D90[1];
extern int *D_00283D98[1];
extern unsigned int D_00283DA8[1];
extern int D_00283DC0[1];
extern char *D_00283DC8[1];
extern void *memset(void *dst, int value, unsigned int size);

static __inline__ void InitNodes(Node **headp, Node *first)
{
    Node *n;
    Node *last;

    last = first + 31;
    n = first;
    while (n != last) {
        n->next = n + 1;
        n++;
    }
    first[31].next = 0;
    *headp = first;
}

void DRAW_BeginUpdate__Fv(void)
{
    unsigned int i;
    char *table;

    for (i = 0; i < 1; i++) {
        D_00282678[i].toggle ^= 1;
        D_00283D98[i] = D_00282678[i].end - 5;
        D_00283D88[i] = D_00282678[i].buf[D_00282678[i].toggle];
        D_00283D90[i] = D_00282678[i].cur;
        D_00282678[i].f2C = 0;
        D_00283DA8[i] = 0xFFFFFFFFu;
        D_00283DC0[i] = 0x800;
        D_00282678[i].fC40 = 0;
        D_00283DC8[i] = D_00282678[i].tail;
        InitNodes(&D_00282678[i].head, D_00282678[i].nodes);
        table = D_00282678[i].table;
        memset(table, 0, 0x100);
    }
}
