/* LEVEL_15:0x141740 -- placement copy of LEVEL_01_1ECA48.c: installs the table pointer in the object and returns the object. */
extern char D_001733D8[];
typedef struct Obj { char *tab; } Obj;
Obj *func_141740(Obj *o)
{
    o->tab = D_001733D8;
    return o;
}
