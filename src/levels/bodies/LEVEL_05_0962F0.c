/* LEVEL_05:0x0962F0 -- placement copy of LEVEL_01_098C90.c: swaps the double buffer of each display list context and resets its node pool. */
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

extern Ctx D_00286DB8[];
extern int *D_002884C8[1];
extern int *D_002884D0[1];
extern int *D_002884D8[1];
extern unsigned int D_002884E8[1];
extern int D_00288500[1];
extern char *D_00288508[1];
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

void func_0962F0(void)
{
    unsigned int i;
    char *table;

    for (i = 0; i < 1; i++) {
        D_00286DB8[i].toggle ^= 1;
        D_002884D8[i] = D_00286DB8[i].end - 5;
        D_002884C8[i] = D_00286DB8[i].buf[D_00286DB8[i].toggle];
        D_002884D0[i] = D_00286DB8[i].cur;
        D_00286DB8[i].f2C = 0;
        D_002884E8[i] = 0xFFFFFFFFu;
        D_00288500[i] = 0x800;
        D_00286DB8[i].fC40 = 0;
        D_00288508[i] = D_00286DB8[i].tail;
        InitNodes(&D_00286DB8[i].head, D_00286DB8[i].nodes);
        table = D_00286DB8[i].table;
        memset(table, 0, 0x100);
    }
}
