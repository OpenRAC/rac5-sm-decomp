/* LEVEL_09:0x036920 -- placement copy of LEVEL_01_03A370.c: looks up an entry by hash, spawns an object from it into one of the owner's slots, clears its link flag, tags it and attaches it to the owner. */
struct Entry {
    char pad[0x24];
    int hash;
    char pad28[0x1C];
};
struct Table {
    char pad[0x34];
    struct Entry *entries;
    unsigned count;
};
struct Link {
    char pad[8];
    int flag;
};
struct Back {
    int owner;
};
struct Spawn {
    char pad[0x48];
    struct Link *link;
    char pad4C[0x58 - 0x4C];
    struct Back *back;
    char pad5C[8];
    unsigned flags;
};
struct Owner {
    char pad[0x5B8];
    struct Spawn *slot[4];
};
extern struct Table *D_001F0890;
extern char D_002019C0[];
extern struct Spawn *func_078FF0(struct Entry *e, int a, char *b, int c);
extern void func_036668(struct Owner *o, int idx, int c);

static __inline__ struct Entry *FindEntry(struct Table *t, int hash)
{
    unsigned i;

    for (i = 0; i < t->count; i++) {
        if (t->entries[i].hash == hash)
            return &t->entries[i];
    }
    return 0;
}

void func_036920(struct Owner *owner, int idx, int hash, int a3)
{
    struct Entry *e;
    struct Spawn *s;
    char *tab;

    tab = D_002019C0;
    e = FindEntry(D_001F0890, hash);
    if (e == 0)
        s = 0;
    else
        s = func_078FF0(e, a3, tab, 0xFF);
    owner->slot[idx] = s;
    if (s != 0) {
        s->link->flag = 0;
        if (idx != 1) {
            owner->slot[idx]->flags |= 0x10;
        }
        owner->slot[idx]->back->owner = (int)owner;
        func_036668(owner, idx, 0);
    }
}
