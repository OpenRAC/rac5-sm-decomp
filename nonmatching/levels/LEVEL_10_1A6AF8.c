/* USA LEVEL_10.REL:0x1A6AF8, 240-byte candidate (21 November 2026).
 * Measured gnu-ee-trial-divpad: 5 differing words; first difference at 0x14.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
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
    int val;
    char pad[0x88];
    float scale;
};
struct Res {
    char pad[0x58];
    struct Inner *in;
};
extern struct Tab *D_0020F9F0;
extern struct Res *func_07CB88(struct Ent *e, unsigned int tag, int key, int n);
extern void func_1A6D00(struct Res *r, int a);

static inline struct Ent *FindEntry(struct Tab *t, unsigned int tag)
{
    unsigned i;
    for (i = 0; i < t->count; i++) {
        if (t->ents[i].tag == tag)
            return &t->ents[i];
    }
    return 0;
}

struct Res *func_1A6AF8(int key, int val, int flag, float scale)
{
    struct Ent *e = FindEntry(D_0020F9F0, 0xF1932263);
    struct Res *r;
    struct Inner *in;
    if (e == 0)
        r = 0;
    else
        r = func_07CB88(e, 0xF1932263, key, 0xFF);
    if (r != 0) {
        in = r->in;
        in->val = val;
        in->scale = scale;
        if (flag)
            func_1A6D00(r, 2);
    }
    return r;
}
