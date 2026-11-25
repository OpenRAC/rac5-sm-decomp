/* LEVEL_17:0x152118 -- placement copy of LEVEL_16_159D18.c: initialises the sprite record of the object: derives the draw flags from the object and its table entry, asks for the screen box and queues it in the small or large slot depending on its extent, then clears the motion fields; returns 1 or -1 when unavailable. */
typedef struct Vec4 {
    float x;
    float y;
    float z;
    float w;
} Vec4;

typedef struct Entry {
    char pad_00[0xC];
    int a;
    int b;
    int c;
    char pad_18[0x1C];
} Entry;

typedef struct Set {
    char pad_00[4];
    Entry *entries;
    char pad_08[0x37];
    unsigned char tag;
} Set;

typedef struct Obj Obj;

typedef struct Rec {
    unsigned short id;
    unsigned char kind;
    unsigned char size;
    Obj *owner;
    float f08;
    float f0C;
    float f10;
    int i14;
    int i18;
} Rec;

struct Obj {
    char pad_00[0x40];
    Set *set;
    unsigned char index;
    char pad_45[0x13];
    Rec *rec;
    char pad_5C[8];
    unsigned int flags;
    char pad_68[0xF];
    unsigned char mode;
};

typedef struct Slot {
    char pad[0x68];
} Slot;

extern Slot D_001CF6F8[];
extern unsigned int func_112590(void);
extern int func_074FD0(void *a, void *b, void *c);
extern void func_086898(Slot *slot, Rec *rec, Vec4 *first, Vec4 *second, unsigned int flags);

int func_152118(Obj *o)
{
    Rec *r = o->rec;
    Entry *e;
    unsigned int base;
    unsigned int alt;
    unsigned int flags;
    unsigned int draw;
    float dx;
    float dz;
    Vec4 box0;
    Vec4 box1;
    int size;

    if (func_112590() != 0)
        return -1;
    r->kind = 2;
    r->id = 0xFFFF;
    r->owner = o;
    base = o->flags & 0x1420;
    e = &o->set->entries[o->index];
    alt = base | 1;
    flags = base | 0x81;
    if (e->a == 0)
        flags = alt;
    if (e->b != 0)
        flags |= 0x100;
    if (e->c != 0)
        flags |= 0x200;
    if (o->set->tag == 1)
        flags |= 0x800;
    if ((o->flags >> 3) & 1)
        flags |= 0x400;
    draw = flags | 0x10;
    if (func_074FD0(&box0, &box1, o) != 0) {
        dx = box1.x - box0.x;
        dz = box1.z - box0.z;
        if (dx > 8.0f || dz > 8.0f)
            size = 1;
        else
            size = 0;
        r->size = size;
        func_086898(&D_001CF6F8[size], r, &box0, &box1, draw);
    }
    r->i18 = 0;
    r->f0C = r->f08 = r->f10 = 0.0f;
    o->mode = 0;
    r->i14 = 0;
    return 1;
}
