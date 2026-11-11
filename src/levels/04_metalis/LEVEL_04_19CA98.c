/* LEVEL_04:0x19CA98 -- arms the object's link record: marks the object when its state is 1, points the record at its handler table and owner, and reports success. */
typedef struct Obj Obj;

typedef struct Sub {
    unsigned short h0;
    unsigned char b2;
    unsigned char pad3;
    Obj *owner;
} Sub;

typedef struct Rec {
    void *table;
    int w4;
    Sub sub;
} Rec;

struct Obj {
    char pad0[0x45];
    unsigned char state;
    char pad46;
    unsigned char mark;
    char pad48[0x58 - 0x48];
    Rec *rec;
};

extern char D_0023D900[];

static __inline__ void Arm(Sub *s, Obj *o)
{
    s->b2 = 2;
    s->owner = o;
}

int func_19CA98(Obj *o)
{
    Rec *r;

    if (o->state == 1)
        o->mark = o->state;
    r = o->rec;
    r->table = D_0023D900;
    r->w4 = 0;
    Arm(&r->sub, o);
    r->sub.h0 = 0xFFFF;
    return 1;
}
