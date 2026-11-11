/* LEVEL_05:0x094F28 -- placement copy of LEVEL_01_0978C8.c: walks the active node table and fires each node's callback on its list entries. */
struct L {
    int pad0;
    struct L *next;
    int pad8;
    struct L *prev;
};
struct Node {
    unsigned int w;
    int pad4[2];
    void (*fn)(struct L *l);
    struct L head;
    char pad20[8];
};
extern char D_0028418C[];
extern char D_001E57E4;
extern void func_0944B8(struct Node *n, struct L *l);

void func_094F28(int lo, int hi)
{
    unsigned short *p;
    unsigned short *end;
    char *g = D_0028418C;
    D_001E57E4 = 1;
    p = (unsigned short *)(g + 0x2A04);
    end = p + *(int *)(g + 0x2C04);
    for (; p != end; p++) {
        struct Node *n = (struct Node *)(g + *p * 0x28);
        struct L *l = &n->head;
        int type;
        int c1;
        int c2;
        if (l->next == l && l->prev == l) {
            continue;
        }
        type = n->w >> 27;
        c1 = type < lo;
        c2 = hi < type;
        if (c2 | c1) {
            continue;
        }
        {
            void (*fn)(struct L *) = n->fn;
            struct L *stop = l;
            do {
                struct L *next = l->prev;
                if (l->next != l) {
                    fn(l);
                    func_0944B8(n, l);
                }
                l = next;
            } while (l != stop);
        }
    }
}
