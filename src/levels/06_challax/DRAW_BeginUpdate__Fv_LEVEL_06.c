/* LEVEL_06:0x0919A0 -- placement copy of LEVEL_01_098C90.c: swaps the double buffer of each display list context and resets its node pool. */
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

extern Ctx D_00287C78[];
extern int *D_00289388[1];
extern int *D_00289390[1];
extern int *D_00289398[1];
extern unsigned int D_002893A8[1];
extern int D_002893C0[1];
extern char *D_002893C8[1];
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
        D_00287C78[i].toggle ^= 1;
        D_00289398[i] = D_00287C78[i].end - 5;
        D_00289388[i] = D_00287C78[i].buf[D_00287C78[i].toggle];
        D_00289390[i] = D_00287C78[i].cur;
        D_00287C78[i].f2C = 0;
        D_002893A8[i] = 0xFFFFFFFFu;
        D_002893C0[i] = 0x800;
        D_00287C78[i].fC40 = 0;
        D_002893C8[i] = D_00287C78[i].tail;
        InitNodes(&D_00287C78[i].head, D_00287C78[i].nodes);
        table = D_00287C78[i].table;
        memset(table, 0, 0x100);
    }
}
