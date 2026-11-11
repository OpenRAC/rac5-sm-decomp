/* LEVEL_08:0x0A0D30 -- placement copy of LEVEL_01_098C90.c: swaps the double buffer of each display list context and resets its node pool. */
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

extern Ctx D_002EA178[];
extern int *D_002EB888[1];
extern int *D_002EB890[1];
extern int *D_002EB898[1];
extern unsigned int D_002EB8A8[1];
extern int D_002EB8C0[1];
extern char *D_002EB8C8[1];
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

void func_0A0D30(void)
{
    unsigned int i;
    char *table;

    for (i = 0; i < 1; i++) {
        D_002EA178[i].toggle ^= 1;
        D_002EB898[i] = D_002EA178[i].end - 5;
        D_002EB888[i] = D_002EA178[i].buf[D_002EA178[i].toggle];
        D_002EB890[i] = D_002EA178[i].cur;
        D_002EA178[i].f2C = 0;
        D_002EB8A8[i] = 0xFFFFFFFFu;
        D_002EB8C0[i] = 0x800;
        D_002EA178[i].fC40 = 0;
        D_002EB8C8[i] = D_002EA178[i].tail;
        InitNodes(&D_002EA178[i].head, D_002EA178[i].nodes);
        table = D_002EA178[i].table;
        memset(table, 0, 0x100);
    }
}
