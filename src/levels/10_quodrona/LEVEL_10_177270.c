/* LEVEL_10:0x177270 -- clears the five words of the object's sub-record, sets the object's float at +0x70 to 60.0f and returns 1. */
typedef struct {
    int w0;
    int w4;
    int w8;
    int wC;
    int w10;
} Sub;

typedef struct {
    char pad00[0x58];
    Sub *sub;
    char pad5C[0x70 - 0x5C];
    float f70;
} Obj;

int func_177270(Obj *o)
{
    Sub *s;

    s = o->sub;
    s->w0 = 0;
    s->w4 = 0;
    s->w8 = 0;
    s->wC = 0;
    s->w10 = 0;
    o->f70 = 60.0f;
    return 1;
}
