/* USA LEVEL_05.REL:0x1997E0, 284-byte candidate (21 November 2026).
 * Measured pinned: 5 differing words; first difference at 0xAC.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
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
    float x;
    float y;
    float z;
    int w;
    float pos[3];
};
struct Spawn {
    char pad[0x58];
    struct Rec *rec;
};
struct Glob {
    char pad[0x14];
    float f14;
    float f18;
    float f1C;
    float f20;
};
extern struct Table *D_001F5E10;
extern struct Glob *D_001F7BB4;
extern struct Spawn *func_079BE0(struct Entry *e, unsigned int hash, int obj, int n);
extern void func_07E070(struct Spawn *s, struct Glob *g, float *vec, int b, int c, int d, int e, int f, float x, float y, float z, float w);

static inline struct Entry *FindEntry(struct Table *t, unsigned int hash)
{
    unsigned i;
    for (i = 0; i < t->count; i++) {
        if (t->entries[i].hash == hash)
            return &t->entries[i];
    }
    return 0;
}

struct Spawn *func_1997E0(int obj, int val, float *pos)
{
    struct Entry *e = FindEntry(D_001F5E10, 0xC11D90FF);
    struct Spawn *s;
    struct Rec *r;
    struct Glob *g;
    float *vec;

    if (e == 0)
        s = 0;
    else
        s = func_079BE0(e, 0xC11D90FF, obj, 0xFF);
    r = s->rec;
    r->y = pos[1];
    r->z = pos[2];
    r->w = val;
    r->x = pos[0];
    vec = r->pos;
    g = D_001F7BB4;
    if (g != 0) {
        func_07E070(s, g, vec, 0, 0, 0, 0, 1, g->f14, g->f18, g->f1C, g->f20);
    }
    return s;
}
