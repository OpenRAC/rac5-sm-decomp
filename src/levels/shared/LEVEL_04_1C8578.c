/* LEVEL_04:0x1C8578 -- initialises the object's record (state 2, no link, owner = object) and flags the object. */
typedef struct Obj Obj;
typedef struct {
    int w00;
    char pad_04[0xA];
    signed char state;
    char pad_0F;
    Obj *owner;
    int w14;
} Rec;
struct Obj {
    char pad_00[0x58];
    Rec *rec;
    char pad_5C[8];
    unsigned flags;
};

int func_1C8578(Obj *o)
{
    Rec *r = o->rec;
    r->state = 2;
    r->w14 = 0;
    r->owner = o;
    r->w14 = 0;
    r->w00 = 0;
    o->flags |= 0x30;
    return 1;
}
