/* LEVEL_15:0x07C490 -- placement copy of LEVEL_01_0984F8.c: allocates the two display buffers and the list of every context, resets its node pool and marks it ready. */
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

extern Ctx D_001B2F38[];
extern char *D_001B4660[];
extern char D_00165148[];
extern void *memset(void *dst, int value, unsigned int size);
extern void func_0D4EE0(unsigned int value, long long a, long long b, long long c);
extern char *func_0D4F30(int a, int size, int b, char *file, int line);
extern void func_07C670(void);
extern void func_07C3D8(void);

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

void func_07C490(void)
{
    unsigned int i;
    char *table;

    for (i = 0; i < 1; i++) {
        if (D_001B2F38[i].size0 > 0) {
            D_001B2F38[i].buf0[0] = ((char *(*)(int, int, char *, int))func_0D4EE0)(D_001B2F38[i].size0 << 1, 0x11, D_00165148, 0x416);
            D_001B2F38[i].buf0[1] = D_001B2F38[i].buf0[0] + D_001B2F38[i].size0;
            D_001B2F38[i].toggle = 0;
            D_001B2F38[i].buf1[0] = ((char *(*)(int, int, char *, int))func_0D4EE0)(D_001B2F38[i].size1 << 1, 0x11, D_00165148, 0x41A);
            D_001B2F38[i].buf1[1] = D_001B2F38[i].buf1[0] + D_001B2F38[i].size1;
            D_001B2F38[i].w20 = 0;
            D_001B2F38[i].list = func_0D4F30(0x10, D_001B2F38[i].count2 * 0x14, 0, D_00165148, 0x41E);
            D_001B4660[i] = D_001B2F38[i].list + D_001B2F38[i].count2 * 0x14;
            InitNodes(&D_001B2F38[i].head, D_001B2F38[i].nodes);
            table = D_001B2F38[i].table;
            memset(table, 0, 0x100);
        }
        D_001B2F38[i].ready = 1;
    }
    func_07C670();
    func_07C3D8();
}
