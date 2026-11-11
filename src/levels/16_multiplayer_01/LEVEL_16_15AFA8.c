/* LEVEL_16:0x15AFA8 -- scales the three floats at +0xC..+0x14 of the object's record by 30, copies the last one to the object's float at +0x70 and returns -1. */
typedef struct {
    char pad00[0xC];
    float fC;
    float f10;
    float f14;
} Rec;

typedef struct {
    char pad00[0x54];
    Rec *rec;
    char pad58[0x70 - 0x58];
    float f70;
} Obj;

int func_15AFA8(Obj *o)
{
    Rec *r;

    r = o->rec;
    r->f10 = r->f10 * 30.0f;
    r->fC = r->fC * 30.0f;
    r->f14 = r->f14 * 30.0f;
    o->f70 = r->f14;
    return -1;
}
