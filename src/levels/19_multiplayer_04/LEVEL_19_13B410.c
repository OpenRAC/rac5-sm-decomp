/* LEVEL_19:0x13B410 -- looks up an entry by hash, spawns an object and flags its link when set up. */
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
    char pad[0x70];
    unsigned char flag;
};
struct Spawn {
    char pad[0x58];
    struct Link *link;
};
extern struct Table *D_001B5A20;
extern struct Spawn *func_06F898(struct Entry *e, unsigned a, int b, int c);
extern int func_13B398(struct Spawn *s, int a, int b, int c);

static inline struct Entry *FindEntry(struct Table *t, int hash)
{
    unsigned i;
    for (i = 0; i < t->count; i++) {
        if (t->entries[i].hash == hash)
            return &t->entries[i];
    }
    return 0;
}

struct Spawn *func_13B410(int arg, int a, int b, int c)
{
    struct Entry *e = FindEntry(D_001B5A20, 0xAA456197);
    struct Spawn *s;
    if (e == 0)
        s = 0;
    else
        s = func_06F898(e, 0xAA456197, arg, 0xFF);
    if (s) {
        if (func_13B398(s, a, b, c))
            s->link->flag = 1;
    }
    return s;
}
