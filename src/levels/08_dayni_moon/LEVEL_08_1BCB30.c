/* LEVEL_08:0x1BCB30 -- placement copy of LEVEL_04_19BE00.c: initialises the object data block: table pointer, state 1, three random floats scaled to [0,1), owner link, mode 2, id 0xFFFF; reports 1. */
extern int rand(void);

struct Obj;

typedef struct Sub {
    unsigned short id;
    unsigned char mode;
    char pad03;
    struct Obj *owner;
} Sub;

typedef struct Data {
    int table;
    int state;
    Sub sub;
    float f10;
    float f14;
    float f18;
    int f1C;
} Data;

typedef struct Obj {
    char pad00[0x58];
    Data *data;
    char pad5C[0x64 - 0x5C];
    unsigned int flags;
} Obj;

extern char D_00270F20[];

static __inline__ void Link(Sub *s, Obj *o)
{
    s->owner = o;
    s->mode = 2;
}

int func_1BCB30(Obj *o)
{
    Data *d = o->data;

    o->flags |= 0x1000;
    d->table = (int)D_00270F20;
    d->state = 1;
    d->f10 = (float)rand() * 4.656612873077393e-10f;
    d->f14 = (float)rand() * 4.656612873077393e-10f;
    d->f18 = (float)rand() * 4.656612873077393e-10f;
    Link(&d->sub, o);
    d->sub.id = 0xFFFF;
    d->f1C = 0;
    return 1;
}
