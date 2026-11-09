/* LEVEL_02.REL:0x165608: reviewed 224-byte candidate, held for ABI review.
 * Finds the tagged entry in the global table, spawns from it and configures
 * the result.
 * pinned C with gnu-ee-trial links 224/224 bytes and is byte-exact at this and
 * 1 other USA placement, but the prototypes disagree.
 * It declares func_165580 returning void with (pointer, int), but the accepted
 * LEVEL_02_165580.c defines it returning void with (pointer, pointer).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
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
    char pad[4];
    char val;
};
struct Res {
    char pad[0x54];
    struct Inner *in;
};
extern struct Tab *D_0021BD50;
extern struct Res *func_082E40(struct Ent *e, unsigned int tag, int key, int n);
extern void func_165580(struct Res *r, int a);

static inline struct Ent *FindEntry(struct Tab *t, unsigned int tag)
{
    unsigned i;
    for (i = 0; i < t->count; i++) {
        if (t->ents[i].tag == tag)
            return &t->ents[i];
    }
    return 0;
}

struct Res *func_165608(int key, int a, int val)
{
    struct Ent *e = FindEntry(D_0021BD50, 0xCAFE6BBB);
    struct Res *r;
    if (e == 0)
        r = 0;
    else
        r = func_082E40(e, 0xCAFE6BBB, key, 0xFF);
    if (r == 0)
        return 0;
    r->in->val = val;
    if (a)
        func_165580(r, a);
    return r;
}
