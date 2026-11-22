/* LEVEL_16:0x089810 -- swaps the double buffer of each of the two display list contexts and resets its node pool. */
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

extern Ctx D_00251338[];
extern int *D_00254150[2];
extern int *D_00254158[2];
extern int *D_00254160[2];
extern unsigned int D_00254170[2];
extern int D_00254188[2];
extern char *D_00254190[2];
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

void func_089810(void)
{
    unsigned int i;
    char *table;

    for (i = 0; i < 2; i++) {
        D_00251338[i].toggle ^= 1;
        D_00254160[i] = D_00251338[i].end - 5;
        D_00254150[i] = D_00251338[i].buf[D_00251338[i].toggle];
        D_00254158[i] = D_00251338[i].cur;
        D_00251338[i].f2C = 0;
        D_00254170[i] = 0xFFFFFFFFu;
        D_00254188[i] = 0x800;
        D_00251338[i].fC40 = 0;
        D_00254190[i] = D_00251338[i].tail;
        InitNodes(&D_00251338[i].head, D_00251338[i].nodes);
        table = D_00251338[i].table;
        memset(table, 0, 0x100);
    }
}
