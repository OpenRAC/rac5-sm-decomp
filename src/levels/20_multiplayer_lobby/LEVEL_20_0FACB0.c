/* LEVEL_20:0x0FACB0 -- placement copy of LEVEL_01_1ECA48.c: installs the table pointer in the object and returns the object. */
extern char D_00131930[];
typedef struct Obj { char *tab; } Obj;
Obj *func_0FACB0(Obj *o)
{
    o->tab = D_00131930;
    return o;
}
