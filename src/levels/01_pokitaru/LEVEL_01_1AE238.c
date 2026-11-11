/* LEVEL_01:0x1AE238 -- starts the object's effect with unit scale from the record behind it. */
typedef struct Rec {
    char pad0[0x24];
    int w24;
} Rec;

typedef struct Obj {
    char pad0[0x58];
    Rec *rec;
} Obj;

extern void func_1CFF28(Obj *o, Rec *rec, int value, float scale);

void func_1AE238(Obj *o)
{
    func_1CFF28(o, o->rec, o->rec->w24, 1.0f);
}
