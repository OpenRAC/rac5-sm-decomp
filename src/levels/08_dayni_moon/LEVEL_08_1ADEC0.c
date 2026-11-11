/* LEVEL_08:0x1ADEC0 -- placement copy of LEVEL_04_1972A0.c: spawns the follower object: finds its template in the level table, places it at a point on the owner and links it to the target. */
typedef struct V3 {
    float x;
    float y;
    float z;
} V3;

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

struct Obj;

typedef struct Body {
    struct Obj **owner;
    float offset;
    float scale;
    int link;
    int *target;
    int f14;
    int f18;
    int f1C;
} Body;

typedef struct Obj {
    char pad00[0x20];
    V3 pos;
    float pad2C;
    V3 pos2;
    char pad3C[0x58 - 0x3C];
    Body *body;
} Obj;

extern Level *D_0024FC50;
extern char D_00261B08[];

extern Obj *func_0844E0(Entry *e, unsigned int id, int a, int b);
extern void func_073720(int link, int target, V3 *p, V3 *q, char *data);

static __inline__ Entry *FindEntry(unsigned int id)
{
    unsigned int i;
    Entry *e;

    for (i = 0; i < D_0024FC50->count; i++) {
        e = &D_0024FC50->entries[i];
        if (e->id == id) {
            return e;
        }
    }
    return 0;
}

Obj *func_1ADEC0(V3 *pos, Obj **owner, int a2, int *target, float offset, int a4, float scale)
{
    Entry *e;
    Obj *o;
    Body *b;
    V3 *p;
    V3 *q;
    V3 *s;
    unsigned int key;

    key = 0xC0C773ED;
    e = FindEntry(key);
    if (e == 0) {
        o = 0;
    } else {
        o = func_0844E0(e, key, 0, 0xFF);
    }
    if (o == 0) {
        return 0;
    }
    b = o->body;
    p = &o->pos;
    q = &o->pos2;
    p->x = pos->x;
    p->y = pos->y;
    p->z = pos->z;
    b->offset = offset;
    b->scale = scale;
    b->owner = owner;
    s = &(*owner)->pos2;
    q->x = s->x;
    q->y = s->y;
    q->z = s->z;
    o->pos2.y = o->pos2.y + b->offset;
    b->f18 = a2;
    b->target = target;
    b->f14 = 0;
    func_073720(b->link, *target, p, q, D_00261B08);
    b->f1C = a4;
    return o;
}
