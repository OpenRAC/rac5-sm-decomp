/* LEVEL_01:0x17B270 -- clears a field of the record behind the object and reports success. */
typedef struct Rec {
    char pad0[0x24];
    int w24;
} Rec;

typedef struct Obj {
    char pad0[0x58];
    Rec *rec;
} Obj;

int func_17B270(Obj *o)
{
    o->rec->w24 = 0;
    return 1;
}
