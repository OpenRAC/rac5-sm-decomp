/* LEVEL_04:0x171090 -- clears two record words, sets the object's timer to 300 and returns 1. */
typedef struct {
    char pad00[0x60];
    int w60;
    int w64;
} Rec;

typedef struct {
    char pad00[0x58];
    Rec *rec;
    char pad5C[0x14];
    float timer;
} Obj;

int func_171090(Obj *o)
{
    Rec *r = o->rec;

    r->w60 = 0;
    r->w64 = 0;
    o->timer = 300.0f;
    return 1;
}
