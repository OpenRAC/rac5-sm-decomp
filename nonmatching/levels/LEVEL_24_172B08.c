/* LEVEL_24.REL:0x172B08: reviewed 168-byte candidate, held for ABI review.
 * Finds the keyed list entry, then searches its records for one whose first
 * word equals the key; otherwise forwards to a helper.
 * pinned C with gnu-ee-trial links 168/168 bytes and is byte-exact at this USA
 * placement, but the prototypes disagree.
 * It declares func_172CB0 returning pointer with (pointer, int), but the
 * accepted LEVEL_24_172CB0.c defines it returning pointer with (int, int).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
struct Rec {
    char pad_00[0x58];
    unsigned int *p_58;
    char pad_5C[0x80 - 0x5C];
};

struct Ent {
    char pad_00[0xC];
    struct Rec *recs_0C;
    char pad_10[0x24 - 0x10];
    unsigned int key_24;
    char pad_28[0x30 - 0x28];
    unsigned int count_30;
    char pad_34[0x44 - 0x34];
};

struct Grp {
    char pad_00[0x34];
    struct Ent *ents_34;
    unsigned int count_38;
};

extern struct Grp *D_001D7A10;
extern struct Rec *func_172CB0(char *o, unsigned int key);

static inline struct Ent *find_ent(struct Grp *g, unsigned int key)
{
    struct Ent *cur;
    unsigned int i;

    for (i = 0; i < g->count_38; i++) {
        cur = &g->ents_34[i];
        if (cur->key_24 == key) {
            return cur;
        }
    }
    return 0;
}

struct Rec *func_172B08(char *a0, unsigned int a1)
{
    struct Ent *p;
    struct Rec *e;
    struct Rec *base;
    struct Rec *end;
    unsigned int key;

    key = 0x50C95904;
    p = find_ent(D_001D7A10, key);
    if (p != 0) {
        base = p->recs_0C;
        end = base + p->count_30;
        for (e = base; e != end; e++) {
            if (*e->p_58 == a1) {
                return e;
            }
        }
    }
    return func_172CB0(a0, a1);
}
