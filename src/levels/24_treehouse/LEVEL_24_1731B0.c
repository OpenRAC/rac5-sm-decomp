/* LEVEL_24:0x1731B0 -- finds the tagged entry in the global table, spawns from it, stores a float and a value in the result's inner record, sets its timer and, when a marker object exists, links the result to the marker's position. */
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
    int w_00;
    char pad_04[4];
    float f_08;
};
struct Res {
    char pad_00[0x58];
    struct Inner *in_58;
    char pad_5C[0x70 - 0x5C];
    float f_70;
};
struct Marker {
    char pad_00[0x14];
    float v[4];
};
extern struct Tab *D_001D7A10;
extern struct Res *func_076C50(struct Ent *e, unsigned int tag, int key, int n);
extern struct Marker *func_022010(int a);
extern void func_07B0B0(struct Res *r, struct Marker *m, int a2, int a3, int t0, int t1, int t2, int t3,
                        float f0, float f1, float f2, float f3);

static __inline__ struct Ent *FindEntry(struct Tab *t, unsigned int tag)
{
    unsigned i;
    for (i = 0; i < t->count; i++) {
        if (t->ents[i].tag == tag)
            return &t->ents[i];
    }
    return 0;
}

struct Res *func_1731B0(int key, float f, int value)
{
    struct Ent *e = FindEntry(D_001D7A10, 0x29895950);
    struct Res *r;
    struct Marker *m;
    struct Inner *in;

    if (e == 0)
        r = 0;
    else
        r = func_076C50(e, 0x29895950, key, 0xFF);
    if (r == 0)
        return 0;
    in = r->in_58;
    in->w_00 = value;
    in->f_08 = f;
    r->f_70 = 30.0f;
    m = func_022010(1);
    if (m != 0)
        func_07B0B0(r, m, 0, 0, 0, 0, 0, 1, m->v[0], m->v[1], m->v[2], m->v[3]);
    return r;
}
