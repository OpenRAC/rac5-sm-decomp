/* LEVEL_03.REL:0x137620: reviewed 204-byte candidate, held for ABI review.
 * Looks up an entry by id and caches its pointer.
 * pinned C with gnu-ee-trial links 204/204 bytes and is byte-exact at this and
 * 6 other USA placements, but the prototypes disagree.
 * It defines the function returning int with no arguments, but the accepted
 * caller LEVEL_03_1375E0.c declares it returning long long with no arguments.
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
struct Ent {
    int pad0[3];
    int f0C;
    int pad10[5];
    int id;
    int pad28[2];
    int f30;
    int pad34[4];
};
struct Tbl {
    char pad[0x34];
    struct Ent *ents;
    unsigned int count;
};
struct Obj {
    char pad[0x64];
    unsigned int flags;
};
extern struct Tbl *D_0021F410;
extern struct Obj *D_0021F784;
extern int func_07C190(struct Obj *o, int a, int b);

static inline struct Ent *find(struct Tbl *t, int id)
{
    unsigned int i;
    for (i = 0; i < t->count; i++) {
        if (t->ents[i].id == id)
            return &t->ents[i];
    }
    return 0;
}

int func_137620(void)
{
    if (D_0021F784 == 0) {
        struct Ent *e = find(D_0021F410, 0x95D70560);
        if (e->f30 == 0)
            return 0;
        D_0021F784 = (struct Obj *)e->f0C;
    }
    if (!(D_0021F784->flags & 1)) {
        if (func_07C190(D_0021F784, 0, 0xFF) == 0) {
            D_0021F784 = 0;
            return 0;
        }
    }
    return 1;
}
