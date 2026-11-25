/* LEVEL_04:0x16D8C0 -- on spawn, looks up the two level entries by id, creates the paired object from the second one, copies the parent's 16-word transform into it and initialises it. */
typedef struct Entry {
    char pad00[0x24];
    unsigned int id;
    char pad28[0x44 - 0x28];
} Entry;

typedef struct Level {
    char pad00[0x34];
    Entry *entries;
    unsigned int count;
} Level;

typedef struct Obj {
    float w[0x16];
    struct Part *part;
    char pad5C[0x1A];
    unsigned char b76;
    unsigned char b77;
} Obj;

typedef struct Part {
    char pad00[0x18];
    float *child;
} Part;

extern Level *D_002201B0;
extern Entry *D_00220D8C;

extern float *func_07F9D0(Entry *e, unsigned int id, Obj *parent, int a);
extern float *func_16DD38(void);
extern int func_170688(float *o);
extern void func_1DE2D0(Obj *o, Part *p);

static __inline__ Entry *FindEntry(unsigned int id)
{
    unsigned int i;
    Entry *e;

    for (i = 0; i < D_002201B0->count; i++) {
        e = &D_002201B0->entries[i];
        if (e->id == id)
            return e;
    }
    return 0;
}

int func_16D8C0(Obj *o)
{
    Part *part;
    Entry *e;
    float *n;

    part = o->part;
    if (D_00220D8C == 0)
        D_00220D8C = FindEntry(0x26F3A398);
    e = FindEntry(0x5433D105);
    if (e == 0)
        n = 0;
    else
        n = func_07F9D0(e, 0x5433D105, o, 0xFF);
    part->child = n;
    if (n == 0) {
        n = func_16DD38();
        part->child = n;
        if (n == 0)
            return 0;
        n[8] = o->w[8];
        n[9] = o->w[9];
        n[10] = o->w[10];
        n[11] = o->w[11];
        n[0] = o->w[0];
        n[1] = o->w[1];
        n[2] = o->w[2];
        n[3] = o->w[3];
        n[4] = o->w[4];
        n[5] = o->w[5];
        n[6] = o->w[6];
        n[7] = o->w[7];
        n[12] = o->w[12];
        n[13] = o->w[13];
        n[14] = o->w[14];
        n[15] = o->w[15];
        func_170688(part->child);
    }
    func_1DE2D0(o, part);
    o->b77 = 0;
    o->b76 = 0;
    return 1;
}
