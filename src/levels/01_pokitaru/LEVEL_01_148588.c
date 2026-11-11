/* LEVEL_01:0x148588 -- looks up an entry by hash, spawns a linked object and attaches it to the owner. */
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
struct Spawn {
    char pad[0x58];
    int *link;
    char pad5C[8];
    unsigned flags;
    char pad68[0xC];
    char sub[1];
};
struct Owner {
    char pad[0xF8];
    int ctx;
    char padFC[0x4AC];
    struct Spawn *spawn;
};
extern struct Table *D_00206D90;
extern struct Spawn *func_07C558(struct Entry *e, unsigned a, int b, int c);
extern void func_023838(char *sub, int a, int ctx, int b);

static inline struct Entry *FindEntry(struct Table *t, int hash)
{
    unsigned i;
    for (i = 0; i < t->count; i++) {
        if (t->entries[i].hash == hash)
            return &t->entries[i];
    }
    return 0;
}

struct Spawn *func_148588(int unused, struct Owner *owner)
{
    struct Entry *e = FindEntry(D_00206D90, 0x09F58F29);
    struct Spawn *s;
    if (e == 0)
        s = 0;
    else
        s = func_07C558(e, 0xE997AD78, 0, 0xFF);
    if (!s)
        return 0;
    *s->link = (int)owner;
    owner->spawn = s;
    s->flags |= 0x10;
    func_023838(s->sub, 2, owner->ctx, -1);
    return s;
}
