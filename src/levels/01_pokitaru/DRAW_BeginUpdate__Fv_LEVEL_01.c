/* LEVEL_01:0x098C90 -- swaps the double buffer of each display list context and resets its node pool. */
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

extern Ctx D_0029AEF8[];
extern int *D_0029C608[1];
extern int *D_0029C610[1];
extern int *D_0029C618[1];
extern unsigned int D_0029C628[1];
extern int D_0029C640[1];
extern char *D_0029C648[1];
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
        D_0029AEF8[i].toggle ^= 1;
        D_0029C618[i] = D_0029AEF8[i].end - 5;
        D_0029C608[i] = D_0029AEF8[i].buf[D_0029AEF8[i].toggle];
        D_0029C610[i] = D_0029AEF8[i].cur;
        D_0029AEF8[i].f2C = 0;
        D_0029C628[i] = 0xFFFFFFFFu;
        D_0029C640[i] = 0x800;
        D_0029AEF8[i].fC40 = 0;
        D_0029C648[i] = D_0029AEF8[i].tail;
        InitNodes(&D_0029AEF8[i].head, D_0029AEF8[i].nodes);
        table = D_0029AEF8[i].table;
        memset(table, 0, 0x100);
    }
}
