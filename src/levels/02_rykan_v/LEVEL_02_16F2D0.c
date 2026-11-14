/* LEVEL_02:0x16F2D0 -- resets the object's state bytes, clears its record word and velocity-like word, marks the link as unset, sets flag bit 0x40 and returns 1. */
typedef struct Rec {
    char pad_00[0xC];
    int wC;
} Rec;

typedef struct Obj {
    char pad_00[0x45];
    unsigned char b45;
    unsigned char b46;
    char pad_47[0xD];
    Rec *rec;
    char pad_58[0xC];
    unsigned int flags;
    unsigned int link;
    char pad_6C[4];
    int w70;
} Obj;

int func_16F2D0(Obj *o)
{
    Rec *r = o->rec;

    o->b45 = 0;
    r->wC = 0;
    o->link = 0xFFFFFFFFu;
    o->w70 = 0;
    o->b46 = 0;
    o->flags |= 0x40;
    return 1;
}
