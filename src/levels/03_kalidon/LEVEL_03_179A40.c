/* LEVEL_03:0x179A40 -- finds a keyed record in a global list, then runs a helper on each flagged 0x80-byte sub-record it owns. */
struct Rec44 {
    char pad_00[0xC];
    char *subs;
    char pad_10[0x14];
    int key;
    char pad_28[8];
    unsigned int count;
    char pad_34[0x10];
};

struct Gbl {
    char pad_00[0x34];
    struct Rec44 *items;
    unsigned int count;
};

extern struct Gbl *D_0021F410;
extern void func_1791D8(char *e);

static __inline__ struct Rec44 *FindRec(struct Gbl *g, int key)
{
    unsigned int i;

    for (i = 0; i < g->count; i++) {
        if (g->items[i].key == key) {
            return &g->items[i];
        }
    }
    return 0;
}

void func_179A40(void)
{
    struct Rec44 *q;
    char *s;
    char *end;

    q = FindRec(D_0021F410, 0x5E139936);
    s = q->subs;
    end = s + (q->count << 7);
    while (s != end) {
        if (*(unsigned int *)(s + 0x64) & 1) {
            func_1791D8(s);
        }
        s += 0x80;
    }
}
