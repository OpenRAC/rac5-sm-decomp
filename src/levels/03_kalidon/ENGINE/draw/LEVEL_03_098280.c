/* LEVEL_03:0x098280 -- placement copy of LEVEL_01_0984F8.c: allocates the two display buffers and the list of every context, resets its node pool and marks it ready. */
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

extern Ctx D_002B5D78[];
extern char *D_002B74A0[];
extern char D_002298C8[];
extern void *memset(void *dst, int value, unsigned int size);
extern void func_10D328(unsigned int value, long long a, long long b, long long c);
extern char *func_10D3B8(int a, int size, int b, char *file, int line);
extern void func_098460(void);
extern void func_0981C8(void);

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

void func_098280(void)
{
    unsigned int i;
    char *table;

    for (i = 0; i < 1; i++) {
        if (D_002B5D78[i].size0 > 0) {
            D_002B5D78[i].buf0[0] = ((char *(*)(int, int, char *, int))func_10D328)(D_002B5D78[i].size0 << 1, 0x11, D_002298C8, 0x416);
            D_002B5D78[i].buf0[1] = D_002B5D78[i].buf0[0] + D_002B5D78[i].size0;
            D_002B5D78[i].toggle = 0;
            D_002B5D78[i].buf1[0] = ((char *(*)(int, int, char *, int))func_10D328)(D_002B5D78[i].size1 << 1, 0x11, D_002298C8, 0x41A);
            D_002B5D78[i].buf1[1] = D_002B5D78[i].buf1[0] + D_002B5D78[i].size1;
            D_002B5D78[i].w20 = 0;
            D_002B5D78[i].list = func_10D3B8(0x10, D_002B5D78[i].count2 * 0x14, 0, D_002298C8, 0x41E);
            D_002B74A0[i] = D_002B5D78[i].list + D_002B5D78[i].count2 * 0x14;
            InitNodes(&D_002B5D78[i].head, D_002B5D78[i].nodes);
            table = D_002B5D78[i].table;
            memset(table, 0, 0x100);
        }
        D_002B5D78[i].ready = 1;
    }
    func_098460();
    func_0981C8();
}
