/* LEVEL_18:0x161360 -- placement copy of LEVEL_01_193E50.c: copies a byte of the object's record into the object and runs the shared reset with the state byte. */
typedef struct {
    char pad00[0x4E];
    unsigned char b4E;
} Rec;

typedef struct {
    char pad00[0x44];
    unsigned char b44;
    unsigned char state;
    char pad46[0x12];
    Rec *rec;
} Obj;

extern void func_161968(Obj *o);

void func_161360(Obj *o)
{
    o->b44 = o->rec->b4E;
    ((void (*)(Obj *, int, int))func_161968)(o, o->state, 0);
}
