/* LEVEL_20:0x076FB0 -- placement copy of LEVEL_16_089810.c: swaps the double buffer of each of the two display list contexts and resets its node pool. */
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

extern Ctx D_00174B78[];
extern int *D_00177990[2];
extern int *D_00177998[2];
extern int *D_001779A0[2];
extern unsigned int D_001779B0[2];
extern int D_001779C8[2];
extern char *D_001779D0[2];
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

void func_076FB0(void)
{
    unsigned int i;
    char *table;

    for (i = 0; i < 2; i++) {
        D_00174B78[i].toggle ^= 1;
        D_001779A0[i] = D_00174B78[i].end - 5;
        D_00177990[i] = D_00174B78[i].buf[D_00174B78[i].toggle];
        D_00177998[i] = D_00174B78[i].cur;
        D_00174B78[i].f2C = 0;
        D_001779B0[i] = 0xFFFFFFFFu;
        D_001779C8[i] = 0x800;
        D_00174B78[i].fC40 = 0;
        D_001779D0[i] = D_00174B78[i].tail;
        InitNodes(&D_00174B78[i].head, D_00174B78[i].nodes);
        table = D_00174B78[i].table;
        memset(table, 0, 0x100);
    }
}
