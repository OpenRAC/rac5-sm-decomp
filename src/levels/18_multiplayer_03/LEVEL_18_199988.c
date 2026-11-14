/* LEVEL_18:0x199988 -- placement copy of LEVEL_01_1ECA48.c: installs the table pointer in the object and returns the object. */
extern char D_001DA310[];
typedef struct Obj { char *tab; } Obj;
Obj *func_199988(Obj *o)
{
    o->tab = D_001DA310;
    return o;
}
