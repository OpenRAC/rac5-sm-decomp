/* LEVEL_10:0x18C250 -- resets the object's linked record, flags the object and sets its state byte; always returns 1. */
typedef struct Rec {
    void *w00;
    char pad_04[0xA];
    unsigned char b0E;
    char pad_0F;
    void *owner;
    int w14;
    int w18;
    int w1C;
} Rec;

typedef struct Obj {
    char pad_00[0x58];
    Rec *rec;
    char pad_5C[8];
    unsigned int flags;
    char pad_68[0xF];
    unsigned char b77;
} Obj;

int func_18C250(Obj *o)
{
    Rec *r = o->rec;

    r->w1C = 0;
    r->w18 = 0;
    o->flags |= 0x400000;
    r->b0E = 2;
    r->owner = o;
    r->w14 = 0;
    r->w00 = 0;
    o->b77 = 0x37;
    return 1;
}
