/* LEVEL_18:0x089158 -- placement copy of LEVEL_16_089810.c: swaps the double buffer of each of the two display list contexts and resets its node pool. */
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

extern Ctx D_002516B8[];
extern int *D_002544D0[2];
extern int *D_002544D8[2];
extern int *D_002544E0[2];
extern unsigned int D_002544F0[2];
extern int D_00254508[2];
extern char *D_00254510[2];
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

void func_089158(void)
{
    unsigned int i;
    char *table;

    for (i = 0; i < 2; i++) {
        D_002516B8[i].toggle ^= 1;
        D_002544E0[i] = D_002516B8[i].end - 5;
        D_002544D0[i] = D_002516B8[i].buf[D_002516B8[i].toggle];
        D_002544D8[i] = D_002516B8[i].cur;
        D_002516B8[i].f2C = 0;
        D_002544F0[i] = 0xFFFFFFFFu;
        D_00254508[i] = 0x800;
        D_002516B8[i].fC40 = 0;
        D_00254510[i] = D_002516B8[i].tail;
        InitNodes(&D_002516B8[i].head, D_002516B8[i].nodes);
        table = D_002516B8[i].table;
        memset(table, 0, 0x100);
    }
}
