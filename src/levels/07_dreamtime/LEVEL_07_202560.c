/* LEVEL_07:0x202560 -- placement copy of LEVEL_01_1ECA48.c: installs the table pointer in the object and returns the object. */
extern char D_00240D58[];
typedef struct Obj { char *tab; } Obj;
Obj *func_202560(Obj *o)
{
    o->tab = D_00240D58;
    return o;
}
