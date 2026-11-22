/* LEVEL_17:0x08A250 -- placement copy of LEVEL_16_089810.c: swaps the double buffer of each of the two display list contexts and resets its node pool. */
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

extern Ctx D_00242638[];
extern int *D_00245450[2];
extern int *D_00245458[2];
extern int *D_00245460[2];
extern unsigned int D_00245470[2];
extern int D_00245488[2];
extern char *D_00245490[2];
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

void func_08A250(void)
{
    unsigned int i;
    char *table;

    for (i = 0; i < 2; i++) {
        D_00242638[i].toggle ^= 1;
        D_00245460[i] = D_00242638[i].end - 5;
        D_00245450[i] = D_00242638[i].buf[D_00242638[i].toggle];
        D_00245458[i] = D_00242638[i].cur;
        D_00242638[i].f2C = 0;
        D_00245470[i] = 0xFFFFFFFFu;
        D_00245488[i] = 0x800;
        D_00242638[i].fC40 = 0;
        D_00245490[i] = D_00242638[i].tail;
        InitNodes(&D_00242638[i].head, D_00242638[i].nodes);
        table = D_00242638[i].table;
        memset(table, 0, 0x100);
    }
}
