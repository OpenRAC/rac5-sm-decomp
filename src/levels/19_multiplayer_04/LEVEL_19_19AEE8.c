/* LEVEL_19:0x19AEE8 -- placement copy of LEVEL_01_1ECA48.c: installs the table pointer in the object and returns the object. */
extern char D_001DA330[];
typedef struct Obj { char *tab; } Obj;
Obj *func_19AEE8(Obj *o)
{
    o->tab = D_001DA330;
    return o;
}
