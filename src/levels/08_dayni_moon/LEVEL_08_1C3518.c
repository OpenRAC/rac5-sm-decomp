/* LEVEL_08:0x1C3518 -- initialises an object: relocates the pointers of its resource header in place and looks up the table entry it needs. */
typedef struct Res {
    char pad_00[0x40];
    int w40;
} Res;

typedef struct Entry {
    char pad_00[0x24];
    int hash;
    char pad_28[0x1C];
} Entry;

typedef struct Table {
    char pad_00[0x34];
    Entry *entries;
    unsigned int count;
} Table;

typedef struct Hdr {
    int p[12];
} Hdr;

typedef struct State {
    char pad_00[0x1C];
    unsigned int w1C;
    Entry *w20;
} State;

typedef struct Obj {
    char pad_00[0x54];
    Hdr *hdr;
    State *state;
} Obj;

extern Table *D_0024FC50;
extern int D_0024FC54;

static __inline__ int Reloc(int *p)
{
    int v;

    v = p[0];
    if (v == 0) {
        return 0;
    }
    p[0] = D_0024FC54 + v;
    return 1;
}

static __inline__ int RelocLoaded(int *p)
{
    int v;
    Res *t;

    v = p[0];
    if (v == 0) {
        return 0;
    }
    t = (Res *)(D_0024FC54 + v);
    if (t->w40 == 0) {
        p[0] = 0;
        return 0;
    }
    p[0] = (int)t;
    return 1;
}

static __inline__ Entry *FindEntry(Table *t, int hash)
{
    unsigned int i;

    for (i = 0; i < t->count; i++) {
        if (t->entries[i].hash == hash) {
            return &t->entries[i];
        }
    }
    return 0;
}

void func_1C3518(Obj *o)
{
    State *s;
    Hdr *h;

    s = o->state;
    h = o->hdr;
    for (s->w1C = 0; s->w1C < 4; s->w1C++) {
        if (!Reloc(&h->p[s->w1C])) {
            break;
        }
    }
    RelocLoaded(&h->p[4]);
    RelocLoaded(&h->p[5]);
    Reloc(&h->p[6]);
    Reloc(&h->p[7]);
    RelocLoaded(&h->p[8]);
    Reloc(&h->p[9]);
    Reloc(&h->p[10]);
    Reloc(&h->p[11]);
    s->w20 = FindEntry(D_0024FC50, 0x4FF0E803);
}
