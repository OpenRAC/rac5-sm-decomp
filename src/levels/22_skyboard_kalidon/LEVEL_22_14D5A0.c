/* LEVEL_22:0x14D5A0 -- placement copy of LEVEL_01_1ECA48.c: installs the table pointer in the object and returns the object. */
extern char D_0017D068[];
typedef struct Obj { char *tab; } Obj;
Obj *func_14D5A0(Obj *o)
{
    o->tab = D_0017D068;
    return o;
}
