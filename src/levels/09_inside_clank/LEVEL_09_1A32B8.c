/* LEVEL_09:0x1A32B8 -- sets the object's countdown byte and a random float scaled into the range [0, limit] of its record; returns 1. */
typedef struct {
    char pad[0x04];
    float f04;
} Rec;

typedef struct {
    char pad00[0x54];
    Rec *rec;
    char pad58[0x18];
    float f70;
    char pad74[2];
    unsigned char b76;
} Obj;

extern int rand(void);

int func_1A32B8(Obj *o)
{
    float lo = 0.0f;
    float d;

    o->b76 = 30;
    d = o->rec->f04 - lo;
    o->f70 = lo + d * ((float)rand() * 4.656612873077393e-10f);
    return 1;
}
