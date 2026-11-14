/* LEVEL_04:0x171628 -- clears two words of the object's record, sets a state byte and the object's float at +0x70 to 150.0f; returns 1. */
typedef struct {
    char pad_00[0x60];
    int w60;
    int w64;
} Sub;

typedef struct {
    char pad00[0x47];
    unsigned char b47;
    char pad48[0x10];
    Sub *sub;
    char pad5C[0x70 - 0x5C];
    float f70;
} Obj;

int func_171628(Obj *o)
{
    Sub *s;

    s = o->sub;
    s->w60 = 0;
    s->w64 = 0;
    o->f70 = 150.0f;
    o->b47 = 1;
    return 1;
}
