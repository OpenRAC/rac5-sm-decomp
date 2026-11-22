/* LEVEL_03:0x156ED0 -- relocates the record's offsets against the load base, then initializes the animated part and returns 1 (0 when a required offset is missing). */
typedef struct {
    int w0;
    int w4;
    int w8;
    int wC;
    int w10;
    char pad14[0x70];
    int w84;
    char pad88[0x18];
    int wA0;
} Rec;

typedef struct {
    char pad0[0x40];
    int w40;
} Chk;

typedef struct {
    char pad0[0x68];
    unsigned int flags;
} Hdr;

typedef struct {
    char pad0[0xC];
    Hdr *hdr;
} Part;

typedef struct {
    char pad0[4];
    Part *part;
    char pad8[0x1C];
    float f24;
    char pad28[0xC];
} Item;

typedef struct {
    char pad0[4];
    Item *items;
} Table;

typedef struct {
    char pad0[0x40];
    Table *table;
    unsigned char b44;
    char pad45[0xF];
    Rec *rec;
    char pad58[0x18];
    int w70;
    char pad74[3];
    unsigned char b77;
} Obj;

extern int D_0021F414;

static __inline__ int Reloc(int *p)
{
    int n;

    n = *p;
    if (n == 0) {
        return 0;
    }
    *p = D_0021F414 + n;
    return 1;
}

int func_156ED0(Obj *o)
{
    Rec *r;
    int n;
    Chk *c;

    r = o->rec;
    n = r->w0;
    if (n != 0) {
        r->w0 = D_0021F414 + n;
    }
    if (!Reloc(&r->wC)) {
        return 0;
    }
    if (!Reloc(&r->w10)) {
        return 0;
    }
    n = r->wA0;
    if (n != 0) {
        r->wA0 = D_0021F414 + n;
    }
    o->w70 = 0;
    n = r->w8;
    if (n != 0) {
        r->w8 = D_0021F414 + n;
    }
    n = r->w4;
    if (n != 0) {
        c = (Chk *)(D_0021F414 + n);
        if (c->w40 == 0) {
            r->w4 = 0;
        } else {
            r->w4 = (int)c;
        }
    }
    ((Item *)((char *)o->table->items + o->b44 * 0x34))->f24 = 20.0f;
    o->b77 = 0x80;
    r->w84 = 0;
    ((Item *)((char *)o->table->items + o->b44 * 0x34))->part->hdr->flags |= 0x40;
    return 1;
}
