/* LEVEL_18:0x17AEC0 -- placement copy of LEVEL_07_1C3A90.c: placement copy of LEVEL_03_1BFB10.c: looks up an entry by hash, spawns an object from it, hands it to a setup helper and stores a value in its record. */
struct Entry {
    char pad[0x24];
    unsigned int hash;
    char pad28[0x1C];
};
struct Table {
    char pad[0x34];
    struct Entry *entries;
    unsigned count;
};
struct Rec {
    char pad[0x24];
    int w24;
};
struct Spawn {
    char pad[0x58];
    struct Rec *rec;
};
extern struct Table *D_001B5D20;
extern struct Spawn *func_06EEF8(struct Entry *e, int a, int b, int c);
extern void func_189788(struct Spawn *s, struct Rec *r, int a, int b, int c);

static inline struct Entry *FindEntry(struct Table *t, unsigned int hash)
{
    unsigned i;
    for (i = 0; i < t->count; i++) {
        if (t->entries[i].hash == hash)
            return &t->entries[i];
    }
    return 0;
}

struct Spawn *func_17AEC0(int a, int b, int c, int d, int e)
{
    struct Entry *ent = FindEntry(D_001B5D20, 0xDE5BE6A4);
    struct Spawn *s;
    struct Rec *r;

    if (ent == 0)
        s = 0;
    else
        s = func_06EEF8(ent, c, d, 0xFF);
    if (s == 0) {
        return 0;
    }
    r = s->rec;
    func_189788(s, r, a, e, -1);
    r->w24 = b;
    return s;
}
