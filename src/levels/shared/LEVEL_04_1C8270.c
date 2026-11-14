/* LEVEL_04:0x1C8270 -- initializes the object's attached record, sets two flag bits on the object and returns 1. */
typedef struct {
    unsigned short h0;
    unsigned char b2;
    char pad3;
    void *owner;
} Rec;

typedef struct {
    char pad00[0x58];
    Rec *rec;
    char pad5C[0x64 - 0x5C];
    unsigned int flags;
} Obj;

int func_1C8270(Obj *o)
{
    Rec *r = o->rec;

    r->b2 = 2;
    r->owner = o;
    r->h0 = 0xFFFF;
    o->flags |= 0x30;
    return 1;
}
