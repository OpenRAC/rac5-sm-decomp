/* LEVEL_19:0x177A40 -- counts matching sub-entries of the record owned by the given object. */
struct Ent {
    int pad0[3];
    struct Rec *recs;
    int pad10[5];
    int id;
    int pad28[2];
    unsigned int count;
    int pad34[4];
};
struct Tbl {
    char pad[0x34];
    struct Ent *ents;
    unsigned int count;
};
struct Sub {
    int key;
    int pad[2];
};
struct Info {
    char pad[0x40];
    unsigned int count;
};
struct Target {
    char pad[0xF8];
    int ref;
};
struct Link {
    struct Target *target;
    char pad[0x110];
    struct Sub subs[1];
};
struct Rec {
    char pad[0x58];
    struct Link *link;
    char pad5C[8];
    unsigned int flags;
    char pad68[0x18];
};
extern struct Tbl *D_001B5A20;
extern struct Info *func_021D08(int a, int b);

static inline struct Ent *find(struct Tbl *t, int id)
{
    unsigned int i;
    for (i = 0; i < t->count; i++) {
        if (t->ents[i].id == id)
            return &t->ents[i];
    }
    return 0;
}

int func_177A40(struct Target *target)
{
    struct Ent *e = find(D_001B5A20, 0x7D98850E);
    struct Rec *p;
    struct Rec *end;
    if (e == 0)
        return 0;
    p = e->recs;
    end = p + e->count;
    for (; p != end; p++) {
        struct Link *l;
        struct Info *info;
        unsigned int i;
        int n;
        if ((p->flags & 7) != 1)
            continue;
        l = p->link;
        if (l->target != target)
            continue;
        info = func_021D08(0xC, l->target->ref);
        n = 0;
        for (i = 0; i < info->count; i++) {
            if (l->subs[i].key == (int)0x9A64B044)
                n++;
        }
        return n;
    }
    return 0;
}
