/* LEVEL_04:0x1A3680 -- initializes an object's attached record: table pointer, state 1, an unassigned slot owned by the object. */
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

extern char D_0023E300[];

int func_1A3680(Obj *o)
{
    Rec *r = o->rec;
    Slot *s;

    r->table = D_0023E300;
    r->state = 1;
    s = &r->slot;
    s->b2 = 2;
    s->target = o;
    s->h0 = 0xFFFF;
    return 1;
}
