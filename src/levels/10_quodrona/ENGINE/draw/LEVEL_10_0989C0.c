/* LEVEL_10:0x0989C0 -- placement copy of LEVEL_01_0984F8.c: allocates the two display buffers and the list of every context, resets its node pool and marks it ready. */
typedef struct Node {
    struct Node *next;
    int a;
    int b;
} Node;

typedef struct Ctx {
    char *buf0[2];
    int size0;
    char *buf1[2];
    int size1;
    int w18;
    int w1C;
    int w20;
    unsigned int toggle;
    char *list;
    int f2C;
    int count2;
    char pad34[0x76 - 0x34];
    unsigned char ready;
    char pad77[0xC44 - 0x77];
    Node nodes[32];
    Node *head;
    char table[0x100];
    char tail[0x844];
} Ctx;

extern Ctx D_002A42F8[];
extern char *D_002A5A20[];
extern char D_00219948[];
extern void *memset(void *dst, int value, unsigned int size);
extern void func_10D878(unsigned int value, long long a, long long b, long long c);
extern char *func_10D908(int a, int size, int b, char *file, int line);
extern void func_098BA0(void);
extern void func_098908(void);

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

void func_0989C0(void)
{
    unsigned int i;
    char *table;

    for (i = 0; i < 1; i++) {
        if (D_002A42F8[i].size0 > 0) {
            D_002A42F8[i].buf0[0] = ((char *(*)(int, int, char *, int))func_10D878)(D_002A42F8[i].size0 << 1, 0x11, D_00219948, 0x416);
            D_002A42F8[i].buf0[1] = D_002A42F8[i].buf0[0] + D_002A42F8[i].size0;
            D_002A42F8[i].toggle = 0;
            D_002A42F8[i].buf1[0] = ((char *(*)(int, int, char *, int))func_10D878)(D_002A42F8[i].size1 << 1, 0x11, D_00219948, 0x41A);
            D_002A42F8[i].buf1[1] = D_002A42F8[i].buf1[0] + D_002A42F8[i].size1;
            D_002A42F8[i].w20 = 0;
            D_002A42F8[i].list = func_10D908(0x10, D_002A42F8[i].count2 * 0x14, 0, D_00219948, 0x41E);
            D_002A5A20[i] = D_002A42F8[i].list + D_002A42F8[i].count2 * 0x14;
            InitNodes(&D_002A42F8[i].head, D_002A42F8[i].nodes);
            table = D_002A42F8[i].table;
            memset(table, 0, 0x100);
        }
        D_002A42F8[i].ready = 1;
    }
    func_098BA0();
    func_098908();
}
