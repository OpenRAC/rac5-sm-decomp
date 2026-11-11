/* LEVEL_07:0x1C3A68 -- placement copy of LEVEL_01_1AE238.c: starts the object's effect with unit scale from the record behind it. */
typedef struct Rec {
    char pad0[0x24];
    int w24;
} Rec;

typedef struct Obj {
    char pad0[0x58];
    Rec *rec;
} Obj;

extern void func_1DCE78(Obj *o, Rec *rec, int value, float scale);

void func_1C3A68(Obj *o)
{
    func_1DCE78(o, o->rec, o->rec->w24, 1.0f);
}
