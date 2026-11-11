/* LEVEL_05:0x134C28 -- placement copy of LEVEL_03_137620.c: looks up an entry by id and caches its pointer. */
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
extern struct Tbl *D_001F5E10;
extern struct Obj *D_001F6184;
extern int func_079A20(struct Obj *o, int a, int b);

static inline struct Ent *find(struct Tbl *t, int id)
{
    unsigned int i;
    for (i = 0; i < t->count; i++) {
        if (t->ents[i].id == id)
            return &t->ents[i];
    }
    return 0;
}

long long func_134C28(void)
{
    if (D_001F6184 == 0) {
        struct Ent *e = find(D_001F5E10, 0x95D70560);
        if (e->f30 == 0)
            return 0;
        D_001F6184 = (struct Obj *)e->f0C;
    }
    if (!(D_001F6184->flags & 1)) {
        if (func_079A20(D_001F6184, 0, 0xFF) == 0) {
            D_001F6184 = 0;
            return 0;
        }
    }
    return 1;
}
