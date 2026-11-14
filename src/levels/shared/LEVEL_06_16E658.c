/* LEVEL_06:0x16E658 -- resets a float of the record and stores it back plus a random fraction of half a unit; returns 1. */
typedef struct { char pad00[0x24]; float f24; float f28; } Rec;
typedef struct { char pad00[0x58]; Rec *rec; } Obj;
extern int rand(void);

int func_16E658(Obj *o)
{
    Rec *r = o->rec;
    float base;
    float k;

    k = 0.5f;
    r->f24 = 0.0f;
    base = r->f24;
    r->f28 = base + (float)rand() * 4.656612873077393e-10f * k;
    return 1;
}
