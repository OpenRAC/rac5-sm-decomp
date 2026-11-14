/* LEVEL_22:0x14BE00 -- placement copy of LEVEL_01_1ECA48.c: installs the table pointer in the object and returns the object. */
extern char D_0017CEA0[];
typedef struct Obj { char *tab; } Obj;
Obj *func_14BE00(Obj *o)
{
    o->tab = D_0017CEA0;
    return o;
}
