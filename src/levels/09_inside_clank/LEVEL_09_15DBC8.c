/* LEVEL_09:0x15DBC8 -- frees the object's table entry and its pool handle, then runs the common teardown. */
typedef struct {
    char pad60[0x60];
    void *entries;
    void *nodes;
} Obj;

typedef struct {
    char pad_00[0x18];
    unsigned char flags;
    char pad_19[3];
} Entry;

typedef struct {
    Entry ents[12];
    int pad_150[2];
    unsigned char count;
} Base;

typedef struct {
    char pad_00[0x2C];
    struct {
        char pad_00[0x58];
        Base *base;
    } *world;
} Link;

typedef struct {
    unsigned short handle;
    char pad_02;
    unsigned char pool;
    char pad_04[0x34];
    unsigned char slot;
} Rec;

typedef struct {
    char pad_00[0x54];
    Link *link;
    Rec *rec;
} Owner;

struct P19338;

extern Obj D_00216E78[];
extern void *memset(void *, int, unsigned int);
extern void func_091FB0(Obj *o, unsigned int index);
extern void func_018998(struct P19338 *p);

static __inline__ void Release(Obj *pool, unsigned short *h)
{
    if (*h != 0xFFFF) {
        func_091FB0(pool, *h);
        *h = 0xFFFF;
    }
}

void func_15DBC8(Owner *o)
{
    Link *link;
    Rec *rec;
    Base *base;
    Entry *ent;

    link = o->link;
    rec = o->rec;
    if (rec->slot != 0xFF) {
        base = link->world->base;
        ent = &base->ents[rec->slot];
        if ((ent->flags & 1) != 0) {
            base->count--;
        }
        memset(ent, 0, 0x1C);
    }
    Release(&D_00216E78[rec->pool], &rec->handle);
    func_018998((struct P19338 *)o);
}
