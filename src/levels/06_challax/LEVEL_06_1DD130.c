/* LEVEL_06:0x1DD130 -- placement copy of LEVEL_01_1ECA48.c: installs the table pointer in the object and returns the object. */
extern char D_002181C8[];
typedef struct Obj { char *tab; } Obj;
Obj *func_1DD130(Obj *o)
{
    o->tab = D_002181C8;
    return o;
}
