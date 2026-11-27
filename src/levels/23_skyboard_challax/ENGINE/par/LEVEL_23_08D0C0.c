/* LEVEL_23:0x08D0C0 -- placement copy of LEVEL_01_097738.c: when any of three pending lists is non-empty, allocates an entry and links its record into two lists. */
struct Item;
struct Node {
    void *l0;
    struct Item *l4;
    struct Node *l8;
    struct Node *lc;
    short id;
    unsigned char t;
    unsigned char z;
    char pad_14[0xC];
};
struct Item {
    struct Item *l0;
    struct Item *l4;
    struct Node *rec;
    short s0c;
    short s0e;
};
struct LH {
    struct LH *prev;
    struct LH *next;
};
#define LhB ((struct LH *)((char *)D_0026970C - 0x18))
#define LhA ((struct LH *)((char *)D_0026970C - 0x2C))
struct Head {
    char pad_00[8];
    struct Node *first;
};
struct Slot {
    char pad_00[0x10];
    struct Head head;
    char pad_1c[0x28 - 0x1C];
};

extern char D_002696F0[];
extern struct Slot D_0026970C[];

extern struct Item *func_08DC28(char *pool);

static __inline__ unsigned char OtherPending(void)
{
    return *(struct LH **)((char *)D_0026970C - 0x28) != LhA || *(int *)((char *)D_0026970C - 0x3C) != 0;
}

static __inline__ int AnyPending(void)
{
    int r = 0;

    if (*(struct LH **)((char *)D_0026970C - 0x14) != LhB || OtherPending()) {
        r = 1;
    }
    return r;
}

struct Node *func_08D0C0(int idx)
{
    struct Slot *slot;
    struct Item *n;
    struct Node *b;
    struct Head *h;

    slot = &D_0026970C[idx];
    if ((AnyPending() & 0xFF) == 0) {
        return 0;
    }
    n = func_08DC28(D_002696F0);
    b = n->rec;
    n->s0e = 1;
    h = &slot->head;
    n->s0c = 0;
    n->rec = b + 1;
    b->l4 = (struct Item *)b;
    b->t = 0x82;
    b->l8 = b;
    b->lc = b;
    b->id = idx;
    b->l0 = b;
    b->z = 0;
    n->l0 = (struct Item *)b;
    n->l4 = b->l4;
    b->l4->l0 = n;
    b->l4 = n;
    b->lc = (struct Node *)h;
    b->l8 = h->first;
    h->first->lc = b;
    h->first = b;
    return b + 1;
}
