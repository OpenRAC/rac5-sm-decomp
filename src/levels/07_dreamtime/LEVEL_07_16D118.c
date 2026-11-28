/* LEVEL_07:0x16D118 -- copies a descriptor into its target and looks up an entry by id. */
typedef struct {
    int f0;
    int pad4;
    int f8;
    int fC;
    int f10;
    int f14;
    float f18;
    unsigned char f1C;
    unsigned char f1D;
    unsigned char f1E;
} Src;

typedef struct {
    int f0;
    int f4;
    void *f8;
    int fC;
    int f10;
    int f14;
    int f18;
    float f1C;
    unsigned char f20;
} Dst;

typedef struct {
    char pad0[0xC];
    int fC;
    char pad10[0x14];
    unsigned int id;
    char pad28[0x1C];
} Entry;

typedef struct {
    char pad0[0x34];
    Entry *entries;
    unsigned int count;
} Table;

typedef struct {
    char pad0[0x45];
    unsigned char f45;
    char pad46[0x54 - 0x46];
    Src *src;
    Dst *dst;
    char pad5C[8];
    unsigned int flags;
} Obj;

extern Table *D_0021B090;
extern int func_1664C8(int a, Dst *b, int c);

static __inline__ Entry *FindEntry(Table *t, unsigned int key)
{
    unsigned int i;

    for (i = 0; i < t->count; i++) {
        if (t->entries[i].id == key) {
            return &t->entries[i];
        }
    }
    return 0;
}

void func_16D118(Obj *o)
{
    Src *s;
    Dst *d;

    s = o->src;
    d = o->dst;
    d->f4 = s->f8;
    d->f8 = o;
    d->fC = s->f10;
    d->f14 = s->f14;
    d->f0 = s->fC;
    d->f18 = o->f45;
    d->f10 = s->f0;
    d->f1C = s->f18;
    d->f20 = s->f1C;
    if (s->f1D) {
        o->flags |= 0x10;
    }
    func_1664C8(FindEntry(D_0021B090, 0xC78F8181)->fC, d, s->f1E != 0);
}
