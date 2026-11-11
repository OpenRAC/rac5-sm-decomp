/* LEVEL_02:0x13F638 -- placement copy of LEVEL_03_137620.c: looks up an entry by id and caches its pointer. */
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
extern struct Tbl *D_0021BD50;
extern struct Obj *D_0021C0C4;
extern int func_082C80(struct Obj *o, int a, int b);

static inline struct Ent *find(struct Tbl *t, int id)
{
    unsigned int i;
    for (i = 0; i < t->count; i++) {
        if (t->ents[i].id == id)
            return &t->ents[i];
    }
    return 0;
}

long long func_13F638(void)
{
    if (D_0021C0C4 == 0) {
        struct Ent *e = find(D_0021BD50, 0x95D70560);
        if (e->f30 == 0)
            return 0;
        D_0021C0C4 = (struct Obj *)e->f0C;
    }
    if (!(D_0021C0C4->flags & 1)) {
        if (func_082C80(D_0021C0C4, 0, 0xFF) == 0) {
            D_0021C0C4 = 0;
            return 0;
        }
    }
    return 1;
}
