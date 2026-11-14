/* LEVEL_07:0x2025F8 -- placement copy of LEVEL_01_1ECA48.c: installs the table pointer in the object and returns the object. */
extern char D_00240D70[];
typedef struct Obj { char *tab; } Obj;
Obj *func_2025F8(Obj *o)
{
    o->tab = D_00240D70;
    return o;
}
