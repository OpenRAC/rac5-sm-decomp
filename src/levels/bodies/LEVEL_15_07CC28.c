/* LEVEL_15:0x07CC28 -- placement copy of LEVEL_01_098C90.c: swaps the double buffer of each display list context and resets its node pool. */
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

extern Ctx D_001B2F38[];
extern int *D_001B4648[1];
extern int *D_001B4650[1];
extern int *D_001B4658[1];
extern unsigned int D_001B4668[1];
extern int D_001B4680[1];
extern char *D_001B4688[1];
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

void func_07CC28(void)
{
    unsigned int i;
    char *table;

    for (i = 0; i < 1; i++) {
        D_001B2F38[i].toggle ^= 1;
        D_001B4658[i] = D_001B2F38[i].end - 5;
        D_001B4648[i] = D_001B2F38[i].buf[D_001B2F38[i].toggle];
        D_001B4650[i] = D_001B2F38[i].cur;
        D_001B2F38[i].f2C = 0;
        D_001B4668[i] = 0xFFFFFFFFu;
        D_001B4680[i] = 0x800;
        D_001B2F38[i].fC40 = 0;
        D_001B4688[i] = D_001B2F38[i].tail;
        InitNodes(&D_001B2F38[i].head, D_001B2F38[i].nodes);
        table = D_001B2F38[i].table;
        memset(table, 0, 0x100);
    }
}
