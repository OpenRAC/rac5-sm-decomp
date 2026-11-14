/* LEVEL_01:0x1ECAE0 -- placement copy of LEVEL_01_1ECA48.c: installs the table pointer in the object and returns the object. */
extern char D_0022B2C8[];
typedef struct Obj { char *tab; } Obj;
Obj *func_1ECAE0(Obj *o)
{
    o->tab = D_0022B2C8;
    return o;
}
