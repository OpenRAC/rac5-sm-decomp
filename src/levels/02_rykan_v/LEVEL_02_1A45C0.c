/* LEVEL_02:0x1A45C0 -- rebases six resource offsets (each must resolve to a live record) and a seventh plain offset, then caches the table entry for a fixed hash and reports whether it carries data. */
struct Res {
    char pad[0x40];
    int live;
};
struct Entry {
    char pad[0x24];
    int hash;
    char pad28[8];
    int data;
    char pad2C[0x44 - 0x34];
};
struct Table {
    char pad[0x34];
    struct Entry *entries;
    unsigned count;
};
struct Rec {
    int slot[6];
    int w18;
    struct Entry *found;
};
struct Obj {
    char pad[0x54];
    struct Rec *rec;
};

extern int D_0021BD54;
extern struct Table *D_0021BD50;

static __inline__ int Fixup(int *slot)
{
    struct Res *res;

    if (*slot == 0)
        return 0;
    res = (struct Res *)(D_0021BD54 + *slot);
    if (res->live == 0) {
        *slot = 0;
        return 0;
    }
    *slot = (int)res;
    return 1;
}

static __inline__ struct Entry *FindEntry(struct Table *t, int hash)
{
    unsigned i;
    for (i = 0; i < t->count; i++) {
        if (t->entries[i].hash == hash)
            return &t->entries[i];
    }
    return 0;
}

int func_1A45C0(struct Obj *o)
{
    struct Rec *r = o->rec;
    unsigned int i;
    int ok;

    for (i = 0; i < 6; i++) {
        if (!Fixup(&r->slot[i]))
            return 0;
    }
    if (r->w18 == 0) {
        ok = 0;
    } else {
        r->w18 = D_0021BD54 + r->w18;
        ok = 1;
    }
    if (!ok)
        return 0;
    r->found = FindEntry(D_0021BD50, 0xF44DD93F);
    if (r->found == 0)
        return 0;
    return r->found->data != 0;
}
