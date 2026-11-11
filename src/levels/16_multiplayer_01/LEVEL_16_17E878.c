/* LEVEL_16:0x17E878 -- replaces a spawned object tied to a context and fills its bit masks from a table. */
typedef struct {
    float x, y, z;
} Vec3;

typedef struct {
    char pad0[0x24];
    unsigned key;
    char pad28[0x1C];
} Ent;

typedef struct {
    char pad0[0x34];
    Ent *ents;
    unsigned count;
} World;

typedef struct {
    char pad0[0xC];
    char *arr;
    char pad10[0x20];
    unsigned count;
} Holder;

typedef struct {
    char pad0[0x4];
    void *p4;
} Link;

typedef struct {
    char pad0[0x58];
    Link *link;
    char pad5C[8];
    unsigned flags;
} Elem;

typedef struct {
    void *a;
    void *b;
    char pad8[0x14];
    unsigned mask;
    unsigned w20;
    unsigned bits[2];
} Info;

typedef struct {
    char pad0[0x30];
    Vec3 v;
    char pad3C[0x1C];
    Info *info;
} Obj;

typedef struct {
    char pad0[0x3C];
    unsigned w3C;
    char pad40[8];
    unsigned char b48[3];
    char pad4B[5];
    int i50;
} Rec;

typedef struct {
    char pad0[0xF8];
    int iF8;
    char padFC[0xA20];
    Vec3 pos;
} Ctx;

extern World *D_001B48A0;
extern void func_06F940(void *o, int f);
extern Obj *func_06F830(void *e, unsigned key, Ctx *c, int n);
extern int func_17ECC8(Obj *o);
extern Rec *func_0220C8(unsigned a, int b);

static inline Ent *FindEnt(unsigned key)
{
    unsigned i;
    World *w = D_001B48A0;

    for (i = 0; i < w->count; i++)
        if (w->ents[i].key == key)
            return &w->ents[i];
    return 0;
}

void func_17E878(Ctx *c)
{
    Holder *h;
    char *p;
    char *end;
    Obj *o;
    Info *info;
    unsigned i;

    h = (Holder *)FindEnt(0x7367AAD1);
    p = h->arr;
    end = p + (h->count << 7);
    for (; p != end; p += 0x80) {
        Elem *el = (Elem *)p;
        if ((el->flags & 1) && el->link->p4 == c) {
            func_06F940(p, 1);
            break;
        }
    }
    {
        Ent *e = FindEnt(0x7367AAD1);
        if (!e)
            o = 0;
        else
            o = func_06F830(e, 0x7367AAD1, c, 0xFF);
    }
    if (!o)
        return;
    {
        Vec3 *sv = &c->pos;
        Vec3 *dv = &o->v;

        dv->x = sv->x;
        dv->y = sv->y;
        dv->z = sv->z;
    }
    info = o->info;
    info->a = c;
    info->b = c;
    if (!func_17ECC8(o)) {
        func_06F940(o, 1);
        return;
    }
    info->mask = 0;
    info->w20 = 0;
    info->bits[1] = 0;
    info->bits[0] = 0;
    for (i = 2; i < 16; i++) {
        Rec *r = func_0220C8(i, c->iF8);
        if (r->i50 == 1) {
            unsigned j;

            info->mask |= 1 << i;
            info->w20 |= r->w3C << (i * 2);
            for (j = 0; j < 3; j++) {
                if (r->b48[j]) {
                    unsigned bit = i * 3 + j;
                    unsigned w = bit >= 32;
                    info->bits[w] |= 1 << (bit & 31);
                }
            }
        }
    }
}
