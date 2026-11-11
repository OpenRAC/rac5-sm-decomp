/* LEVEL_06:0x12F908 -- placement copy of LEVEL_03_137620.c: looks up an entry by id and caches its pointer. */
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
extern struct Tbl *D_001F5990;
extern struct Obj *D_001F5D04;
extern int func_075F90(struct Obj *o, int a, int b);

static inline struct Ent *find(struct Tbl *t, int id)
{
    unsigned int i;
    for (i = 0; i < t->count; i++) {
        if (t->ents[i].id == id)
            return &t->ents[i];
    }
    return 0;
}

long long func_12F908(void)
{
    if (D_001F5D04 == 0) {
        struct Ent *e = find(D_001F5990, 0x95D70560);
        if (e->f30 == 0)
            return 0;
        D_001F5D04 = (struct Obj *)e->f0C;
    }
    if (!(D_001F5D04->flags & 1)) {
        if (func_075F90(D_001F5D04, 0, 0xFF) == 0) {
            D_001F5D04 = 0;
            return 0;
        }
    }
    return 1;
}
