/* LEVEL_05:0x16A4F8 -- finds the tagged entry in the global table, spawns from it, fills three parameters of the result's inner record, marks it and runs two follow-up helpers. */
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
    char pad_00[0x10];
    int f_10;
    char pad_14[4];
    int f_18;
    char pad_1C[0x2C - 0x1C];
    int f_2C;
};
struct Res {
    char pad[0x45];
    char state_45;
    char pad_46[0x54 - 0x46];
    struct Inner *in;
};
extern struct Tab *D_001F5E10;
extern struct Res *func_079BE0(struct Ent *e, unsigned int tag, int key, int n);
extern void func_16A5F0(struct Res *r);
extern void func_16A9E8(struct Res *r, int v);

static __inline__ struct Ent *FindEntry(struct Tab *t, unsigned int tag)
{
    unsigned i;
    for (i = 0; i < t->count; i++) {
        if (t->ents[i].tag == tag)
            return &t->ents[i];
    }
    return 0;
}

struct Res *func_16A4F8(int key, int p0, int p1, int p2)
{
    struct Ent *e = FindEntry(D_001F5E10, 0x6DE6BC38);
    struct Res *r;
    struct Inner *in;

    if (e == 0)
        r = 0;
    else
        r = func_079BE0(e, 0x6DE6BC38, key, 4);
    in = r->in;
    in->f_2C = p0;
    in->f_10 = p1;
    in->f_18 = p2;
    r->state_45 = 2;
    func_16A5F0(r);
    func_16A9E8(r, 0x11);
    return r;
}
