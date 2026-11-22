/* LEVEL_01:0x1B98C0 -- resets the object's record and flags; objects of kind 4 are ready at once, others become ready when the helper accepts them and the owner has a table entry, in which case the record gets the table value and a 1.5 scale. */
typedef struct Rec {
    char pad0[0x70];
    float value;
    float scale;
} Rec;

typedef struct Owner {
    char pad0[0x34];
    int w34;
} Owner;

typedef struct Obj {
    char pad0[0x45];
    unsigned char kind;
    char pad46[0xE];
    Owner *owner;
    Rec *rec;
    char pad5C[8];
    unsigned int flags64;
    char pad68[0x10];
    unsigned int flags78;
} Obj;

typedef struct Cell {
    float v[4];
} Cell;

extern int D_0021A7F0;
extern Cell D_00219E00[][4];
extern void *memset(void *, int, unsigned int);
extern int func_1BBFD8(Obj *o);
extern int func_028290(void);

int func_1B98C0(Obj *o)
{
    Rec *r = o->rec;
    int base;
    int idx;
    int g;

    memset(r, 0, 0x78);
    o->flags78 = (o->flags78 & 0xFFF0FFFF) | 0x20000;
    o->flags64 |= 0x1000;
    if (o->kind == 4)
        return 1;
    if (func_1BBFD8(o) == 0)
        return 0;
    if (o->owner->w34 == 0)
        return 0;
    base = (int)D_00219E00;
    idx = func_028290() * 16;
    g = (D_0021A7F0 - 1) * 64;
    r->value = *(float *)(idx + g + base);
    r->scale = 1.5f;
    return 1;
}
