/* LEVEL_06:0x1DB990 -- placement copy of LEVEL_01_1ECA48.c: installs the table pointer in the object and returns the object. */
extern char D_00217FF8[];
typedef struct Obj { char *tab; } Obj;
Obj *func_1DB990(Obj *o)
{
    o->tab = D_00217FF8;
    return o;
}
