/* LEVEL_07:0x15A8D0 -- placement copy of LEVEL_02_165608.c: finds the tagged entry in the global table, spawns from it and configures the result. */
struct Ent {
    char pad[0x24];
    unsigned int tag;
    char pad2[0x1C];
};
struct Tab {
    char pad[0x34];
    struct Ent *ents;
    unsigned int count;
};
struct Inner {
    char pad[4];
    char val;
};
struct Res {
    char pad[0x54];
    struct Inner *in;
};
extern struct Tab *D_0021B090;
extern struct Res *func_07E6D8(struct Ent *e, unsigned int tag, int key, int n);
extern void func_15A848(char *a0, char *a1);

static inline struct Ent *FindEntry(struct Tab *t, unsigned int tag)
{
    unsigned i;
    for (i = 0; i < t->count; i++) {
        if (t->ents[i].tag == tag)
            return &t->ents[i];
    }
    return 0;
}

struct Res *func_15A8D0(int key, char *a, int val)
{
    struct Ent *e = FindEntry(D_0021B090, 0xCAFE6BBB);
    struct Res *r;
    if (e == 0)
        r = 0;
    else
        r = func_07E6D8(e, 0xCAFE6BBB, key, 0xFF);
    if (r == 0)
        return 0;
    r->in->val = val;
    if (a)
        func_15A848((char *)r, a);
    return r;
}
