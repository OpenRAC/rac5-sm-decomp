/* LEVEL_08:0x1C8540 -- placement copy of LEVEL_04_1A3680.c: initializes an object's attached record: table pointer, state 1, an unassigned slot owned by the object. */
typedef struct Obj Obj;

typedef struct {
    unsigned short h0;
    unsigned char b2;
    char pad3;
    Obj *target;
} Slot;

typedef struct {
    char *table;
    int state;
    Slot slot;
} Rec;

struct Obj {
    char pad0[0x58];
    Rec *rec;
};

extern char D_00272120[];

int func_1C8540(Obj *o)
{
    Rec *r = o->rec;
    Slot *s;

    r->table = D_00272120;
    r->state = 1;
    s = &r->slot;
    s->b2 = 2;
    s->target = o;
    s->h0 = 0xFFFF;
    return 1;
}
