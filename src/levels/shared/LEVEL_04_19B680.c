/* LEVEL_04:0x19B680 -- sets the object's state byte to 2 and its timer to 300, stores 30 in its record and returns 1. */
typedef struct {
    char pad00[0x3C];
    int w3C;
} Rec;

typedef struct {
    char pad00[0x45];
    unsigned char state;
    char pad46[0x12];
    Rec *rec;
    char pad5C[0x14];
    float timer;
} Obj;

int func_19B680(Obj *o)
{
    o->state = 2;
    o->timer = 300.0f;
    o->rec->w3C = 30;
    return 1;
}
