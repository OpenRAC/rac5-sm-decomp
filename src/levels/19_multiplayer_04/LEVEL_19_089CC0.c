/* LEVEL_19:0x089CC0 -- placement copy of LEVEL_16_089810.c: swaps the double buffer of each of the two display list contexts and resets its node pool. */
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

extern Ctx D_002514B8[];
extern int *D_002542D0[2];
extern int *D_002542D8[2];
extern int *D_002542E0[2];
extern unsigned int D_002542F0[2];
extern int D_00254308[2];
extern char *D_00254310[2];
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

void func_089CC0(void)
{
    unsigned int i;
    char *table;

    for (i = 0; i < 2; i++) {
        D_002514B8[i].toggle ^= 1;
        D_002542E0[i] = D_002514B8[i].end - 5;
        D_002542D0[i] = D_002514B8[i].buf[D_002514B8[i].toggle];
        D_002542D8[i] = D_002514B8[i].cur;
        D_002514B8[i].f2C = 0;
        D_002542F0[i] = 0xFFFFFFFFu;
        D_00254308[i] = 0x800;
        D_002514B8[i].fC40 = 0;
        D_00254310[i] = D_002514B8[i].tail;
        InitNodes(&D_002514B8[i].head, D_002514B8[i].nodes);
        table = D_002514B8[i].table;
        memset(table, 0, 0x100);
    }
}
