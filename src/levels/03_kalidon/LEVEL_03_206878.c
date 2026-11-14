/* LEVEL_03:0x206878 -- placement copy of LEVEL_01_1ECA48.c: installs the table pointer in the object and returns the object. */
extern char D_002462F8[];
typedef struct Obj { char *tab; } Obj;
Obj *func_206878(Obj *o)
{
    o->tab = D_002462F8;
    return o;
}
